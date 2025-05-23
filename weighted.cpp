#include "weighted.decl.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string>

CProxy_Main mainProxy;
CProxy_WeightedArray arr;
int N; // number of processors
int V; // number of vertices
int imax;
int average;

class Main : public CBase_Main {
  // CkVec<Node> graph;
private:
  // int not_returned;
  int start_vertex;
  int *partition_index;
  double start_time;
  double read_time;
  double total_time;
  double compute_begin;
  double compute_time;

public:
  Main(CkArgMsg *m) {
    N = atoi(m->argv[1]);               // read in number of processes
    V = atoi(m->argv[2]);               // read in number of vertices
    std::string file_name = m->argv[3]; // read file name
    int S = atoi(m->argv[4]);           // randomize seed
    start_vertex = atoi(m->argv[5]);    // number of beginning vertex
    unsigned int seed = (unsigned int)S;
    srand(seed);
    int first_node = 0;
    if (is_PUPbytes<std::pair<int, int>>::value)
      ckout << "Value set correctly" << endl;
    imax = std::numeric_limits<int>::max();
    partition_index = new int[N];
    start_time = CkWallTimer();
    // read file
    std::ifstream file(file_name);
    std::string readbuf;
    std::string delim = ",";
    // iterate through edge list
    ckout << "Loop begins" << endl;
    CkVec<LongEdge> edges;
    while (getline(file, readbuf)) {
      // get vertex labels on each edge
      std::string token = readbuf.substr(0, readbuf.find(delim));
      std::string token2 =
          readbuf.substr(readbuf.find(delim) + 1, readbuf.length());
      // make random distance
      int edge_distance = rand() % 10 + 1;
      // string to int
      int node_num = std::stoi(token);
      int node_num_2 = std::stoi(token2);
      // ckout << "Edge begin " << node_num << " Edge end " << node_num_2 << "
      // Edge length " << edge_distance << endl;
      LongEdge new_edge;
      new_edge.begin = node_num;
      new_edge.end = node_num_2;
      new_edge.distance = edge_distance;
      edges.insertAtEnd(new_edge);
    }
    file.close();
    ckout << "Loop complete" << endl;
    read_time = CkWallTimer() - start_time;
    // define updater array, set main proxy
    arr = CProxy_WeightedArray::ckNew(N);
    mainProxy = thisProxy;
    // assign vertices to location, one list per pe
    CkVec<LongEdge> edge_lists[N];
    average = edges.size() / N;
    // assign edges to pes
    for (int i = 0; i < edges.size(); i++) {
      int dest_proc = i / average;
      if (dest_proc >= N)
        dest_proc = N - 1; // assign all remaining edges to the last pe
      else if (i % average == 0)
        partition_index[dest_proc] =
            edges[i]
                .begin; // if this is the first edge on this pe, mark the
                        // beginning of the edge as the first vertex on the pe
      edge_lists[dest_proc].insertAtEnd(edges[i]);
      ckout << "Edge " << edges[i].begin << " to " << edges[i].end
            << " assigned to chare " << dest_proc << endl;
    }
    // reassign edges to move to correct pe
    for (int i = 0; i < N - 1; i++) {
      for (int j = edge_lists[i].size() - 1; j >= 0; --j) {
        // TODO
        if (edge_lists[i][j].begin >= partition_index[i + 1]) {
          edge_lists[i + 1].insert(0, edge_lists[i][j]);
          edge_lists[i].remove(j);
        }
      }
    }
    // add nodes to node lists
    // send subgraphs to nodes
    for (int i = 0; i < N; i++) {
      arr[i].get_graph(edge_lists[i], partition_index, N);
    }
  }
  void begin(int result) {
    // ready to begin algorithm
    // if(result==N)
    //{
    for (int i = 0; i < N; i++) {
      ckout << "Start vertex for partition " << i << ": " << partition_index[i]
            << endl;
    }
    std::pair<int, int> new_edge;
    new_edge.first = start_vertex;
    new_edge.second = 0;
    // CkVec<Edge> dist_list;
    // dist_list.insertAtEnd(new_edge);
    int dest_proc = 0;
    for (int i = 0; i < N - 1; i++) {
      if (start_vertex > partition_index[i + 1])
        dest_proc++;
      else
        break;
    }
    // ckout << dest_proc << endl;
    compute_begin = CkWallTimer();
    arr[dest_proc].update_distances(new_edge);
    // quiescence detection
    CkCallback cb(CkIndex_Main::print(), mainProxy);
    CkStartQD(cb);
    //}
  }
  void print() {
    // not_returned = N;
    compute_time = CkWallTimer() - compute_begin;
    arr.print_distances();
  }
  void done(int result) {
    // not_returned--;
    // if(result==N)
    ckout << "Completed" << endl;
    total_time = CkWallTimer() - start_time;
    ckout << "Read time: " << read_time << endl;
    ckout << "Compute time: " << compute_time << endl;
    ckout << "Total time: " << total_time << endl;
    CkExit(0);
  }
};

