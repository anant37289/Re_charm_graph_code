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
#define ALL_BUF_TYPES
#include "htram_group.decl.h"
#include "weighted_node_struct.h"
///* readonly */ extern CProxy_HTram tram_proxy;
///* readonly */ extern CProxy_HTramRecv nodeGrpProxy;
///* readonly */ extern CProxy_HTramNodeGrp srcNodeGrpProxy;
// #include "packet.h"
using namespace std;
#define SIZE_LIST                                                              \
  (int[]) { 1024, 512, 2048 }
#define BUFSIZE                                                                \
  512 // 4096//2048//512//1024//256//1024//2048//1024//4096//2048//4096//2048//1024
// 2048//1024//512//1024//1600//512//1600//1024//4096//2048//1024
#define LOCAL_BUFSIZE 32 // 8
#define PPN_COUNT 8
#define NODE_COUNT 512

#define TOTAL_LATENCY 0
#define MAX_LATENCY 1
#define MIN_LATENCY 2
#define TOTAL_MSGS 3
#define STATS_COUNT 4

#define PNs 0
#define PsN 1
#define NNs 2
#define PP 3
template <typename T> struct item {
  // #if !defined(SRC_GROUPING) && !defined(PER_DESTPE_BUFFER)
  int destPe;
  // #endif
  T payload;
};

typedef Update datatype;
// typedef int datatype;

// typedef packet1 datatype;

typedef item<datatype> itemT;

class HTramMessage : public CMessage_HTramMessage {
public:
  int next{0}; // next available slot in buffer
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

class HTram : public CBase_HTram {
  HTram_SDAG_CODE

      private : callback_function cb;
  callback_function_retarr cb_retarr;
  CkGroupID client_gid;
  CProxy_HTramRecv nodeGrpProxy;
  CProxy_HTramNodeGrp srcNodeGrpProxy;
  CkCallback endCb;
  CkCallback return_cb;
  int myPE, buf_type;
  int agg;
  bool ret_list;
  bool request;
  double flush_time;
  double msg_stats[STATS_COUNT]{0.0};
  int local_idx[NODE_COUNT];
  void *objPtr;
  HTramNodeGrp *srcNodeGrp;
  HTramRecv *nodeGrp;
  //    HTramMessage
  HTramMessage **msgBuffers;
  HTramLocalMessage **local_buf;
  HTramMessage *localMsgBuffer;
  std::vector<itemT> *localBuffers;

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
  void set_func_ptr_retarr(void (*func)(void *, datatype *, int), void *);
  int getAggregatingPE(int dest_pe);
  void copyToNodeBuf(int destnode, int increment);
  void insertValue(datatype send_value, int dest_pe);
  void reset_stats(int buf_type, int buf_size, int agtype);
  void enableIdleFlush();
  void tflush(bool idleflush = false);
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
