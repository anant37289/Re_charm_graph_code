#ifndef _DECL_weighted_htram_smp_H_
#define _DECL_weighted_htram_smp_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "vector"

#include "map"

#include "htram_group.decl.h"

/* DECLS: readonly CProxy_Main mainProxy;
 */

/* DECLS: readonly CProxy_SsspChares arr;
 */

/* DECLS: readonly CProxy_SharedInfo shared;
 */

/* DECLS: readonly int N;
 */

/* DECLS: readonly long V;
 */

/* DECLS: readonly int M;
 */

/* DECLS: readonly long average_degree;
 */

/* DECLS: readonly int S;
 */

/* DECLS: readonly long num_global_edges;
 */

/* DECLS: readonly int generate_mode;
 */

/* DECLS: readonly cost lmax;
 */

/* DECLS: readonly int buffer_size;
 */

/* DECLS: readonly int histo_bucket_count;
 */

/* DECLS: readonly int initial_threshold;
 */

/* DECLS: readonly double reduction_delay;
 */

/* DECLS: readonly double flush_timer;
 */

/* DECLS: readonly bool enable_buffer_flushing;
 */

/* DECLS: readonly CProxy_HTram tram_proxy;
 */

/* DECLS: readonly CProxy_processHeapShared process_heap_shared;
 */

