#ifndef __HTRAM_H__
#define __HTRAM_H__
// #define SRC_GROUPING
// #define PER_DESTPE_BUFFER
// #define NODE_SRC_BUFFER
// #define LOCAL_BUF
// #define IDLE_FLUSH
#ifdef IDLE_FLUSH
#define PARTIAL_FLUSH 0.2
#endif
#define _K 40
#define ALL_BUF_TYPES
#include "htram_group.decl.h"
#include "weighted_node_struct.h"
#include <queue>
///* readonly */ extern CProxy_HTram tram_proxy;
///* readonly */ extern CProxy_HTramRecv nodeGrpProxy;
///* readonly */ extern CProxy_HTramNodeGrp srcNodeGrpProxy;
// #include "packet.h"
using namespace std;
#define SIZE_LIST                                                              \
  (int[]) { 1024, 512, 2048 }
#define BUFSIZE 8 
#define LOCAL_BUFSIZE 32 // 8
#define PPN_COUNT 24
#define NODE_COUNT 512

#define BUCKETS_BY_DEST
#define ADD_FILLERS
// #define DEBUG

#define TOTAL_LATENCY 0
#define MAX_LATENCY 1
#define MIN_LATENCY 2
#define TOTAL_MSGS 3
#define STATS_COUNT 4

#define WPs 0
#define WsP 1
#define PP 2
#define WW 3
template <typename T> struct item {
  // #if !defined(SRC_GROUPING) && !defined(PER_DESTPE_BUFFER)
  int destPe;
  // #endif
  T payload;
};

typedef Update datatype;
typedef std::queue<datatype> **array2d_of_queues;
// typedef int datatype;

// typedef packet1 datatype;

typedef item<datatype> itemT;

class HTramMessage : public CMessage_HTramMessage {
public:
  HTramMessage() { next = 0; }
  HTramMessage(HTramMessage *copy) {
    next = copy->next;
    std::copy(copy->buffer, copy->buffer + next, buffer);
  }
  int next{0}; // next available slot in buffer
  //    int track_count{0};
  //    int srcPe{-1};
  //    int ack_count{0};
  itemT buffer[BUFSIZE];
};

class HTramLocalMessage : public CMessage_HTramLocalMessage {
public:
  HTramLocalMessage() { next = 0; }
  HTramLocalMessage(int size, itemT *buf) : next(size) {
    std::copy(buf, buf + size, buffer);
  }
  itemT buffer[LOCAL_BUFSIZE];
  int next; // next available slot in buffer
};

class HTramNodeMessage : public CMessage_HTramNodeMessage {
public:
  HTramNodeMessage() {}
  datatype buffer[BUFSIZE];
  int offset[PPN_COUNT];
};

class HTramNodeGrp : public CBase_HTramNodeGrp {
  HTramNodeGrp_SDAG_CODE public : std::atomic_int flush_count{0};
  std::atomic_int get_idx[NODE_COUNT];
  std::atomic_int done_count[NODE_COUNT];
  //    HTramMessage
  HTramMessage **msgBuffers;
  HTramNodeGrp();
  HTramNodeGrp(CkMigrateMessage *msg);
};

typedef void (*callback_function)(void *, datatype);
typedef void (*callback_function_retarr)(void *, datatype *, int);
typedef int (*destproc_function)(void *, datatype);
typedef void (*end_function)(void *);

class HTram : public CBase_HTram {
  HTram_SDAG_CODE