class WeightedArray : public CBase_WeightedArray {
private:
  Node *local_graph;
  int start_vertex;
  int num_vertices;
  int *partition_index;

public:
  WeightedArray() {}
  void get_graph(CkVec<LongEdge> edges, int *partition, int N) {
    partition_index = new int[N];
    for (int i = 0; i < N; i++) {
      partition_index[i] = partition[i];
    }
    start_vertex = edges[0].begin;
    num_vertices = 1 + edges[edges.size() - 1].begin - start_vertex;
    // ckout << "Num vertices chare " << thisIndex << ": " << num_vertices <<
    // endl;
    local_graph = new Node[num_vertices];
    for (int i = 0; i < num_vertices; i++) {
      Node new_node;
      new_node.home_process = thisIndex;
      new_node.index = i + start_vertex;
      new_node.distance = imax;
      CkVec<Edge> adj;
      new_node.adjacent = adj;
      local_graph[i] = new_node;
    }
    for (int i = 0; i < edges.size(); i++) {
      Edge new_edge;
      new_edge.end = edges[i].end;
      new_edge.distance = edges[i].distance;
      // ckout << "Processor " << thisIndex << " origin " << edges[i].begin << "
      // destination " << new_edge.end << " weight " << new_edge.distance <<
      // endl;
      local_graph[edges[i].begin - start_vertex].adjacent.insertAtEnd(new_edge);
    }
    int now_done = 1;
    CkCallback cb(CkReductionTarget(Main, begin), mainProxy);
    contribute(sizeof(int), &now_done, CkReduction::sum_int, cb);
    // mainProxy.begin();
  }

  void update_distances(std::pair<int, int> new_vertex_and_distance) {

    int local_index = new_vertex_and_distance.first - start_vertex;
    // ckout << "Local index: " << local_index << endl;
    if (new_vertex_and_distance.second < local_graph[local_index].distance) {
      local_graph[local_index].distance = new_vertex_and_distance.second;
      for (int i = 0; i < local_graph[local_index].adjacent.size(); i++) {
        std::pair<int, int> updated_dist;
        updated_dist.first = local_graph[local_index].adjacent[i].end;
        // ckout << "Neighbor: " << updated_dist.end << endl;
        updated_dist.second = local_graph[local_index].distance +
                              local_graph[local_index].adjacent[i].distance;
        int dest_proc = 0;
        for (int j = 0; j < N - 1; j++) {
          // ckout << "Current partition value: " << partition_index[j+1] <<
          // endl;
          if (updated_dist.first >= partition_index[j + 1])
            dest_proc++;
          else
            break;
        }
        // ckout << "Dest proc: " << dest_proc << endl;
        if (updated_dist.first > 0 && updated_dist.first < V)
          arr[dest_proc].update_distances(updated_dist);
      }
    }
  }

  void print_distances() {

    /* //enable only for smaller graphs
    for(int i=0; i<num_vertices; i++)
    {
            ckout << "Partition " << thisIndex << " vertex num " <<
    local_graph[i].index << " distance " << local_graph[i].distance << endl;
    }
    */

    int done = 1; // placeholder
    CkCallback cb(CkReductionTarget(Main, done), mainProxy);
    contribute(sizeof(int), &done, CkReduction::sum_int, cb);
    // mainProxy.done();
  }
};

#include "weighted.def.h"
