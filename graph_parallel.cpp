#include "graph_parallel.decl.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <limits>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sys/stat.h>

CProxy_Main mainProxy;
CProxy_Readers readerProxy;
std::string file_name;
int N; // number of processors
int V; // number of vertices
int S;
int imax; // integer maximum

class Main : public CBase_Main {
  Main_SDAG_CODE

      private :
      // int not_returned;

      double start_time;
  double read_time;
  long max_index;
  long file_size;
  struct stat sb;

public:
  Main(CkArgMsg *m) {
    N = CkNumPes() * 4; // read in number of chares
    if (!m->argv[1]) {
      ckout << "Missing vertex count" << endl;
      CkExit(0);
    }
    V = atoi(m->argv[1]); // read in number of vertices
    if (!m->argv[2]) {
      ckout << "Missing file name" << endl;
      CkExit(0);
    }
    if (lstat(m->argv[2], &sb) == -1) {
      perror("lstat");
      exit(1);
    }
    file_name = m->argv[2]; // read file name
    file_size = sb.st_size;
    S = atoi(m->argv[3]); // randomize seed
    if (!m->argv[3]) {
      ckout << "Missing random seed" << endl;
      CkExit(0);
    }
    mainProxy = thisProxy;
    unsigned int seed = (unsigned int)S;
    srand(seed);
    imax = std::numeric_limits<int>::max();
    readerProxy = CProxy_Readers::ckNew(N);
    ckout << "File size: " << file_size << " bytes" << endl;
    delete m;
    start_time = CkWallTimer();
    long chunk_size = file_size / N;
    for (int i = 0; i < N; i++) {
      long start = i * chunk_size;     // inclusive
      long end = (i + 1) * chunk_size; // exclusive
      if (i == N - 1)
        end = file_size;
      readerProxy[i].read_file(start, end);
    }
    // CkExit(0);
  }

  void done() {
    read_time = CkWallTimer() - start_time;
    ckout << "Read time: " << read_time << endl;
    CkExit(0);
  }
};

class Readers : public CBase_Readers {
public:
  char *read_buffer;
  long size;
  Readers() {}

  void read_file(long start, long end) {
    ckout << "Start, end on PE " << thisIndex << ": " << start << ", " << end
          << endl;
    std::ifstream file_obj(file_name, std::ios::binary);
    size = end - start;
    read_buffer = new char[size];
    file_obj.seekg(start, std::ios::beg);
    file_obj.read(read_buffer, size);
    file_obj.close();
    // ckout << "PE " << thisIndex << " read in: \"" << read_buffer << "\"" <<
    // endl;
    if (thisIndex != 0) {
      int first_endline = 0;
      for (long i = 0; i < size; i++) {
        if (read_buffer[i] == '\n') {
          first_endline = i;
          break;
        }
      }
      char *send_back_buffer = new char[first_endline + 1];
      for (long i = 0; i < first_endline + 1; i++) {
        send_back_buffer[i] = read_buffer[i];
      }
      readerProxy[thisIndex - 1].get_overlap(send_back_buffer,
                                             first_endline + 1);
    }
    if (thisIndex == N - 1) {
      CkCallback cb(CkReductionTarget(Main, done), mainProxy);
      contribute(0, NULL, CkReduction::nop, cb);
    }
  }

  void get_overlap(char *send_back_buffer, long send_back_size) {
    // ckout << "PE " << thisIndex << " got back: \"" << send_back_buffer <<
    // "\"" << endl; char *tmp = new char[size + send_back_size];
    std::string beginning(read_buffer);
    std::string end(send_back_buffer);
    std::string combination = beginning + end;
    // ckout << "PE " << thisIndex << " combination: \"" << combination.c_str()
    // << "\"" << endl;
    CkCallback cb(CkReductionTarget(Main, done), mainProxy);
    contribute(0, NULL, CkReduction::nop, cb);
  }
};

#include "graph_parallel.def.h"