      private : callback_function cb;
  callback_function_retarr cb_retarr;
  destproc_function get_dest_proc;
  end_function tram_done;
  CkGroupID client_gid;
  CProxy_HTramRecv nodeGrpProxy;
  CProxy_HTramNodeGrp srcNodeGrpProxy;
  CkCallback endCb;
  CkCallback return_cb;
  int myPE, buf_type;
  int agg;
  int local_recv_count, tot_recv_count, tot_send_count, local_updates;
  int histo_bucket_count,
      direct_threshold = 0,
      tram_threshold = 0; //, updates_in_tram=0,largest_seen_tram_threshold=0;
  int num_nodes;
  float selectivity = 1.0;
  int est_total_items_in_bucket_arr;
  bool ret_list;
  bool request;
  double flush_time;
  double msg_stats[STATS_COUNT]{0.0};
  int local_idx[NODE_COUNT];
#ifdef BUCKETS_BY_DEST
  int *updates_in_tram;
#else
  int updates_in_tram_count = 0;
#endif
#ifdef BUCKETS_BY_DEST
  array2d_of_queues tram_hold;
#else
  std::queue<datatype> *tram_hold;
#endif
  void *objPtr;
  HTramNodeGrp *srcNodeGrp;
  HTramRecv *nodeGrp;
  //    HTramMessage
  HTramMessage **msgBuffers;
  HTramLocalMessage **local_buf;
  HTramMessage *localMsgBuffer;
  std::vector<itemT> *localBuffers;
#if 0
    std::vector<std::vector<HTramMessage*>> overflowBuffers;
#endif
  std::vector<std::vector<HTramMessage *>> fillerOverflowBuffers;
  std::vector<std::vector<int>> fillerOverflowBuffersBucketMin;
  std::vector<std::vector<int>> fillerOverflowBuffersBucketMax;
  int nodesize = 0;
  int *nodeOf;

public:
  bool enable_flush;
  int bufSize;
  int prevBufSize;
  int agg_msg_count;
  int flush_msg_count;
  HTram(CkGroupID recv_ngid, CkGroupID src_ngid, int buffer_size,
        bool enable_timed_flushing, double flush_timer, bool ret_item, bool req,
        CkCallback start_cb);
  HTram(CkGroupID gid, CkCallback cb);
  HTram(CkMigrateMessage *msg);
  void set_func_ptr(void (*func)(void *, datatype), void *);
  void set_func_ptr_retarr(void (*func)(void *, datatype *, int),
                           int (*func2)(void *, datatype),
                           void (*func3)(void *), void *);
  int getAggregatingPE(int dest_pe);
  void copyToNodeBuf(int destnode, int increment);
  void insertValue(datatype send_value, int dest_pe);
  void insertValueWPs(datatype send_value, int dest_pe);
  void sendItemPrioDeferredDest(datatype new_update, int neighbor_bucket);
  void reset_stats(int buf_type, int buf_size, int agtype);
  void enableIdleFlush();
  void tflush(bool idleflush = false);
  void flush_everything();
  void shareArrayOfBuckets(std::vector<datatype> *new_tram_hold,
                           int bucket_count);
#ifdef BUCKETS_BY_DEST
  void insertBucketsByDest(int, int);
#else
  void insertBuckets(int);
#endif
  void changeThreshold(int, int, float);
  void sanityCheck();
  void getTotSendCount(int);
  void getTotRecvCount(int);
  void getTotTramHCount(int);
  bool idleFlush();
  void avgLatency(CkCallback cb);
  // #ifdef SRC_GROUPING
  void receivePerPE(HTramMessage *);
  // #elif defined PER_DESTPE_BUFFER
  void receiveOnPE(HTramMessage *msg);
  //    void receiveOnPELarge(HTramMessageSmall* msg);
  // #else
  void receivePerPE(HTramNodeMessage *);
  // #endif
  void registercb();
  void stop_periodic_flush();
};

class HTramRecv : public CBase_HTramRecv {
  HTramRecv_SDAG_CODE CkCallback return_cb;

public:
  CProxy_HTram tram_proxy;
  double msg_stats[STATS_COUNT]{0.0};
  std::atomic_int *msgs_in_transit;
  std::atomic_int *msgs_received_from;
  HTramRecv();
  HTramRecv(CkMigrateMessage *msg);
  void setTramProxy(CkGroupID);
  // #ifndef PER_DESTPE_BUFFER
  void receive(HTramMessage *);

  void receive_no_sort(HTramMessage *);
  void receive_small(HTramLocalMessage *);
  void avgLatency(CkCallback cb);
  // #endif
};
#endif