/* DECLS: readonly int tile_size;
 */

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void begin(const cost &max_sum);
void quiescence_detected();
void reduce_histogram(const long *histo_values, int histo_length);
void done(const long *msg_stats, int N);
void check_buffer_done(const long *msg_stats, int N);
void done_max_cost(const cost &max_cost);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void begin(const cost &max_sum);
     */
    // Entry point registration at startup
    
    static int reg_begin_marshall2();
    // Entry point index lookup
    
    inline static int idx_begin_marshall2() {
      static int epidx = reg_begin_marshall2();
      return epidx;
    }

    
    inline static int idx_begin(void (Main::*)(const cost &max_sum) ) {
      return idx_begin_marshall2();
    }


    
    static int begin(const cost &max_sum) { return idx_begin_marshall2(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_begin_marshall2();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_begin_marshall2() {
      static int epidx = reg_redn_wrapper_begin_marshall2();
      return epidx;
    }
    
    static int redn_wrapper_begin(CkReductionMsg* impl_msg) { return idx_redn_wrapper_begin_marshall2(); }
    
    static void _call_redn_wrapper_begin_marshall2(void* impl_msg, void* impl_obj_void);
    
    static void _call_begin_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_begin_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_begin_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_begin_marshall2(PUP::er &p,void *msg);
    /* DECLS: void quiescence_detected();
     */
    // Entry point registration at startup
    
    static int reg_quiescence_detected_void();
    // Entry point index lookup
    
    inline static int idx_quiescence_detected_void() {
      static int epidx = reg_quiescence_detected_void();
      return epidx;
    }

    
    inline static int idx_quiescence_detected(void (Main::*)() ) {
      return idx_quiescence_detected_void();
    }


    
    static int quiescence_detected() { return idx_quiescence_detected_void(); }
    
    static void _call_quiescence_detected_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_quiescence_detected_void(void* impl_msg, void* impl_obj);
    /* DECLS: void reduce_histogram(const long *histo_values, int histo_length);
     */
    // Entry point registration at startup
    
    static int reg_reduce_histogram_marshall4();
    // Entry point index lookup
    
    inline static int idx_reduce_histogram_marshall4() {
      static int epidx = reg_reduce_histogram_marshall4();
      return epidx;
    }

    
    inline static int idx_reduce_histogram(void (Main::*)(const long *histo_values, int histo_length) ) {
      return idx_reduce_histogram_marshall4();
    }


    
    static int reduce_histogram(const long *histo_values, int histo_length) { return idx_reduce_histogram_marshall4(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_reduce_histogram_marshall4();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_reduce_histogram_marshall4() {
      static int epidx = reg_redn_wrapper_reduce_histogram_marshall4();
      return epidx;
    }
    
    static int redn_wrapper_reduce_histogram(CkReductionMsg* impl_msg) { return idx_redn_wrapper_reduce_histogram_marshall4(); }
    
    static void _call_redn_wrapper_reduce_histogram_marshall4(void* impl_msg, void* impl_obj_void);
    
    static void _call_reduce_histogram_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_reduce_histogram_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_reduce_histogram_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_reduce_histogram_marshall4(PUP::er &p,void *msg);
    /* DECLS: void done(const long *msg_stats, int N);
     */
    // Entry point registration at startup
    
    static int reg_done_marshall5();
    // Entry point index lookup
    
    inline static int idx_done_marshall5() {
      static int epidx = reg_done_marshall5();
      return epidx;
    }

    
    inline static int idx_done(void (Main::*)(const long *msg_stats, int N) ) {
      return idx_done_marshall5();
    }


    
    static int done(const long *msg_stats, int N) { return idx_done_marshall5(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_marshall5();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_marshall5() {
      static int epidx = reg_redn_wrapper_done_marshall5();
      return epidx;
    }
    
    static int redn_wrapper_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_marshall5(); }
    
    static void _call_redn_wrapper_done_marshall5(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_done_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_done_marshall5(PUP::er &p,void *msg);
    /* DECLS: void check_buffer_done(const long *msg_stats, int N);
     */
    // Entry point registration at startup
    
    static int reg_check_buffer_done_marshall6();
    // Entry point index lookup
    
    inline static int idx_check_buffer_done_marshall6() {
      static int epidx = reg_check_buffer_done_marshall6();
      return epidx;
    }

    
    inline static int idx_check_buffer_done(void (Main::*)(const long *msg_stats, int N) ) {
      return idx_check_buffer_done_marshall6();
    }


    
    static int check_buffer_done(const long *msg_stats, int N) { return idx_check_buffer_done_marshall6(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_check_buffer_done_marshall6();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_check_buffer_done_marshall6() {
      static int epidx = reg_redn_wrapper_check_buffer_done_marshall6();
      return epidx;
    }
    
    static int redn_wrapper_check_buffer_done(CkReductionMsg* impl_msg) { return idx_redn_wrapper_check_buffer_done_marshall6(); }
    
    static void _call_redn_wrapper_check_buffer_done_marshall6(void* impl_msg, void* impl_obj_void);
    
    static void _call_check_buffer_done_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_check_buffer_done_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_check_buffer_done_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_check_buffer_done_marshall6(PUP::er &p,void *msg);
    /* DECLS: void done_max_cost(const cost &max_cost);
     */
    // Entry point registration at startup
    
    static int reg_done_max_cost_marshall7();
    // Entry point index lookup
    
    inline static int idx_done_max_cost_marshall7() {
      static int epidx = reg_done_max_cost_marshall7();
      return epidx;
    }

    
    inline static int idx_done_max_cost(void (Main::*)(const cost &max_cost) ) {
      return idx_done_max_cost_marshall7();
    }


    
    static int done_max_cost(const cost &max_cost) { return idx_done_max_cost_marshall7(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_done_max_cost_marshall7();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_done_max_cost_marshall7() {
      static int epidx = reg_redn_wrapper_done_max_cost_marshall7();
      return epidx;
    }
    
    static int redn_wrapper_done_max_cost(CkReductionMsg* impl_msg) { return idx_redn_wrapper_done_max_cost_marshall7(); }
    
    static void _call_redn_wrapper_done_max_cost_marshall7(void* impl_msg, void* impl_obj_void);
    
    static void _call_done_max_cost_marshall7(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_max_cost_marshall7(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_done_max_cost_marshall7(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_done_max_cost_marshall7(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void begin(const cost &max_sum);
 */
    
    void begin(const cost &max_sum, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void quiescence_detected();
 */
    
    void quiescence_detected(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void reduce_histogram(const long *histo_values, int histo_length);
 */
    
    void reduce_histogram(const long *histo_values, int histo_length, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done(const long *msg_stats, int N);
 */
    
    void done(const long *msg_stats, int N, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void check_buffer_done(const long *msg_stats, int N);
 */
    
    void check_buffer_done(const long *msg_stats, int N, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done_max_cost(const cost &max_cost);
 */
    
    void done_max_cost(const cost &max_cost, const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array SsspChares: ArrayElement{
SsspChares(const CProxy_HTram &htram);
void initiate_pointers();
bool idle_triggered();
void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
void start_papi();
void start_algo(const Update &new_vertex_and_distance);
void process_heap();
void process_update(const Update &new_vertex_and_distance);
void check_buffer();
void contribute_histogram(int behind_first_nonzero);
void keep_going();
void clear_pq_hold();
void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
void print_distances();
void stop_periodic_flush();
void get_max_cost();
SsspChares(CkMigrateMessage* impl_msg);
};
 */
 class SsspChares;
 class CkIndex_SsspChares;
 class CProxy_SsspChares;
 class CProxyElement_SsspChares;
 class CProxySection_SsspChares;
/* --------------- index object ------------------ */
class CkIndex_SsspChares:public CkIndex_ArrayElement{
  public:
    typedef SsspChares local_t;
    typedef CkIndex_SsspChares index_t;
    typedef CProxy_SsspChares proxy_t;
    typedef CProxyElement_SsspChares element_t;
    typedef CProxySection_SsspChares section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: SsspChares(const CProxy_HTram &htram);
     */
    // Entry point registration at startup
    
    static int reg_SsspChares_marshall1();
    // Entry point index lookup
    
    inline static int idx_SsspChares_marshall1() {
      static int epidx = reg_SsspChares_marshall1();
      return epidx;
    }

    
    static int ckNew(const CProxy_HTram &htram) { return idx_SsspChares_marshall1(); }
    
    static void _call_SsspChares_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SsspChares_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_SsspChares_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_SsspChares_marshall1(PUP::er &p,void *msg);
    /* DECLS: void initiate_pointers();
     */
    // Entry point registration at startup
    
    static int reg_initiate_pointers_void();
    // Entry point index lookup
    
    inline static int idx_initiate_pointers_void() {
      static int epidx = reg_initiate_pointers_void();
      return epidx;
    }

    
    inline static int idx_initiate_pointers(void (SsspChares::*)() ) {
      return idx_initiate_pointers_void();
    }


    
    static int initiate_pointers() { return idx_initiate_pointers_void(); }
    
    static void _call_initiate_pointers_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_initiate_pointers_void(void* impl_msg, void* impl_obj);
    /* DECLS: bool idle_triggered();
     */
    // Entry point registration at startup
    
    static int reg_idle_triggered_void();
    // Entry point index lookup
    
    inline static int idx_idle_triggered_void() {
      static int epidx = reg_idle_triggered_void();
      return epidx;
    }

    
    inline static int idx_idle_triggered(bool (SsspChares::*)() ) {
      return idx_idle_triggered_void();
    }


    
    static int idle_triggered() { return idx_idle_triggered_void(); }
    
    static void _call_idle_triggered_void(void* impl_obj);
    
    static void _call_sdag_idle_triggered_void(void* impl_msg, void* impl_obj);
    /* DECLS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
     */
    // Entry point registration at startup
    
    static int reg_generate_2d_graph_marshall4();
    // Entry point index lookup
    
    inline static int idx_generate_2d_graph_marshall4() {
      static int epidx = reg_generate_2d_graph_marshall4();
      return epidx;
    }

    
    inline static int idx_generate_2d_graph(void (SsspChares::*)(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe) ) {
      return idx_generate_2d_graph_marshall4();
    }


    
    static int generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe) { return idx_generate_2d_graph_marshall4(); }
    
    static void _call_generate_2d_graph_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_generate_2d_graph_marshall4(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_generate_2d_graph_marshall4(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_generate_2d_graph_marshall4(PUP::er &p,void *msg);
    /* DECLS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
     */
    // Entry point registration at startup
    
    static int reg_generate_local_graph_marshall5();
    // Entry point index lookup
    
    inline static int idx_generate_local_graph_marshall5() {
      static int epidx = reg_generate_local_graph_marshall5();
      return epidx;
    }

    
    inline static int idx_generate_local_graph(void (SsspChares::*)(long _num_vertices, long _num_edges, const long *partition, int dividers) ) {
      return idx_generate_local_graph_marshall5();
    }


    
    static int generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers) { return idx_generate_local_graph_marshall5(); }
    
    static void _call_generate_local_graph_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_generate_local_graph_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_generate_local_graph_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_generate_local_graph_marshall5(PUP::er &p,void *msg);
    /* DECLS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
     */
    // Entry point registration at startup
    
    static int reg_get_graph_marshall6();
    // Entry point index lookup
    
    inline static int idx_get_graph_marshall6() {
      static int epidx = reg_get_graph_marshall6();
      return epidx;
    }

    
    inline static int idx_get_graph(void (SsspChares::*)(const LongEdge *edges, long E, const long *partition, int dividers) ) {
      return idx_get_graph_marshall6();
    }


    
    static int get_graph(const LongEdge *edges, long E, const long *partition, int dividers) { return idx_get_graph_marshall6(); }
    
    static void _call_get_graph_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_get_graph_marshall6(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_get_graph_marshall6(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_get_graph_marshall6(PUP::er &p,void *msg);
    /* DECLS: void start_papi();
     */
    // Entry point registration at startup
    
    static int reg_start_papi_void();
    // Entry point index lookup
    
    inline static int idx_start_papi_void() {
      static int epidx = reg_start_papi_void();
      return epidx;
    }

    
    inline static int idx_start_papi(void (SsspChares::*)() ) {
      return idx_start_papi_void();
    }


    
    static int start_papi() { return idx_start_papi_void(); }
    
    static void _call_start_papi_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_papi_void(void* impl_msg, void* impl_obj);
    /* DECLS: void start_algo(const Update &new_vertex_and_distance);
     */
    // Entry point registration at startup
    
    static int reg_start_algo_marshall8();
    // Entry point index lookup
    
    inline static int idx_start_algo_marshall8() {
      static int epidx = reg_start_algo_marshall8();
      return epidx;
    }

    
    inline static int idx_start_algo(void (SsspChares::*)(const Update &new_vertex_and_distance) ) {
      return idx_start_algo_marshall8();
    }


    
    static int start_algo(const Update &new_vertex_and_distance) { return idx_start_algo_marshall8(); }
    
    static void _call_start_algo_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_start_algo_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_start_algo_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_start_algo_marshall8(PUP::er &p,void *msg);
    /* DECLS: void process_heap();
     */
    // Entry point registration at startup
    
    static int reg_process_heap_void();
    // Entry point index lookup
    
    inline static int idx_process_heap_void() {
      static int epidx = reg_process_heap_void();
      return epidx;
    }

    
    inline static int idx_process_heap(void (SsspChares::*)() ) {
      return idx_process_heap_void();
    }


    
    static int process_heap() { return idx_process_heap_void(); }
    
    static void _call_process_heap_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_process_heap_void(void* impl_msg, void* impl_obj);
    /* DECLS: void process_update(const Update &new_vertex_and_distance);
     */
    // Entry point registration at startup
    
    static int reg_process_update_marshall10();
    // Entry point index lookup
    
    inline static int idx_process_update_marshall10() {
      static int epidx = reg_process_update_marshall10();
      return epidx;
    }

    
    inline static int idx_process_update(void (SsspChares::*)(const Update &new_vertex_and_distance) ) {
      return idx_process_update_marshall10();
    }


    
    static int process_update(const Update &new_vertex_and_distance) { return idx_process_update_marshall10(); }
    
    static void _call_process_update_marshall10(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_process_update_marshall10(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_process_update_marshall10(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_process_update_marshall10(PUP::er &p,void *msg);
    /* DECLS: void check_buffer();
     */
    // Entry point registration at startup
    
    static int reg_check_buffer_void();
    // Entry point index lookup
    
    inline static int idx_check_buffer_void() {
      static int epidx = reg_check_buffer_void();
      return epidx;
    }

    
    inline static int idx_check_buffer(void (SsspChares::*)() ) {
      return idx_check_buffer_void();
    }


    
    static int check_buffer() { return idx_check_buffer_void(); }
    
    static void _call_check_buffer_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_check_buffer_void(void* impl_msg, void* impl_obj);
    /* DECLS: void contribute_histogram(int behind_first_nonzero);
     */
    // Entry point registration at startup
    
    static int reg_contribute_histogram_marshall12();
    // Entry point index lookup
    
    inline static int idx_contribute_histogram_marshall12() {
      static int epidx = reg_contribute_histogram_marshall12();
      return epidx;
    }

    
    inline static int idx_contribute_histogram(void (SsspChares::*)(int behind_first_nonzero) ) {
      return idx_contribute_histogram_marshall12();
    }


    
    static int contribute_histogram(int behind_first_nonzero) { return idx_contribute_histogram_marshall12(); }
    
    static void _call_contribute_histogram_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_contribute_histogram_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_contribute_histogram_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_contribute_histogram_marshall12(PUP::er &p,void *msg);
    /* DECLS: void keep_going();
     */
    // Entry point registration at startup
    
    static int reg_keep_going_void();
    // Entry point index lookup
    
    inline static int idx_keep_going_void() {
      static int epidx = reg_keep_going_void();
      return epidx;
    }

    
    inline static int idx_keep_going(void (SsspChares::*)() ) {
      return idx_keep_going_void();
    }


    
    static int keep_going() { return idx_keep_going_void(); }
    
    static void _call_keep_going_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_keep_going_void(void* impl_msg, void* impl_obj);
    /* DECLS: void clear_pq_hold();
     */
    // Entry point registration at startup
    
    static int reg_clear_pq_hold_void();
    // Entry point index lookup
    
    inline static int idx_clear_pq_hold_void() {
      static int epidx = reg_clear_pq_hold_void();
      return epidx;
    }

    
    inline static int idx_clear_pq_hold(void (SsspChares::*)() ) {
      return idx_clear_pq_hold_void();
    }


    
    static int clear_pq_hold() { return idx_clear_pq_hold_void(); }
    
    static void _call_clear_pq_hold_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_clear_pq_hold_void(void* impl_msg, void* impl_obj);
    /* DECLS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
     */
    // Entry point registration at startup
    
    static int reg_current_thresholds_marshall15();
    // Entry point index lookup
    
    inline static int idx_current_thresholds_marshall15() {
      static int epidx = reg_current_thresholds_marshall15();
      return epidx;
    }

    
    inline static int idx_current_thresholds(void (SsspChares::*)(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase) ) {
      return idx_current_thresholds_marshall15();
    }


    
    static int current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase) { return idx_current_thresholds_marshall15(); }
    
    static void _call_current_thresholds_marshall15(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_current_thresholds_marshall15(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_current_thresholds_marshall15(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_current_thresholds_marshall15(PUP::er &p,void *msg);
    /* DECLS: void print_distances();
     */
    // Entry point registration at startup
    
    static int reg_print_distances_void();
    // Entry point index lookup
    
    inline static int idx_print_distances_void() {
      static int epidx = reg_print_distances_void();
      return epidx;
    }

    
    inline static int idx_print_distances(void (SsspChares::*)() ) {
      return idx_print_distances_void();
    }


    
    static int print_distances() { return idx_print_distances_void(); }
    
    static void _call_print_distances_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_print_distances_void(void* impl_msg, void* impl_obj);
    /* DECLS: void stop_periodic_flush();
     */
    // Entry point registration at startup
    
    static int reg_stop_periodic_flush_void();
    // Entry point index lookup
    
    inline static int idx_stop_periodic_flush_void() {
      static int epidx = reg_stop_periodic_flush_void();
      return epidx;
    }

    
    inline static int idx_stop_periodic_flush(void (SsspChares::*)() ) {
      return idx_stop_periodic_flush_void();
    }


    
    static int stop_periodic_flush() { return idx_stop_periodic_flush_void(); }
    
    static void _call_stop_periodic_flush_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_stop_periodic_flush_void(void* impl_msg, void* impl_obj);
    /* DECLS: void get_max_cost();
     */
    // Entry point registration at startup
    
    static int reg_get_max_cost_void();
    // Entry point index lookup
    
    inline static int idx_get_max_cost_void() {
      static int epidx = reg_get_max_cost_void();
      return epidx;
    }

    
    inline static int idx_get_max_cost(void (SsspChares::*)() ) {
      return idx_get_max_cost_void();
    }


    
    static int get_max_cost() { return idx_get_max_cost_void(); }
    
    static void _call_get_max_cost_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_get_max_cost_void(void* impl_msg, void* impl_obj);
    /* DECLS: SsspChares(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_SsspChares_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_SsspChares_CkMigrateMessage() {
      static int epidx = reg_SsspChares_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_SsspChares_CkMigrateMessage(); }
    
    static void _call_SsspChares_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SsspChares_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_SsspChares : public CProxyElement_ArrayElement{
  public:
    typedef SsspChares local_t;
    typedef CkIndex_SsspChares index_t;
    typedef CProxy_SsspChares proxy_t;
    typedef CProxyElement_SsspChares element_t;
    typedef CProxySection_SsspChares section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_SsspChares(void) {
    }
    CProxyElement_SsspChares(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    SsspChares *ckLocal(void) const
    { return (SsspChares *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_SsspChares(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_SsspChares(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_SsspChares(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_SsspChares(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: SsspChares(const CProxy_HTram &htram);
 */
    
    void insert(const CProxy_HTram &htram, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void initiate_pointers();
 */
    
    void initiate_pointers(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: bool idle_triggered();
 */
    bool idle_triggered(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
    
    void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
    
    void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
    
    void get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_papi();
 */
    
    void start_papi(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_algo(const Update &new_vertex_and_distance);
 */
    
    void start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_heap();
 */
    
    void process_heap(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_update(const Update &new_vertex_and_distance);
 */
    
    void process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check_buffer();
 */
    
    void check_buffer(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void contribute_histogram(int behind_first_nonzero);
 */
    
    void contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void keep_going();
 */
    
    void keep_going(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void clear_pq_hold();
 */
    
    void clear_pq_hold(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
    
    void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void print_distances();
 */
    
    void print_distances(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_max_cost();
 */
    
    void get_max_cost(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: SsspChares(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_SsspChares : public CProxy_ArrayElement{
  public:
    typedef SsspChares local_t;
    typedef CkIndex_SsspChares index_t;
    typedef CProxy_SsspChares proxy_t;
    typedef CProxyElement_SsspChares element_t;
    typedef CProxySection_SsspChares section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_SsspChares(void) {
    }
    CProxy_SsspChares(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_SsspChares operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_SsspChares(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_SsspChares operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_SsspChares(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_SsspChares operator [] (int idx) const 
        {return CProxyElement_SsspChares(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_SsspChares operator () (int idx) const 
        {return CProxyElement_SsspChares(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_SsspChares(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_SsspChares(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: SsspChares(const CProxy_HTram &htram);
 */
    
    static CkArrayID ckNew(const CProxy_HTram &htram, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CProxy_HTram &htram, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CProxy_HTram &htram, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CProxy_HTram &htram, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void initiate_pointers();
 */
    
    void initiate_pointers(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: bool idle_triggered();
 */

/* DECLS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
    
    void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
    
    void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
    
    void get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_papi();
 */
    
    void start_papi(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_algo(const Update &new_vertex_and_distance);
 */
    
    void start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_heap();
 */
    
    void process_heap(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_update(const Update &new_vertex_and_distance);
 */
    
    void process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check_buffer();
 */
    
    void check_buffer(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void contribute_histogram(int behind_first_nonzero);
 */
    
    void contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void keep_going();
 */
    
    void keep_going(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void clear_pq_hold();
 */
    
    void clear_pq_hold(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
    
    void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void print_distances();
 */
    
    void print_distances(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_max_cost();
 */
    
    void get_max_cost(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: SsspChares(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_SsspChares : public CProxySection_ArrayElement{
  public:
    typedef SsspChares local_t;
    typedef CkIndex_SsspChares index_t;
    typedef CProxy_SsspChares proxy_t;
    typedef CProxyElement_SsspChares element_t;
    typedef CProxySection_SsspChares section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_SsspChares(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_SsspChares operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_SsspChares(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_SsspChares operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_SsspChares(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_SsspChares operator [] (int idx) const 
        {return CProxyElement_SsspChares(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_SsspChares operator () (int idx) const 
        {return CProxyElement_SsspChares(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_SsspChares(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_SsspChares(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_SsspChares(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_SsspChares(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_SsspChares(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_SsspChares(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_SsspChares(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_SsspChares(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_SsspChares(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_SsspChares(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_SsspChares(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: SsspChares(const CProxy_HTram &htram);
 */
    

/* DECLS: void initiate_pointers();
 */
    
    void initiate_pointers(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: bool idle_triggered();
 */

/* DECLS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
    
    void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
    
    void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
    
    void get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_papi();
 */
    
    void start_papi(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void start_algo(const Update &new_vertex_and_distance);
 */
    
    void start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_heap();
 */
    
    void process_heap(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void process_update(const Update &new_vertex_and_distance);
 */
    
    void process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void check_buffer();
 */
    
    void check_buffer(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void contribute_histogram(int behind_first_nonzero);
 */
    
    void contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void keep_going();
 */
    
    void keep_going(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void clear_pq_hold();
 */
    
    void clear_pq_hold(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
    
    void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void print_distances();
 */
    
    void print_distances(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void get_max_cost();
 */
    
    void get_max_cost(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: SsspChares(CkMigrateMessage* impl_msg);
 */

};
#define SsspChares_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_SsspChares>CBase_SsspChares;

/* DECLS: group SharedInfo: IrrGroup{
SharedInfo();
void max_path_value(const cost &max_path_val);
};
 */
 class SharedInfo;
 class CkIndex_SharedInfo;
 class CProxy_SharedInfo;
 class CProxyElement_SharedInfo;
 class CProxySection_SharedInfo;
/* --------------- index object ------------------ */
class CkIndex_SharedInfo:public CkIndex_IrrGroup{
  public:
    typedef SharedInfo local_t;
    typedef CkIndex_SharedInfo index_t;
    typedef CProxy_SharedInfo proxy_t;
    typedef CProxyElement_SharedInfo element_t;
    typedef CProxySection_SharedInfo section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: SharedInfo();
     */
    // Entry point registration at startup
    
    static int reg_SharedInfo_void();
    // Entry point index lookup
    
    inline static int idx_SharedInfo_void() {
      static int epidx = reg_SharedInfo_void();
      return epidx;
    }

    
    static int ckNew() { return idx_SharedInfo_void(); }
    
    static void _call_SharedInfo_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_SharedInfo_void(void* impl_msg, void* impl_obj);
    /* DECLS: void max_path_value(const cost &max_path_val);
     */
    // Entry point registration at startup
    
    static int reg_max_path_value_marshall2();
    // Entry point index lookup
    
    inline static int idx_max_path_value_marshall2() {
      static int epidx = reg_max_path_value_marshall2();
      return epidx;
    }

    
    inline static int idx_max_path_value(void (SharedInfo::*)(const cost &max_path_val) ) {
      return idx_max_path_value_marshall2();
    }


    
    static int max_path_value(const cost &max_path_val) { return idx_max_path_value_marshall2(); }
    
    static void _call_max_path_value_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_max_path_value_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_max_path_value_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_max_path_value_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_SharedInfo: public CProxyElement_IrrGroup{
  public:
    typedef SharedInfo local_t;
    typedef CkIndex_SharedInfo index_t;
    typedef CProxy_SharedInfo proxy_t;
    typedef CProxyElement_SharedInfo element_t;
    typedef CProxySection_SharedInfo section_t;


    /* TRAM aggregators */

    CProxyElement_SharedInfo(void) {
    }
    CProxyElement_SharedInfo(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_SharedInfo(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_SharedInfo(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_IrrGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_IrrGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_IrrGroup::ckSetGroupID(g);
    }
    SharedInfo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SharedInfo* ckLocalBranch(CkGroupID gID) {
      return (SharedInfo*)CkLocalBranch(gID);
    }
/* DECLS: SharedInfo();
 */
    

/* DECLS: void max_path_value(const cost &max_path_val);
 */
    
    void max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_SharedInfo: public CProxy_IrrGroup{
  public:
    typedef SharedInfo local_t;
    typedef CkIndex_SharedInfo index_t;
    typedef CProxy_SharedInfo proxy_t;
    typedef CProxyElement_SharedInfo element_t;
    typedef CProxySection_SharedInfo section_t;

    CProxy_SharedInfo(void) {
    }
    CProxy_SharedInfo(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_SharedInfo(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_SharedInfo(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_SharedInfo operator[](int onPE) const
      {return CProxyElement_SharedInfo(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_IrrGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_IrrGroup::ckSetGroupID(g);
    }
    SharedInfo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SharedInfo* ckLocalBranch(CkGroupID gID) {
      return (SharedInfo*)CkLocalBranch(gID);
    }
/* DECLS: SharedInfo();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void max_path_value(const cost &max_path_val);
 */
    
    void max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts=NULL);
    
    void max_path_value(const cost &max_path_val, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void max_path_value(const cost &max_path_val, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_SharedInfo: public CProxySection_IrrGroup{
  public:
    typedef SharedInfo local_t;
    typedef CkIndex_SharedInfo index_t;
    typedef CProxy_SharedInfo proxy_t;
    typedef CProxyElement_SharedInfo element_t;
    typedef CProxySection_SharedInfo section_t;

    CProxySection_SharedInfo(void) {
    }
    CProxySection_SharedInfo(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_SharedInfo(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_SharedInfo(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_SharedInfo(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_SharedInfo(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_IrrGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_IrrGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_IrrGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_IrrGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_IrrGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_IrrGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_IrrGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_IrrGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_IrrGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_IrrGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_IrrGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_IrrGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_IrrGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_IrrGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_IrrGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_IrrGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_IrrGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_IrrGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_IrrGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_IrrGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_IrrGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_IrrGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_IrrGroup::ckSetGroupID(g);
    }
    SharedInfo* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static SharedInfo* ckLocalBranch(CkGroupID gID) {
      return (SharedInfo*)CkLocalBranch(gID);
    }
/* DECLS: SharedInfo();
 */
    

/* DECLS: void max_path_value(const cost &max_path_val);
 */
    
    void max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts=NULL);

};
#define SharedInfo_SDAG_CODE 
typedef CBaseT1<Group, CProxy_SharedInfo>CBase_SharedInfo;

/* DECLS: nodegroup processHeapShared: NodeGroup{
processHeapShared();
void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
};
 */
 class processHeapShared;
 class CkIndex_processHeapShared;
 class CProxy_processHeapShared;
 class CProxyElement_processHeapShared;
 class CProxySection_processHeapShared;
/* --------------- index object ------------------ */
class CkIndex_processHeapShared:public CkIndex_NodeGroup{
  public:
    typedef processHeapShared local_t;
    typedef CkIndex_processHeapShared index_t;
    typedef CProxy_processHeapShared proxy_t;
    typedef CProxyElement_processHeapShared element_t;
    typedef CProxySection_processHeapShared section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: processHeapShared();
     */
    // Entry point registration at startup
    
    static int reg_processHeapShared_void();
    // Entry point index lookup
    
    inline static int idx_processHeapShared_void() {
      static int epidx = reg_processHeapShared_void();
      return epidx;
    }

    
    static int ckNew() { return idx_processHeapShared_void(); }
    
    static void _call_processHeapShared_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_processHeapShared_void(void* impl_msg, void* impl_obj);
    /* DECLS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
     */
    // Entry point registration at startup
    
    static int reg_processHeapOtherCaller_marshall2();
    // Entry point index lookup
    
    inline static int idx_processHeapOtherCaller_marshall2() {
      static int epidx = reg_processHeapOtherCaller_marshall2();
      return epidx;
    }

    
    inline static int idx_processHeapOtherCaller(void (processHeapShared::*)(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count) ) {
      return idx_processHeapOtherCaller_marshall2();
    }


    
    static int processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count) { return idx_processHeapOtherCaller_marshall2(); }
    
    static void _call_processHeapOtherCaller_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_processHeapOtherCaller_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_processHeapOtherCaller_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_processHeapOtherCaller_marshall2(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_processHeapShared: public CProxyElement_NodeGroup{
  public:
    typedef processHeapShared local_t;
    typedef CkIndex_processHeapShared index_t;
    typedef CProxy_processHeapShared proxy_t;
    typedef CProxyElement_processHeapShared element_t;
    typedef CProxySection_processHeapShared section_t;


    /* TRAM aggregators */

    CProxyElement_processHeapShared(void) {
    }
    CProxyElement_processHeapShared(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_processHeapShared(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_processHeapShared(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
    }

    int ckIsDelegated(void) const
    { return CProxyElement_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxyElement_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxyElement_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxyElement_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_NodeGroup::ckSetReductionClient(cb); }
int ckGetGroupPe(void) const
{return CProxyElement_NodeGroup::ckGetGroupPe();}

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxyElement_NodeGroup::ckSetGroupID(g);
    }
    processHeapShared* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static processHeapShared* ckLocalBranch(CkGroupID gID) {
      return (processHeapShared*)CkLocalNodeBranch(gID);
    }
/* DECLS: processHeapShared();
 */
    

/* DECLS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
    
    void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_processHeapShared: public CProxy_NodeGroup{
  public:
    typedef processHeapShared local_t;
    typedef CkIndex_processHeapShared index_t;
    typedef CProxy_processHeapShared proxy_t;
    typedef CProxyElement_processHeapShared element_t;
    typedef CProxySection_processHeapShared section_t;

    CProxy_processHeapShared(void) {
    }
    CProxy_processHeapShared(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_processHeapShared(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_processHeapShared(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_processHeapShared operator[](int onPE) const
      {return CProxyElement_processHeapShared(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

    int ckIsDelegated(void) const
    { return CProxy_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxy_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxy_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxy_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_NodeGroup::ckSetReductionClient(cb); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxy_NodeGroup::ckSetGroupID(g);
    }
    processHeapShared* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static processHeapShared* ckLocalBranch(CkGroupID gID) {
      return (processHeapShared*)CkLocalNodeBranch(gID);
    }
/* DECLS: processHeapShared();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
    
    void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_processHeapShared: public CProxySection_NodeGroup{
  public:
    typedef processHeapShared local_t;
    typedef CkIndex_processHeapShared index_t;
    typedef CProxy_processHeapShared proxy_t;
    typedef CProxyElement_processHeapShared element_t;
    typedef CProxySection_processHeapShared section_t;

    CProxySection_processHeapShared(void) {
    }
    CProxySection_processHeapShared(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_processHeapShared(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_processHeapShared(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_processHeapShared(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_processHeapShared(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

    int ckIsDelegated(void) const
    { return CProxySection_NodeGroup::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_NodeGroup::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_NodeGroup::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_NodeGroup::ckDelegatedIdx(); }
inline void ckCheck(void) const {CProxySection_NodeGroup::ckCheck();}
CkChareID ckGetChareID(void) const
   {return CProxySection_NodeGroup::ckGetChareID();}
CkGroupID ckGetGroupID(void) const
   {return CProxySection_NodeGroup::ckGetGroupID();}
operator CkGroupID () const { return ckGetGroupID(); }

    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_NodeGroup::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_NodeGroup::ckSetReductionClient(cb); }
inline int ckGetNumSections() const
{ return CProxySection_NodeGroup::ckGetNumSections(); }
inline CkSectionInfo &ckGetSectionInfo()
{ return CProxySection_NodeGroup::ckGetSectionInfo(); }
inline CkSectionID *ckGetSectionIDs()
{ return CProxySection_NodeGroup::ckGetSectionIDs(); }
inline CkSectionID &ckGetSectionID()
{ return CProxySection_NodeGroup::ckGetSectionID(); }
inline CkSectionID &ckGetSectionID(int i)
{ return CProxySection_NodeGroup::ckGetSectionID(i); }
inline CkGroupID ckGetGroupIDn(int i) const
{ return CProxySection_NodeGroup::ckGetGroupIDn(i); }
inline const int *ckGetElements() const
{ return CProxySection_NodeGroup::ckGetElements(); }
inline const int *ckGetElements(int i) const
{ return CProxySection_NodeGroup::ckGetElements(i); }
inline int ckGetNumElements() const
{ return CProxySection_NodeGroup::ckGetNumElements(); } 
inline int ckGetNumElements(int i) const
{ return CProxySection_NodeGroup::ckGetNumElements(i); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_NodeGroup::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_NodeGroup::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_NodeGroup::pup(p);
    }
    void ckSetGroupID(CkGroupID g) {
      CProxySection_NodeGroup::ckSetGroupID(g);
    }
    processHeapShared* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static processHeapShared* ckLocalBranch(CkGroupID gID) {
      return (processHeapShared*)CkLocalNodeBranch(gID);
    }
/* DECLS: processHeapShared();
 */
    

/* DECLS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
    
    void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts=NULL);

};
#define processHeapShared_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_processHeapShared>CBase_processHeapShared;
























/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct begin_2_closure;


    struct quiescence_detected_3_closure;


    struct reduce_histogram_4_closure;


    struct done_5_closure;


    struct check_buffer_done_6_closure;


    struct done_max_cost_7_closure;

};

/* ---------------- method closures -------------- */
class Closure_SsspChares {
  public:


    struct initiate_pointers_2_closure;



    struct generate_2d_graph_4_closure;


    struct generate_local_graph_5_closure;


    struct get_graph_6_closure;


    struct start_papi_7_closure;


    struct start_algo_8_closure;


    struct process_heap_9_closure;


    struct process_update_10_closure;


    struct check_buffer_11_closure;


    struct contribute_histogram_12_closure;


    struct keep_going_13_closure;


    struct clear_pq_hold_14_closure;


    struct current_thresholds_15_closure;


    struct print_distances_16_closure;


    struct stop_periodic_flush_17_closure;


    struct get_max_cost_18_closure;


};

/* ---------------- method closures -------------- */
class Closure_SharedInfo {
  public:


    struct max_path_value_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_processHeapShared {
  public:


    struct processHeapOtherCaller_2_closure;

};

extern void _registerweighted_htram_smp(void);
extern "C" void CkRegisterMainModule(void);
#endif
