






















/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::begin_2_closure : public SDAG::Closure {
            cost max_sum;


      begin_2_closure() {
        init();
      }
      begin_2_closure(CkMigrateMessage*) {
        init();
      }
            cost & getP0() { return max_sum;}
      void pup(PUP::er& __p) {
        __p | max_sum;
        packClosure(__p);
      }
      virtual ~begin_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(begin_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::quiescence_detected_3_closure : public SDAG::Closure {
      

      quiescence_detected_3_closure() {
        init();
      }
      quiescence_detected_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~quiescence_detected_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(quiescence_detected_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::reduce_histogram_4_closure : public SDAG::Closure {
            long *histo_values;
            int histo_length;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      reduce_histogram_4_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      reduce_histogram_4_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            long *& getP0() { return histo_values;}
            int & getP1() { return histo_length;}
      void pup(PUP::er& __p) {
        __p | histo_length;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_histo_values, impl_cnt_histo_values;
  implP|impl_off_histo_values;
  implP|impl_cnt_histo_values;
  PUP::detail::TemporaryObjectHolder<int> histo_length;
  implP|histo_length;
          impl_buf+=CK_ALIGN(implP.size(),16);
          histo_values = (long *)(impl_buf+impl_off_histo_values);
        }
      }
      virtual ~reduce_histogram_4_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(reduce_histogram_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_5_closure : public SDAG::Closure {
            long *msg_stats;
            int N;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      done_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      done_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            long *& getP0() { return msg_stats;}
            int & getP1() { return N;}
      void pup(PUP::er& __p) {
        __p | N;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
          impl_buf+=CK_ALIGN(implP.size(),16);
          msg_stats = (long *)(impl_buf+impl_off_msg_stats);
        }
      }
      virtual ~done_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(done_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::check_buffer_done_6_closure : public SDAG::Closure {
            long *msg_stats;
            int N;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      check_buffer_done_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      check_buffer_done_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            long *& getP0() { return msg_stats;}
            int & getP1() { return N;}
      void pup(PUP::er& __p) {
        __p | N;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
          impl_buf+=CK_ALIGN(implP.size(),16);
          msg_stats = (long *)(impl_buf+impl_off_msg_stats);
        }
      }
      virtual ~check_buffer_done_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(check_buffer_done_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::done_max_cost_7_closure : public SDAG::Closure {
            cost max_cost;


      done_max_cost_7_closure() {
        init();
      }
      done_max_cost_7_closure(CkMigrateMessage*) {
        init();
      }
            cost & getP0() { return max_cost;}
      void pup(PUP::er& __p) {
        __p | max_cost;
        packClosure(__p);
      }
      virtual ~done_max_cost_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(done_max_cost_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::initiate_pointers_2_closure : public SDAG::Closure {
      

      initiate_pointers_2_closure() {
        init();
      }
      initiate_pointers_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~initiate_pointers_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(initiate_pointers_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::generate_2d_graph_4_closure : public SDAG::Closure {
            map<long,vector<long>> pe_to_vertices;
            map<long,long> vertex_to_pe;


      generate_2d_graph_4_closure() {
        init();
      }
      generate_2d_graph_4_closure(CkMigrateMessage*) {
        init();
      }
            map<long,vector<long>> & getP0() { return pe_to_vertices;}
            map<long,long> & getP1() { return vertex_to_pe;}
      void pup(PUP::er& __p) {
        __p | pe_to_vertices;
        __p | vertex_to_pe;
        packClosure(__p);
      }
      virtual ~generate_2d_graph_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(generate_2d_graph_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::generate_local_graph_5_closure : public SDAG::Closure {
            long _num_vertices;
            long _num_edges;
            long *partition;
            int dividers;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      generate_local_graph_5_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      generate_local_graph_5_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            long & getP0() { return _num_vertices;}
            long & getP1() { return _num_edges;}
            long *& getP2() { return partition;}
            int & getP3() { return dividers;}
      void pup(PUP::er& __p) {
        __p | _num_vertices;
        __p | _num_edges;
        __p | dividers;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<long> _num_vertices;
  implP|_num_vertices;
  PUP::detail::TemporaryObjectHolder<long> _num_edges;
  implP|_num_edges;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
          impl_buf+=CK_ALIGN(implP.size(),16);
          partition = (long *)(impl_buf+impl_off_partition);
        }
      }
      virtual ~generate_local_graph_5_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(generate_local_graph_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::get_graph_6_closure : public SDAG::Closure {
            LongEdge *edges;
            long E;
            long *partition;
            int dividers;

      CkMarshallMsg* _impl_marshall;
      char* _impl_buf_in;
      int _impl_buf_size;

      get_graph_6_closure() {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
      get_graph_6_closure(CkMigrateMessage*) {
        init();
        _impl_marshall = 0;
        _impl_buf_in = 0;
        _impl_buf_size = 0;
      }
            LongEdge *& getP0() { return edges;}
            long & getP1() { return E;}
            long *& getP2() { return partition;}
            int & getP3() { return dividers;}
      void pup(PUP::er& __p) {
        __p | E;
        __p | dividers;
        packClosure(__p);
        __p | _impl_buf_size;
        bool hasMsg = (_impl_marshall != 0); __p | hasMsg;
        if (hasMsg) CkPupMessage(__p, (void**)&_impl_marshall);
        else PUParray(__p, _impl_buf_in, _impl_buf_size);
        if (__p.isUnpacking()) {
          char *impl_buf = _impl_marshall ? _impl_marshall->msgBuf : _impl_buf_in;
          PUP::fromMem implP(impl_buf);
  int impl_off_edges, impl_cnt_edges;
  implP|impl_off_edges;
  implP|impl_cnt_edges;
  PUP::detail::TemporaryObjectHolder<long> E;
  implP|E;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
          impl_buf+=CK_ALIGN(implP.size(),16);
          edges = (LongEdge *)(impl_buf+impl_off_edges);
          partition = (long *)(impl_buf+impl_off_partition);
        }
      }
      virtual ~get_graph_6_closure() {
        if (_impl_marshall) CmiFree(UsrToEnv(_impl_marshall));
      }
      PUPable_decl(SINGLE_ARG(get_graph_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::start_papi_7_closure : public SDAG::Closure {
      

      start_papi_7_closure() {
        init();
      }
      start_papi_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~start_papi_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_papi_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::start_algo_8_closure : public SDAG::Closure {
            Update new_vertex_and_distance;


      start_algo_8_closure() {
        init();
      }
      start_algo_8_closure(CkMigrateMessage*) {
        init();
      }
            Update & getP0() { return new_vertex_and_distance;}
      void pup(PUP::er& __p) {
        __p | new_vertex_and_distance;
        packClosure(__p);
      }
      virtual ~start_algo_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(start_algo_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::process_heap_9_closure : public SDAG::Closure {
      

      process_heap_9_closure() {
        init();
      }
      process_heap_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~process_heap_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(process_heap_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::process_update_10_closure : public SDAG::Closure {
            Update new_vertex_and_distance;


      process_update_10_closure() {
        init();
      }
      process_update_10_closure(CkMigrateMessage*) {
        init();
      }
            Update & getP0() { return new_vertex_and_distance;}
      void pup(PUP::er& __p) {
        __p | new_vertex_and_distance;
        packClosure(__p);
      }
      virtual ~process_update_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(process_update_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::check_buffer_11_closure : public SDAG::Closure {
      

      check_buffer_11_closure() {
        init();
      }
      check_buffer_11_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~check_buffer_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(check_buffer_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::contribute_histogram_12_closure : public SDAG::Closure {
            int behind_first_nonzero;


      contribute_histogram_12_closure() {
        init();
      }
      contribute_histogram_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return behind_first_nonzero;}
      void pup(PUP::er& __p) {
        __p | behind_first_nonzero;
        packClosure(__p);
      }
      virtual ~contribute_histogram_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(contribute_histogram_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::keep_going_13_closure : public SDAG::Closure {
      

      keep_going_13_closure() {
        init();
      }
      keep_going_13_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~keep_going_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(keep_going_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::clear_pq_hold_14_closure : public SDAG::Closure {
      

      clear_pq_hold_14_closure() {
        init();
      }
      clear_pq_hold_14_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~clear_pq_hold_14_closure() {
      }
      PUPable_decl(SINGLE_ARG(clear_pq_hold_14_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::current_thresholds_15_closure : public SDAG::Closure {
            int _heap_threshold;
            int _tram_threshold;
            int _bfs_threshold;
            int behind_first_nonzero;
            int phase;


      current_thresholds_15_closure() {
        init();
      }
      current_thresholds_15_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return _heap_threshold;}
            int & getP1() { return _tram_threshold;}
            int & getP2() { return _bfs_threshold;}
            int & getP3() { return behind_first_nonzero;}
            int & getP4() { return phase;}
      void pup(PUP::er& __p) {
        __p | _heap_threshold;
        __p | _tram_threshold;
        __p | _bfs_threshold;
        __p | behind_first_nonzero;
        __p | phase;
        packClosure(__p);
      }
      virtual ~current_thresholds_15_closure() {
      }
      PUPable_decl(SINGLE_ARG(current_thresholds_15_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::print_distances_16_closure : public SDAG::Closure {
      

      print_distances_16_closure() {
        init();
      }
      print_distances_16_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~print_distances_16_closure() {
      }
      PUPable_decl(SINGLE_ARG(print_distances_16_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::stop_periodic_flush_17_closure : public SDAG::Closure {
      

      stop_periodic_flush_17_closure() {
        init();
      }
      stop_periodic_flush_17_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~stop_periodic_flush_17_closure() {
      }
      PUPable_decl(SINGLE_ARG(stop_periodic_flush_17_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SsspChares::get_max_cost_18_closure : public SDAG::Closure {
      

      get_max_cost_18_closure() {
        init();
      }
      get_max_cost_18_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~get_max_cost_18_closure() {
      }
      PUPable_decl(SINGLE_ARG(get_max_cost_18_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_SharedInfo::max_path_value_2_closure : public SDAG::Closure {
            cost max_path_val;


      max_path_value_2_closure() {
        init();
      }
      max_path_value_2_closure(CkMigrateMessage*) {
        init();
      }
            cost & getP0() { return max_path_val;}
      void pup(PUP::er& __p) {
        __p | max_path_val;
        packClosure(__p);
      }
      virtual ~max_path_value_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(max_path_value_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_processHeapShared::processHeapOtherCaller_2_closure : public SDAG::Closure {
            int low;
            int high;
            int send_chare;
            int bucket;
            intptr_t whole_bucket_pointer;
            long data_count;
            intptr_t local_graph_pointer;
            long vertex_count;


      processHeapOtherCaller_2_closure() {
        init();
      }
      processHeapOtherCaller_2_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return low;}
            int & getP1() { return high;}
            int & getP2() { return send_chare;}
            int & getP3() { return bucket;}
            intptr_t & getP4() { return whole_bucket_pointer;}
            long & getP5() { return data_count;}
            intptr_t & getP6() { return local_graph_pointer;}
            long & getP7() { return vertex_count;}
      void pup(PUP::er& __p) {
        __p | low;
        __p | high;
        __p | send_chare;
        __p | bucket;
        __p | whole_bucket_pointer;
        __p | data_count;
        __p | local_graph_pointer;
        __p | vertex_count;
        packClosure(__p);
      }
      virtual ~processHeapOtherCaller_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(processHeapOtherCaller_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */





/* DEFS: readonly CProxy_Main mainProxy;
 */
extern CProxy_Main mainProxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_mainProxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|mainProxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_SsspChares arr;
 */
extern CProxy_SsspChares arr;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_arr(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|arr;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_SharedInfo shared;
 */
extern CProxy_SharedInfo shared;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_shared(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|shared;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int N;
 */
extern int N;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_N(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|N;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly long V;
 */
extern long V;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_V(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|V;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int M;
 */
extern int M;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_M(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|M;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly long average_degree;
 */
extern long average_degree;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_average_degree(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|average_degree;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int S;
 */
extern int S;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_S(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|S;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly long num_global_edges;
 */
extern long num_global_edges;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_num_global_edges(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|num_global_edges;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int generate_mode;
 */
extern int generate_mode;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_generate_mode(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|generate_mode;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly cost lmax;
 */
extern cost lmax;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_lmax(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|lmax;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int buffer_size;
 */
extern int buffer_size;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_buffer_size(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|buffer_size;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int histo_bucket_count;
 */
extern int histo_bucket_count;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_histo_bucket_count(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|histo_bucket_count;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int initial_threshold;
 */
extern int initial_threshold;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_initial_threshold(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|initial_threshold;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double reduction_delay;
 */
extern double reduction_delay;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_reduction_delay(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|reduction_delay;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly double flush_timer;
 */
extern double flush_timer;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_flush_timer(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|flush_timer;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly bool enable_buffer_flushing;
 */
extern bool enable_buffer_flushing;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_enable_buffer_flushing(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|enable_buffer_flushing;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_HTram tram_proxy;
 */
extern CProxy_HTram tram_proxy;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_tram_proxy(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|tram_proxy;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly CProxy_processHeapShared process_heap_shared;
 */
extern CProxy_processHeapShared process_heap_shared;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_process_heap_shared(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|process_heap_shared;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: readonly int tile_size;
 */
extern int tile_size;
#ifndef CK_TEMPLATES_ONLY
extern "C" void __xlater_roPup_tile_size(void *_impl_pup_er) {
  PUP::er &_impl_p=*(PUP::er *)_impl_pup_er;
  _impl_p|tile_size;
}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void begin(const cost &max_sum);
void quiescence_detected();
void reduce_histogram(const long *histo_values, int histo_length);
void done(const long *msg_stats, int N);
void check_buffer_done(const long *msg_stats, int N);
void done_max_cost(const cost &max_cost);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void begin(const cost &max_sum);
 */
void CProxy_Main::begin(const cost &max_sum, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const cost &max_sum
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_sum;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_sum;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_begin_marshall2(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_begin_marshall2(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_begin_marshall2(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_begin_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const cost &max_sum*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<cost> max_sum;
  implP|max_sum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->begin(std::move(max_sum.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_begin_marshall2() {
  int epidx = CkRegisterEp("begin(const cost &max_sum)",
      reinterpret_cast<CkCallFnPtr>(_call_begin_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_begin_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_begin_marshall2);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_begin_marshall2() {
  return CkRegisterEp("redn_wrapper_begin(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_begin_marshall2), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_begin_marshall2(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_sum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_sum;
  implP|max_sum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->begin(std::move(max_sum.t));
}
int CkIndex_Main::_callmarshall_begin_marshall2(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const cost &max_sum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_sum;
  implP|max_sum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->begin(std::move(max_sum.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_begin_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_sum*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_sum;
  implP|max_sum;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("max_sum");
  implDestP|max_sum;
}
PUPable_def(SINGLE_ARG(Closure_Main::begin_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void quiescence_detected();
 */
void CProxy_Main::quiescence_detected(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_quiescence_detected_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_quiescence_detected_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_quiescence_detected_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_quiescence_detected_void() {
  int epidx = CkRegisterEp("quiescence_detected()",
      reinterpret_cast<CkCallFnPtr>(_call_quiescence_detected_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_quiescence_detected_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->quiescence_detected();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::quiescence_detected_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void reduce_histogram(const long *histo_values, int histo_length);
 */
void CProxy_Main::reduce_histogram(const long *histo_values, int histo_length, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const long *histo_values, int histo_length
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_histo_values, impl_cnt_histo_values;
  impl_off_histo_values=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_histo_values=sizeof(long)*(N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_histo_values;
    implP|impl_cnt_histo_values;
    implP|histo_length;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_histo_values;
    implP|impl_cnt_histo_values;
    implP|histo_length;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_histo_values,histo_values,impl_cnt_histo_values);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_reduce_histogram_marshall4(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_reduce_histogram_marshall4(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_reduce_histogram_marshall4(), impl_msg, &ckGetChareID(),0+CK_MSG_EXPEDITED);
  }
}
void CkIndex_Main::_call_redn_wrapper_reduce_histogram_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const long *histo_values, int histo_length*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> histo_length; histo_length.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(long);
  long* histo_values; histo_values = (long*)impl_buf;
  impl_obj->reduce_histogram(histo_values, std::move(histo_length.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_reduce_histogram_marshall4() {
  int epidx = CkRegisterEp("reduce_histogram(const long *histo_values, int histo_length)",
      reinterpret_cast<CkCallFnPtr>(_call_reduce_histogram_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_reduce_histogram_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_reduce_histogram_marshall4);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_reduce_histogram_marshall4() {
  return CkRegisterEp("redn_wrapper_reduce_histogram(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_reduce_histogram_marshall4), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_reduce_histogram_marshall4(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *histo_values, int histo_length*/
  PUP::fromMem implP(impl_buf);
  int impl_off_histo_values, impl_cnt_histo_values;
  implP|impl_off_histo_values;
  implP|impl_cnt_histo_values;
  PUP::detail::TemporaryObjectHolder<int> histo_length;
  implP|histo_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *histo_values=(long *)(impl_buf+impl_off_histo_values);
  impl_obj->reduce_histogram(histo_values, std::move(histo_length.t));
}
int CkIndex_Main::_callmarshall_reduce_histogram_marshall4(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const long *histo_values, int histo_length*/
  PUP::fromMem implP(impl_buf);
  int impl_off_histo_values, impl_cnt_histo_values;
  implP|impl_off_histo_values;
  implP|impl_cnt_histo_values;
  PUP::detail::TemporaryObjectHolder<int> histo_length;
  implP|histo_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *histo_values=(long *)(impl_buf+impl_off_histo_values);
  impl_obj->reduce_histogram(histo_values, std::move(histo_length.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_reduce_histogram_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *histo_values, int histo_length*/
  PUP::fromMem implP(impl_buf);
  int impl_off_histo_values, impl_cnt_histo_values;
  implP|impl_off_histo_values;
  implP|impl_cnt_histo_values;
  PUP::detail::TemporaryObjectHolder<int> histo_length;
  implP|histo_length;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *histo_values=(long *)(impl_buf+impl_off_histo_values);
  if (implDestP.hasComments()) implDestP.comment("histo_values");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*histo_values))<impl_cnt_histo_values;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|histo_values[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("histo_length");
  implDestP|histo_length;
}
PUPable_def(SINGLE_ARG(Closure_Main::reduce_histogram_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done(const long *msg_stats, int N);
 */
void CProxy_Main::done(const long *msg_stats, int N, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const long *msg_stats, int N
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_msg_stats, impl_cnt_msg_stats;
  impl_off_msg_stats=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_msg_stats=sizeof(long)*(N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_msg_stats;
    implP|impl_cnt_msg_stats;
    implP|N;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_msg_stats;
    implP|impl_cnt_msg_stats;
    implP|N;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_msg_stats,msg_stats,impl_cnt_msg_stats);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_marshall5(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_marshall5(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_marshall5(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_done_marshall5(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> N; N.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(long);
  long* msg_stats; msg_stats = (long*)impl_buf;
  impl_obj->done(msg_stats, std::move(N.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_done_marshall5() {
  int epidx = CkRegisterEp("done(const long *msg_stats, int N)",
      reinterpret_cast<CkCallFnPtr>(_call_done_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_done_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_done_marshall5);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_done_marshall5() {
  return CkRegisterEp("redn_wrapper_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_marshall5), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_done_marshall5(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  impl_obj->done(msg_stats, std::move(N.t));
}
int CkIndex_Main::_callmarshall_done_marshall5(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  impl_obj->done(msg_stats, std::move(N.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_done_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  if (implDestP.hasComments()) implDestP.comment("msg_stats");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*msg_stats))<impl_cnt_msg_stats;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|msg_stats[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("N");
  implDestP|N;
}
PUPable_def(SINGLE_ARG(Closure_Main::done_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check_buffer_done(const long *msg_stats, int N);
 */
void CProxy_Main::check_buffer_done(const long *msg_stats, int N, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const long *msg_stats, int N
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_msg_stats, impl_cnt_msg_stats;
  impl_off_msg_stats=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_msg_stats=sizeof(long)*(N));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_msg_stats;
    implP|impl_cnt_msg_stats;
    implP|N;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_msg_stats;
    implP|impl_cnt_msg_stats;
    implP|N;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_msg_stats,msg_stats,impl_cnt_msg_stats);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_check_buffer_done_marshall6(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_check_buffer_done_marshall6(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_check_buffer_done_marshall6(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_check_buffer_done_marshall6(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> N; N.t = ((CkReductionMsg*)impl_msg)->getLength() / sizeof(long);
  long* msg_stats; msg_stats = (long*)impl_buf;
  impl_obj->check_buffer_done(msg_stats, std::move(N.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_check_buffer_done_marshall6() {
  int epidx = CkRegisterEp("check_buffer_done(const long *msg_stats, int N)",
      reinterpret_cast<CkCallFnPtr>(_call_check_buffer_done_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_check_buffer_done_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_check_buffer_done_marshall6);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_check_buffer_done_marshall6() {
  return CkRegisterEp("redn_wrapper_check_buffer_done(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_check_buffer_done_marshall6), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_check_buffer_done_marshall6(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  impl_obj->check_buffer_done(msg_stats, std::move(N.t));
}
int CkIndex_Main::_callmarshall_check_buffer_done_marshall6(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  impl_obj->check_buffer_done(msg_stats, std::move(N.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_check_buffer_done_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const long *msg_stats, int N*/
  PUP::fromMem implP(impl_buf);
  int impl_off_msg_stats, impl_cnt_msg_stats;
  implP|impl_off_msg_stats;
  implP|impl_cnt_msg_stats;
  PUP::detail::TemporaryObjectHolder<int> N;
  implP|N;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *msg_stats=(long *)(impl_buf+impl_off_msg_stats);
  if (implDestP.hasComments()) implDestP.comment("msg_stats");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*msg_stats))<impl_cnt_msg_stats;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|msg_stats[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("N");
  implDestP|N;
}
PUPable_def(SINGLE_ARG(Closure_Main::check_buffer_done_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void done_max_cost(const cost &max_cost);
 */
void CProxy_Main::done_max_cost(const cost &max_cost, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const cost &max_cost
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_cost;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_cost;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_done_max_cost_marshall7(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_done_max_cost_marshall7(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_done_max_cost_marshall7(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_done_max_cost_marshall7(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: const cost &max_cost*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<cost> max_cost;
  implP|max_cost;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done_max_cost(std::move(max_cost.t));
  delete (CkReductionMsg*)impl_msg;
}


// Entry point registration function
int CkIndex_Main::reg_done_max_cost_marshall7() {
  int epidx = CkRegisterEp("done_max_cost(const cost &max_cost)",
      reinterpret_cast<CkCallFnPtr>(_call_done_max_cost_marshall7), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_done_max_cost_marshall7);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_done_max_cost_marshall7);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_done_max_cost_marshall7() {
  return CkRegisterEp("redn_wrapper_done_max_cost(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_done_max_cost_marshall7), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_done_max_cost_marshall7(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_cost*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_cost;
  implP|max_cost;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done_max_cost(std::move(max_cost.t));
}
int CkIndex_Main::_callmarshall_done_max_cost_marshall7(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const cost &max_cost*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_cost;
  implP|max_cost;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->done_max_cost(std::move(max_cost.t));
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_done_max_cost_marshall7(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_cost*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_cost;
  implP|max_cost;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("max_cost");
  implDestP|max_cost;
}
PUPable_def(SINGLE_ARG(Closure_Main::done_max_cost_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void begin(const cost &max_sum);
  idx_begin_marshall2();
  idx_redn_wrapper_begin_marshall2();

  // REG: void quiescence_detected();
  idx_quiescence_detected_void();

  // REG: void reduce_histogram(const long *histo_values, int histo_length);
  idx_reduce_histogram_marshall4();
  idx_redn_wrapper_reduce_histogram_marshall4();

  // REG: void done(const long *msg_stats, int N);
  idx_done_marshall5();
  idx_redn_wrapper_done_marshall5();

  // REG: void check_buffer_done(const long *msg_stats, int N);
  idx_check_buffer_done_marshall6();
  idx_redn_wrapper_check_buffer_done_marshall6();

  // REG: void done_max_cost(const cost &max_cost);
  idx_done_max_cost_marshall7();
  idx_redn_wrapper_done_max_cost_marshall7();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array SsspChares: ArrayElement{
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
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SsspChares::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_SsspChares::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_SsspChares::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_SsspChares::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_SsspChares::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_SsspChares::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_SsspChares::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(const CProxy_HTram &htram);
 */
void CProxyElement_SsspChares::insert(const CProxy_HTram &htram, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CProxy_HTram &htram
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_SsspChares::idx_SsspChares_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiate_pointers();
 */
void CProxyElement_SsspChares::initiate_pointers(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_initiate_pointers_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idle_triggered();
 */
bool CProxyElement_SsspChares::idle_triggered(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  SsspChares *obj = ckLocal();
#if CMK_ERROR_CHECKING
  if (obj==NULL) CkAbort("Trying to call a LOCAL entry method on a non-local element");
#endif
  envelope env;
  env.setTotalsize(0);
  env.setMsgtype(ForArrayEltMsg);
  _TRACE_CREATION_DETAILED(&env, CkIndex_SsspChares::idx_idle_triggered_void());
  _TRACE_CREATION_DONE(1);
  CmiObjId projID = ((CkArrayIndex&)ckGetIndex()).getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(CpvAccess(curPeEvent),ForArrayEltMsg,(CkIndex_SsspChares::idx_idle_triggered_void()),CkMyPe(), 0, &projID, obj);
#if CMK_LBDB_ON
#endif
#if CMK_CHARMDEBUG
    CpdBeforeEp(CkIndex_SsspChares::idx_idle_triggered_void(), obj, NULL);
#endif
    CkCallstackPush(obj);
    bool retValue = obj->idle_triggered();
    CkCallstackPop(obj);
#if CMK_CHARMDEBUG
    CpdAfterEp(CkIndex_SsspChares::idx_idle_triggered_void());
#endif
    _TRACE_END_EXECUTE();
    return retValue;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
void CProxyElement_SsspChares::generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_generate_2d_graph_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
void CProxyElement_SsspChares::generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: long _num_vertices, long _num_edges, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_generate_local_graph_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
void CProxyElement_SsspChares::get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const LongEdge *edges, long E, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_edges, impl_cnt_edges;
  impl_off_edges=impl_off=CK_ALIGN(impl_off,sizeof(LongEdge));
  impl_off+=(impl_cnt_edges=sizeof(LongEdge)*(E));
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_edges,edges,impl_cnt_edges);
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_get_graph_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_papi();
 */
void CProxyElement_SsspChares::start_papi(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_start_papi_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_algo(const Update &new_vertex_and_distance);
 */
void CProxyElement_SsspChares::start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_start_algo_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_heap();
 */
void CProxyElement_SsspChares::process_heap(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_process_heap_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_update(const Update &new_vertex_and_distance);
 */
void CProxyElement_SsspChares::process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_process_update_marshall10(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check_buffer();
 */
void CProxyElement_SsspChares::check_buffer(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_check_buffer_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contribute_histogram(int behind_first_nonzero);
 */
void CProxyElement_SsspChares::contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int behind_first_nonzero
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|behind_first_nonzero;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|behind_first_nonzero;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_contribute_histogram_marshall12(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void keep_going();
 */
void CProxyElement_SsspChares::keep_going(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_keep_going_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clear_pq_hold();
 */
void CProxyElement_SsspChares::clear_pq_hold(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_clear_pq_hold_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
void CProxyElement_SsspChares::current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_current_thresholds_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void print_distances();
 */
void CProxyElement_SsspChares::print_distances(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_print_distances_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxyElement_SsspChares::stop_periodic_flush(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_stop_periodic_flush_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_max_cost();
 */
void CProxyElement_SsspChares::get_max_cost(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_get_max_cost_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(const CProxy_HTram &htram);
 */
CkArrayID CProxy_SsspChares::ckNew(const CProxy_HTram &htram, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_HTram &htram
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_SsspChares::idx_SsspChares_marshall1(), opts);
  return gId;
}
void CProxy_SsspChares::ckNew(const CProxy_HTram &htram, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_HTram &htram
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_SsspChares::idx_SsspChares_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_SsspChares::ckNew(const CProxy_HTram &htram, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_HTram &htram
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_SsspChares::idx_SsspChares_marshall1(), opts);
  return gId;
}
void CProxy_SsspChares::ckNew(const CProxy_HTram &htram, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_HTram &htram
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_HTram>::type>::type &)htram;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_SsspChares::idx_SsspChares_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_SsspChares::reg_SsspChares_marshall1() {
  int epidx = CkRegisterEp("SsspChares(const CProxy_HTram &htram)",
      reinterpret_cast<CkCallFnPtr>(_call_SsspChares_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_SsspChares_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_SsspChares_marshall1);

  return epidx;
}

void CkIndex_SsspChares::_call_SsspChares_marshall1(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_HTram &htram*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_HTram> htram;
  implP|htram;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) SsspChares(std::move(htram.t));
}
int CkIndex_SsspChares::_callmarshall_SsspChares_marshall1(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_HTram &htram*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_HTram> htram;
  implP|htram;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) SsspChares(std::move(htram.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_SsspChares_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_HTram &htram*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_HTram> htram;
  implP|htram;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("htram");
  implDestP|htram;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiate_pointers();
 */
void CProxy_SsspChares::initiate_pointers(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_initiate_pointers_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_initiate_pointers_void() {
  int epidx = CkRegisterEp("initiate_pointers()",
      reinterpret_cast<CkCallFnPtr>(_call_initiate_pointers_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_initiate_pointers_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->initiate_pointers();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::initiate_pointers_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idle_triggered();
 */

// Entry point registration function
int CkIndex_SsspChares::reg_idle_triggered_void() {
  int epidx = CkRegisterEp("idle_triggered()",
      reinterpret_cast<CkCallFnPtr>(_call_idle_triggered_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_idle_triggered_void(void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  bool res = impl_obj->idle_triggered();
  if (res) CkCallWhenIdle(idx_idle_triggered_void(), impl_obj);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
void CProxy_SsspChares::generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_generate_2d_graph_marshall4(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_generate_2d_graph_marshall4() {
  int epidx = CkRegisterEp("generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe)",
      reinterpret_cast<CkCallFnPtr>(_call_generate_2d_graph_marshall4), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_generate_2d_graph_marshall4);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_generate_2d_graph_marshall4);

  return epidx;
}

void CkIndex_SsspChares::_call_generate_2d_graph_marshall4(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<map<long,vector<long>>> pe_to_vertices;
  implP|pe_to_vertices;
  PUP::detail::TemporaryObjectHolder<map<long,long>> vertex_to_pe;
  implP|vertex_to_pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->generate_2d_graph(std::move(pe_to_vertices.t), std::move(vertex_to_pe.t));
}
int CkIndex_SsspChares::_callmarshall_generate_2d_graph_marshall4(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<map<long,vector<long>>> pe_to_vertices;
  implP|pe_to_vertices;
  PUP::detail::TemporaryObjectHolder<map<long,long>> vertex_to_pe;
  implP|vertex_to_pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->generate_2d_graph(std::move(pe_to_vertices.t), std::move(vertex_to_pe.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_generate_2d_graph_marshall4(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<map<long,vector<long>>> pe_to_vertices;
  implP|pe_to_vertices;
  PUP::detail::TemporaryObjectHolder<map<long,long>> vertex_to_pe;
  implP|vertex_to_pe;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("pe_to_vertices");
  implDestP|pe_to_vertices;
  if (implDestP.hasComments()) implDestP.comment("vertex_to_pe");
  implDestP|vertex_to_pe;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::generate_2d_graph_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
void CProxy_SsspChares::generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: long _num_vertices, long _num_edges, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_generate_local_graph_marshall5(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_generate_local_graph_marshall5() {
  int epidx = CkRegisterEp("generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers)",
      reinterpret_cast<CkCallFnPtr>(_call_generate_local_graph_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_generate_local_graph_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_generate_local_graph_marshall5);

  return epidx;
}

void CkIndex_SsspChares::_call_generate_local_graph_marshall5(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: long _num_vertices, long _num_edges, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<long> _num_vertices;
  implP|_num_vertices;
  PUP::detail::TemporaryObjectHolder<long> _num_edges;
  implP|_num_edges;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *partition=(long *)(impl_buf+impl_off_partition);
  impl_obj->generate_local_graph(std::move(_num_vertices.t), std::move(_num_edges.t), partition, std::move(dividers.t));
}
int CkIndex_SsspChares::_callmarshall_generate_local_graph_marshall5(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: long _num_vertices, long _num_edges, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<long> _num_vertices;
  implP|_num_vertices;
  PUP::detail::TemporaryObjectHolder<long> _num_edges;
  implP|_num_edges;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *partition=(long *)(impl_buf+impl_off_partition);
  impl_obj->generate_local_graph(std::move(_num_vertices.t), std::move(_num_edges.t), partition, std::move(dividers.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_generate_local_graph_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: long _num_vertices, long _num_edges, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<long> _num_vertices;
  implP|_num_vertices;
  PUP::detail::TemporaryObjectHolder<long> _num_edges;
  implP|_num_edges;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  long *partition=(long *)(impl_buf+impl_off_partition);
  if (implDestP.hasComments()) implDestP.comment("_num_vertices");
  implDestP|_num_vertices;
  if (implDestP.hasComments()) implDestP.comment("_num_edges");
  implDestP|_num_edges;
  if (implDestP.hasComments()) implDestP.comment("partition");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*partition))<impl_cnt_partition;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|partition[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("dividers");
  implDestP|dividers;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::generate_local_graph_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
void CProxy_SsspChares::get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const LongEdge *edges, long E, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_edges, impl_cnt_edges;
  impl_off_edges=impl_off=CK_ALIGN(impl_off,sizeof(LongEdge));
  impl_off+=(impl_cnt_edges=sizeof(LongEdge)*(E));
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_edges,edges,impl_cnt_edges);
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_get_graph_marshall6(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_get_graph_marshall6() {
  int epidx = CkRegisterEp("get_graph(const LongEdge *edges, long E, const long *partition, int dividers)",
      reinterpret_cast<CkCallFnPtr>(_call_get_graph_marshall6), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_get_graph_marshall6);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_get_graph_marshall6);

  return epidx;
}

void CkIndex_SsspChares::_call_get_graph_marshall6(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LongEdge *edges, long E, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  int impl_off_edges, impl_cnt_edges;
  implP|impl_off_edges;
  implP|impl_cnt_edges;
  PUP::detail::TemporaryObjectHolder<long> E;
  implP|E;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LongEdge *edges=(LongEdge *)(impl_buf+impl_off_edges);
  long *partition=(long *)(impl_buf+impl_off_partition);
  impl_obj->get_graph(edges, std::move(E.t), partition, std::move(dividers.t));
}
int CkIndex_SsspChares::_callmarshall_get_graph_marshall6(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const LongEdge *edges, long E, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  int impl_off_edges, impl_cnt_edges;
  implP|impl_off_edges;
  implP|impl_cnt_edges;
  PUP::detail::TemporaryObjectHolder<long> E;
  implP|E;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LongEdge *edges=(LongEdge *)(impl_buf+impl_off_edges);
  long *partition=(long *)(impl_buf+impl_off_partition);
  impl_obj->get_graph(edges, std::move(E.t), partition, std::move(dividers.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_get_graph_marshall6(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const LongEdge *edges, long E, const long *partition, int dividers*/
  PUP::fromMem implP(impl_buf);
  int impl_off_edges, impl_cnt_edges;
  implP|impl_off_edges;
  implP|impl_cnt_edges;
  PUP::detail::TemporaryObjectHolder<long> E;
  implP|E;
  int impl_off_partition, impl_cnt_partition;
  implP|impl_off_partition;
  implP|impl_cnt_partition;
  PUP::detail::TemporaryObjectHolder<int> dividers;
  implP|dividers;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  LongEdge *edges=(LongEdge *)(impl_buf+impl_off_edges);
  long *partition=(long *)(impl_buf+impl_off_partition);
  if (implDestP.hasComments()) implDestP.comment("edges");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*edges))<impl_cnt_edges;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|edges[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("E");
  implDestP|E;
  if (implDestP.hasComments()) implDestP.comment("partition");
  implDestP.synchronize(PUP::sync_begin_array);
  for (int impl_i=0;impl_i*(sizeof(*partition))<impl_cnt_partition;impl_i++) {
    implDestP.synchronize(PUP::sync_item);
    implDestP|partition[impl_i];
  }
  implDestP.synchronize(PUP::sync_end_array);
  if (implDestP.hasComments()) implDestP.comment("dividers");
  implDestP|dividers;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::get_graph_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_papi();
 */
void CProxy_SsspChares::start_papi(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_start_papi_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_start_papi_void() {
  int epidx = CkRegisterEp("start_papi()",
      reinterpret_cast<CkCallFnPtr>(_call_start_papi_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_start_papi_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->start_papi();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::start_papi_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_algo(const Update &new_vertex_and_distance);
 */
void CProxy_SsspChares::start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_start_algo_marshall8(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_start_algo_marshall8() {
  int epidx = CkRegisterEp("start_algo(const Update &new_vertex_and_distance)",
      reinterpret_cast<CkCallFnPtr>(_call_start_algo_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_start_algo_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_start_algo_marshall8);

  return epidx;
}

void CkIndex_SsspChares::_call_start_algo_marshall8(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->start_algo(std::move(new_vertex_and_distance.t));
}
int CkIndex_SsspChares::_callmarshall_start_algo_marshall8(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->start_algo(std::move(new_vertex_and_distance.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_start_algo_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("new_vertex_and_distance");
  implDestP|new_vertex_and_distance;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::start_algo_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_heap();
 */
void CProxy_SsspChares::process_heap(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_process_heap_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_process_heap_void() {
  int epidx = CkRegisterEp("process_heap()",
      reinterpret_cast<CkCallFnPtr>(_call_process_heap_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_process_heap_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->process_heap();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::process_heap_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_update(const Update &new_vertex_and_distance);
 */
void CProxy_SsspChares::process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_process_update_marshall10(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_process_update_marshall10() {
  int epidx = CkRegisterEp("process_update(const Update &new_vertex_and_distance)",
      reinterpret_cast<CkCallFnPtr>(_call_process_update_marshall10), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_process_update_marshall10);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_process_update_marshall10);

  return epidx;
}

void CkIndex_SsspChares::_call_process_update_marshall10(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->process_update(std::move(new_vertex_and_distance.t));
}
int CkIndex_SsspChares::_callmarshall_process_update_marshall10(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->process_update(std::move(new_vertex_and_distance.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_process_update_marshall10(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const Update &new_vertex_and_distance*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<Update> new_vertex_and_distance;
  implP|new_vertex_and_distance;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("new_vertex_and_distance");
  implDestP|new_vertex_and_distance;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::process_update_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check_buffer();
 */
void CProxy_SsspChares::check_buffer(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_check_buffer_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_check_buffer_void() {
  int epidx = CkRegisterEp("check_buffer()",
      reinterpret_cast<CkCallFnPtr>(_call_check_buffer_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_check_buffer_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->check_buffer();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::check_buffer_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contribute_histogram(int behind_first_nonzero);
 */
void CProxy_SsspChares::contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int behind_first_nonzero
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|behind_first_nonzero;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|behind_first_nonzero;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_contribute_histogram_marshall12(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_SsspChares::reg_contribute_histogram_marshall12() {
  int epidx = CkRegisterEp("contribute_histogram(int behind_first_nonzero)",
      reinterpret_cast<CkCallFnPtr>(_call_contribute_histogram_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_contribute_histogram_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_contribute_histogram_marshall12);

  return epidx;
}

void CkIndex_SsspChares::_call_contribute_histogram_marshall12(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int behind_first_nonzero*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->contribute_histogram(std::move(behind_first_nonzero.t));
}
int CkIndex_SsspChares::_callmarshall_contribute_histogram_marshall12(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int behind_first_nonzero*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->contribute_histogram(std::move(behind_first_nonzero.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_contribute_histogram_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int behind_first_nonzero*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("behind_first_nonzero");
  implDestP|behind_first_nonzero;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::contribute_histogram_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void keep_going();
 */
void CProxy_SsspChares::keep_going(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_keep_going_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_keep_going_void() {
  int epidx = CkRegisterEp("keep_going()",
      reinterpret_cast<CkCallFnPtr>(_call_keep_going_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_keep_going_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->keep_going();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::keep_going_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clear_pq_hold();
 */
void CProxy_SsspChares::clear_pq_hold(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_clear_pq_hold_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_clear_pq_hold_void() {
  int epidx = CkRegisterEp("clear_pq_hold()",
      reinterpret_cast<CkCallFnPtr>(_call_clear_pq_hold_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_clear_pq_hold_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->clear_pq_hold();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::clear_pq_hold_14_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
void CProxy_SsspChares::current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_current_thresholds_marshall15(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_current_thresholds_marshall15() {
  int epidx = CkRegisterEp("current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase)",
      reinterpret_cast<CkCallFnPtr>(_call_current_thresholds_marshall15), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_current_thresholds_marshall15);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_current_thresholds_marshall15);

  return epidx;
}

void CkIndex_SsspChares::_call_current_thresholds_marshall15(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> _heap_threshold;
  implP|_heap_threshold;
  PUP::detail::TemporaryObjectHolder<int> _tram_threshold;
  implP|_tram_threshold;
  PUP::detail::TemporaryObjectHolder<int> _bfs_threshold;
  implP|_bfs_threshold;
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  PUP::detail::TemporaryObjectHolder<int> phase;
  implP|phase;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->current_thresholds(std::move(_heap_threshold.t), std::move(_tram_threshold.t), std::move(_bfs_threshold.t), std::move(behind_first_nonzero.t), std::move(phase.t));
}
int CkIndex_SsspChares::_callmarshall_current_thresholds_marshall15(char* impl_buf, void* impl_obj_void) {
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> _heap_threshold;
  implP|_heap_threshold;
  PUP::detail::TemporaryObjectHolder<int> _tram_threshold;
  implP|_tram_threshold;
  PUP::detail::TemporaryObjectHolder<int> _bfs_threshold;
  implP|_bfs_threshold;
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  PUP::detail::TemporaryObjectHolder<int> phase;
  implP|phase;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->current_thresholds(std::move(_heap_threshold.t), std::move(_tram_threshold.t), std::move(_bfs_threshold.t), std::move(behind_first_nonzero.t), std::move(phase.t));
  return implP.size();
}
void CkIndex_SsspChares::_marshallmessagepup_current_thresholds_marshall15(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> _heap_threshold;
  implP|_heap_threshold;
  PUP::detail::TemporaryObjectHolder<int> _tram_threshold;
  implP|_tram_threshold;
  PUP::detail::TemporaryObjectHolder<int> _bfs_threshold;
  implP|_bfs_threshold;
  PUP::detail::TemporaryObjectHolder<int> behind_first_nonzero;
  implP|behind_first_nonzero;
  PUP::detail::TemporaryObjectHolder<int> phase;
  implP|phase;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("_heap_threshold");
  implDestP|_heap_threshold;
  if (implDestP.hasComments()) implDestP.comment("_tram_threshold");
  implDestP|_tram_threshold;
  if (implDestP.hasComments()) implDestP.comment("_bfs_threshold");
  implDestP|_bfs_threshold;
  if (implDestP.hasComments()) implDestP.comment("behind_first_nonzero");
  implDestP|behind_first_nonzero;
  if (implDestP.hasComments()) implDestP.comment("phase");
  implDestP|phase;
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::current_thresholds_15_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void print_distances();
 */
void CProxy_SsspChares::print_distances(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_print_distances_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_print_distances_void() {
  int epidx = CkRegisterEp("print_distances()",
      reinterpret_cast<CkCallFnPtr>(_call_print_distances_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_print_distances_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->print_distances();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::print_distances_16_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxy_SsspChares::stop_periodic_flush(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_stop_periodic_flush_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_stop_periodic_flush_void() {
  int epidx = CkRegisterEp("stop_periodic_flush()",
      reinterpret_cast<CkCallFnPtr>(_call_stop_periodic_flush_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_stop_periodic_flush_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->stop_periodic_flush();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::stop_periodic_flush_17_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_max_cost();
 */
void CProxy_SsspChares::get_max_cost(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_SsspChares::idx_get_max_cost_void(),0);
}

// Entry point registration function
int CkIndex_SsspChares::reg_get_max_cost_void() {
  int epidx = CkRegisterEp("get_max_cost()",
      reinterpret_cast<CkCallFnPtr>(_call_get_max_cost_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_get_max_cost_void(void* impl_msg, void* impl_obj_void)
{
  SsspChares* impl_obj = static_cast<SsspChares*>(impl_obj_void);
  impl_obj->get_max_cost();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_SsspChares::get_max_cost_18_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_SsspChares::reg_SsspChares_CkMigrateMessage() {
  int epidx = CkRegisterEp("SsspChares(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_SsspChares_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_SsspChares::_call_SsspChares_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<SsspChares> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(const CProxy_HTram &htram);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void initiate_pointers();
 */
void CProxySection_SsspChares::initiate_pointers(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_initiate_pointers_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idle_triggered();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
 */
void CProxySection_SsspChares::generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,vector<long>>>::type>::type &)pe_to_vertices;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<map<long,long>>::type>::type &)vertex_to_pe;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_generate_2d_graph_marshall4(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
 */
void CProxySection_SsspChares::generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: long _num_vertices, long _num_edges, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_num_vertices;
    implP|_num_edges;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_generate_local_graph_marshall5(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
 */
void CProxySection_SsspChares::get_graph(const LongEdge *edges, long E, const long *partition, int dividers, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const LongEdge *edges, long E, const long *partition, int dividers
  int impl_off=0;
  int impl_arrstart=0;
  int impl_off_edges, impl_cnt_edges;
  impl_off_edges=impl_off=CK_ALIGN(impl_off,sizeof(LongEdge));
  impl_off+=(impl_cnt_edges=sizeof(LongEdge)*(E));
  int impl_off_partition, impl_cnt_partition;
  impl_off_partition=impl_off=CK_ALIGN(impl_off,sizeof(long));
  impl_off+=(impl_cnt_partition=sizeof(long)*(dividers));
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
    impl_arrstart=CK_ALIGN(implP.size(),16);
    impl_off+=impl_arrstart;
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_off_edges;
    implP|impl_cnt_edges;
    implP|E;
    implP|impl_off_partition;
    implP|impl_cnt_partition;
    implP|dividers;
  }
  char *impl_buf=impl_msg->msgBuf+impl_arrstart;
  memcpy(impl_buf+impl_off_edges,edges,impl_cnt_edges);
  memcpy(impl_buf+impl_off_partition,partition,impl_cnt_partition);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_get_graph_marshall6(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_papi();
 */
void CProxySection_SsspChares::start_papi(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_start_papi_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void start_algo(const Update &new_vertex_and_distance);
 */
void CProxySection_SsspChares::start_algo(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_start_algo_marshall8(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_heap();
 */
void CProxySection_SsspChares::process_heap(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_process_heap_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void process_update(const Update &new_vertex_and_distance);
 */
void CProxySection_SsspChares::process_update(const Update &new_vertex_and_distance, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const Update &new_vertex_and_distance
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<Update>::type>::type &)new_vertex_and_distance;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_process_update_marshall10(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void check_buffer();
 */
void CProxySection_SsspChares::check_buffer(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_check_buffer_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void contribute_histogram(int behind_first_nonzero);
 */
void CProxySection_SsspChares::contribute_histogram(int behind_first_nonzero, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int behind_first_nonzero
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|behind_first_nonzero;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|behind_first_nonzero;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_contribute_histogram_marshall12(),0+CK_MSG_EXPEDITED);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void keep_going();
 */
void CProxySection_SsspChares::keep_going(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_keep_going_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void clear_pq_hold();
 */
void CProxySection_SsspChares::clear_pq_hold(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_clear_pq_hold_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
 */
void CProxySection_SsspChares::current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|_heap_threshold;
    implP|_tram_threshold;
    implP|_bfs_threshold;
    implP|behind_first_nonzero;
    implP|phase;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_current_thresholds_marshall15(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void print_distances();
 */
void CProxySection_SsspChares::print_distances(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_print_distances_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxySection_SsspChares::stop_periodic_flush(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_stop_periodic_flush_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void get_max_cost();
 */
void CProxySection_SsspChares::get_max_cost(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_SsspChares::idx_get_max_cost_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SsspChares(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SsspChares::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: SsspChares(const CProxy_HTram &htram);
  idx_SsspChares_marshall1();

  // REG: void initiate_pointers();
  idx_initiate_pointers_void();

  // REG: bool idle_triggered();
  idx_idle_triggered_void();

  // REG: void generate_2d_graph(const map<long,vector<long>> &pe_to_vertices, const map<long,long> &vertex_to_pe);
  idx_generate_2d_graph_marshall4();

  // REG: void generate_local_graph(long _num_vertices, long _num_edges, const long *partition, int dividers);
  idx_generate_local_graph_marshall5();

  // REG: void get_graph(const LongEdge *edges, long E, const long *partition, int dividers);
  idx_get_graph_marshall6();

  // REG: void start_papi();
  idx_start_papi_void();

  // REG: void start_algo(const Update &new_vertex_and_distance);
  idx_start_algo_marshall8();

  // REG: void process_heap();
  idx_process_heap_void();

  // REG: void process_update(const Update &new_vertex_and_distance);
  idx_process_update_marshall10();

  // REG: void check_buffer();
  idx_check_buffer_void();

  // REG: void contribute_histogram(int behind_first_nonzero);
  idx_contribute_histogram_marshall12();

  // REG: void keep_going();
  idx_keep_going_void();

  // REG: void clear_pq_hold();
  idx_clear_pq_hold_void();

  // REG: void current_thresholds(int _heap_threshold, int _tram_threshold, int _bfs_threshold, int behind_first_nonzero, int phase);
  idx_current_thresholds_marshall15();

  // REG: void print_distances();
  idx_print_distances_void();

  // REG: void stop_periodic_flush();
  idx_stop_periodic_flush_void();

  // REG: void get_max_cost();
  idx_get_max_cost_void();

  // REG: SsspChares(CkMigrateMessage* impl_msg);
  idx_SsspChares_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_SsspChares_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group SharedInfo: IrrGroup{
SharedInfo();
void max_path_value(const cost &max_path_val);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_SharedInfo::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: SharedInfo();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void max_path_value(const cost &max_path_val);
 */
void CProxyElement_SharedInfo::max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const cost &max_path_val
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SharedInfo();
 */
CkGroupID CProxy_SharedInfo::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_SharedInfo::__idx, CkIndex_SharedInfo::idx_SharedInfo_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_SharedInfo::reg_SharedInfo_void() {
  int epidx = CkRegisterEp("SharedInfo()",
      reinterpret_cast<CkCallFnPtr>(_call_SharedInfo_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_SharedInfo::_call_SharedInfo_void(void* impl_msg, void* impl_obj_void)
{
  SharedInfo* impl_obj = static_cast<SharedInfo*>(impl_obj_void);
  new (impl_obj_void) SharedInfo();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void max_path_value(const cost &max_path_val);
 */
void CProxy_SharedInfo::max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const cost &max_path_val
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID(),0);
}
void CProxy_SharedInfo::max_path_value(const cost &max_path_val, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const cost &max_path_val
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
  }
  CkSendMsgBranchMulti(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_SharedInfo::max_path_value(const cost &max_path_val, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const cost &max_path_val
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
  }
  CkSendMsgBranchGroup(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_SharedInfo::reg_max_path_value_marshall2() {
  int epidx = CkRegisterEp("max_path_value(const cost &max_path_val)",
      reinterpret_cast<CkCallFnPtr>(_call_max_path_value_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_max_path_value_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_max_path_value_marshall2);

  return epidx;
}

void CkIndex_SharedInfo::_call_max_path_value_marshall2(void* impl_msg, void* impl_obj_void)
{
  SharedInfo* impl_obj = static_cast<SharedInfo*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_path_val*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_path_val;
  implP|max_path_val;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->max_path_value(std::move(max_path_val.t));
}
int CkIndex_SharedInfo::_callmarshall_max_path_value_marshall2(char* impl_buf, void* impl_obj_void) {
  SharedInfo* impl_obj = static_cast<SharedInfo*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const cost &max_path_val*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_path_val;
  implP|max_path_val;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->max_path_value(std::move(max_path_val.t));
  return implP.size();
}
void CkIndex_SharedInfo::_marshallmessagepup_max_path_value_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const cost &max_path_val*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<cost> max_path_val;
  implP|max_path_val;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("max_path_val");
  implDestP|max_path_val;
}
PUPable_def(SINGLE_ARG(Closure_SharedInfo::max_path_value_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: SharedInfo();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void max_path_value(const cost &max_path_val);
 */
void CProxySection_SharedInfo::max_path_value(const cost &max_path_val, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const cost &max_path_val
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<cost>::type>::type &)max_path_val;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_SharedInfo::idx_max_path_value_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_SharedInfo::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,SharedInfo::isIrreducible());
  // REG: SharedInfo();
  idx_SharedInfo_void();
  CkRegisterDefaultCtor(__idx, idx_SharedInfo_void());

  // REG: void max_path_value(const cost &max_path_val);
  idx_max_path_value_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup processHeapShared: NodeGroup{
processHeapShared();
void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_processHeapShared::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: processHeapShared();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
void CProxyElement_processHeapShared::processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: processHeapShared();
 */
CkGroupID CProxy_processHeapShared::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_processHeapShared::__idx, CkIndex_processHeapShared::idx_processHeapShared_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_processHeapShared::reg_processHeapShared_void() {
  int epidx = CkRegisterEp("processHeapShared()",
      reinterpret_cast<CkCallFnPtr>(_call_processHeapShared_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_processHeapShared::_call_processHeapShared_void(void* impl_msg, void* impl_obj_void)
{
  processHeapShared* impl_obj = static_cast<processHeapShared*>(impl_obj_void);
  new (impl_obj_void) processHeapShared();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
void CProxy_processHeapShared::processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_processHeapShared::reg_processHeapOtherCaller_marshall2() {
  int epidx = CkRegisterEp("processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count)",
      reinterpret_cast<CkCallFnPtr>(_call_processHeapOtherCaller_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_processHeapOtherCaller_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_processHeapOtherCaller_marshall2);

  return epidx;
}

void CkIndex_processHeapShared::_call_processHeapOtherCaller_marshall2(void* impl_msg, void* impl_obj_void)
{
  processHeapShared* impl_obj = static_cast<processHeapShared*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> low;
  implP|low;
  PUP::detail::TemporaryObjectHolder<int> high;
  implP|high;
  PUP::detail::TemporaryObjectHolder<int> send_chare;
  implP|send_chare;
  PUP::detail::TemporaryObjectHolder<int> bucket;
  implP|bucket;
  PUP::detail::TemporaryObjectHolder<intptr_t> whole_bucket_pointer;
  implP|whole_bucket_pointer;
  PUP::detail::TemporaryObjectHolder<long> data_count;
  implP|data_count;
  PUP::detail::TemporaryObjectHolder<intptr_t> local_graph_pointer;
  implP|local_graph_pointer;
  PUP::detail::TemporaryObjectHolder<long> vertex_count;
  implP|vertex_count;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->processHeapOtherCaller(std::move(low.t), std::move(high.t), std::move(send_chare.t), std::move(bucket.t), std::move(whole_bucket_pointer.t), std::move(data_count.t), std::move(local_graph_pointer.t), std::move(vertex_count.t));
}
int CkIndex_processHeapShared::_callmarshall_processHeapOtherCaller_marshall2(char* impl_buf, void* impl_obj_void) {
  processHeapShared* impl_obj = static_cast<processHeapShared*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> low;
  implP|low;
  PUP::detail::TemporaryObjectHolder<int> high;
  implP|high;
  PUP::detail::TemporaryObjectHolder<int> send_chare;
  implP|send_chare;
  PUP::detail::TemporaryObjectHolder<int> bucket;
  implP|bucket;
  PUP::detail::TemporaryObjectHolder<intptr_t> whole_bucket_pointer;
  implP|whole_bucket_pointer;
  PUP::detail::TemporaryObjectHolder<long> data_count;
  implP|data_count;
  PUP::detail::TemporaryObjectHolder<intptr_t> local_graph_pointer;
  implP|local_graph_pointer;
  PUP::detail::TemporaryObjectHolder<long> vertex_count;
  implP|vertex_count;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->processHeapOtherCaller(std::move(low.t), std::move(high.t), std::move(send_chare.t), std::move(bucket.t), std::move(whole_bucket_pointer.t), std::move(data_count.t), std::move(local_graph_pointer.t), std::move(vertex_count.t));
  return implP.size();
}
void CkIndex_processHeapShared::_marshallmessagepup_processHeapOtherCaller_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> low;
  implP|low;
  PUP::detail::TemporaryObjectHolder<int> high;
  implP|high;
  PUP::detail::TemporaryObjectHolder<int> send_chare;
  implP|send_chare;
  PUP::detail::TemporaryObjectHolder<int> bucket;
  implP|bucket;
  PUP::detail::TemporaryObjectHolder<intptr_t> whole_bucket_pointer;
  implP|whole_bucket_pointer;
  PUP::detail::TemporaryObjectHolder<long> data_count;
  implP|data_count;
  PUP::detail::TemporaryObjectHolder<intptr_t> local_graph_pointer;
  implP|local_graph_pointer;
  PUP::detail::TemporaryObjectHolder<long> vertex_count;
  implP|vertex_count;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("low");
  implDestP|low;
  if (implDestP.hasComments()) implDestP.comment("high");
  implDestP|high;
  if (implDestP.hasComments()) implDestP.comment("send_chare");
  implDestP|send_chare;
  if (implDestP.hasComments()) implDestP.comment("bucket");
  implDestP|bucket;
  if (implDestP.hasComments()) implDestP.comment("whole_bucket_pointer");
  implDestP|whole_bucket_pointer;
  if (implDestP.hasComments()) implDestP.comment("data_count");
  implDestP|data_count;
  if (implDestP.hasComments()) implDestP.comment("local_graph_pointer");
  implDestP|local_graph_pointer;
  if (implDestP.hasComments()) implDestP.comment("vertex_count");
  implDestP|vertex_count;
}
PUPable_def(SINGLE_ARG(Closure_processHeapShared::processHeapOtherCaller_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: processHeapShared();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
 */
void CProxySection_processHeapShared::processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|low;
    implP|high;
    implP|send_chare;
    implP|bucket;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)whole_bucket_pointer;
    implP|data_count;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<intptr_t>::type>::type &)local_graph_pointer;
    implP|vertex_count;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_processHeapShared::idx_processHeapOtherCaller_marshall2(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_processHeapShared::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,processHeapShared::isIrreducible());
  // REG: processHeapShared();
  idx_processHeapShared_void();
  CkRegisterDefaultCtor(__idx, idx_processHeapShared_void());

  // REG: void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
  idx_processHeapOtherCaller_marshall2();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerweighted_htram_smp(void)
{
  static int _done = 0; if(_done) return; _done = 1;


  _registerhtram_group();

  CkRegisterReadonly("mainProxy","CProxy_Main",sizeof(mainProxy),(void *) &mainProxy,__xlater_roPup_mainProxy);

  CkRegisterReadonly("arr","CProxy_SsspChares",sizeof(arr),(void *) &arr,__xlater_roPup_arr);

  CkRegisterReadonly("shared","CProxy_SharedInfo",sizeof(shared),(void *) &shared,__xlater_roPup_shared);

  CkRegisterReadonly("N","int",sizeof(N),(void *) &N,__xlater_roPup_N);

  CkRegisterReadonly("V","long",sizeof(V),(void *) &V,__xlater_roPup_V);

  CkRegisterReadonly("M","int",sizeof(M),(void *) &M,__xlater_roPup_M);

  CkRegisterReadonly("average_degree","long",sizeof(average_degree),(void *) &average_degree,__xlater_roPup_average_degree);

  CkRegisterReadonly("S","int",sizeof(S),(void *) &S,__xlater_roPup_S);

  CkRegisterReadonly("num_global_edges","long",sizeof(num_global_edges),(void *) &num_global_edges,__xlater_roPup_num_global_edges);

  CkRegisterReadonly("generate_mode","int",sizeof(generate_mode),(void *) &generate_mode,__xlater_roPup_generate_mode);

  CkRegisterReadonly("lmax","cost",sizeof(lmax),(void *) &lmax,__xlater_roPup_lmax);

  CkRegisterReadonly("buffer_size","int",sizeof(buffer_size),(void *) &buffer_size,__xlater_roPup_buffer_size);

  CkRegisterReadonly("histo_bucket_count","int",sizeof(histo_bucket_count),(void *) &histo_bucket_count,__xlater_roPup_histo_bucket_count);

  CkRegisterReadonly("initial_threshold","int",sizeof(initial_threshold),(void *) &initial_threshold,__xlater_roPup_initial_threshold);

  CkRegisterReadonly("reduction_delay","double",sizeof(reduction_delay),(void *) &reduction_delay,__xlater_roPup_reduction_delay);

  CkRegisterReadonly("flush_timer","double",sizeof(flush_timer),(void *) &flush_timer,__xlater_roPup_flush_timer);

  CkRegisterReadonly("enable_buffer_flushing","bool",sizeof(enable_buffer_flushing),(void *) &enable_buffer_flushing,__xlater_roPup_enable_buffer_flushing);

  CkRegisterReadonly("tram_proxy","CProxy_HTram",sizeof(tram_proxy),(void *) &tram_proxy,__xlater_roPup_tram_proxy);

  CkRegisterReadonly("process_heap_shared","CProxy_processHeapShared",sizeof(process_heap_shared),(void *) &process_heap_shared,__xlater_roPup_process_heap_shared);

  CkRegisterReadonly("tile_size","int",sizeof(tile_size),(void *) &tile_size,__xlater_roPup_tile_size);

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void begin(const cost &max_sum);
void quiescence_detected();
void reduce_histogram(const long *histo_values, int histo_length);
void done(const long *msg_stats, int N);
void check_buffer_done(const long *msg_stats, int N);
void done_max_cost(const cost &max_cost);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array SsspChares: ArrayElement{
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
  CkIndex_SsspChares::__register("SsspChares", sizeof(SsspChares));

/* REG: group SharedInfo: IrrGroup{
SharedInfo();
void max_path_value(const cost &max_path_val);
};
*/
  CkIndex_SharedInfo::__register("SharedInfo", sizeof(SharedInfo));

/* REG: nodegroup processHeapShared: NodeGroup{
processHeapShared();
void processHeapOtherCaller(int low, int high, int send_chare, int bucket, const intptr_t &whole_bucket_pointer, long data_count, const intptr_t &local_graph_pointer, long vertex_count);
};
*/
  CkIndex_processHeapShared::__register("processHeapShared", sizeof(processHeapShared));

}
extern "C" void CkRegisterMainModule(void) {
  _registerweighted_htram_smp();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SsspChares::virtual_pup(PUP::er &p) {
    recursive_pup<SsspChares>(dynamic_cast<SsspChares*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_SharedInfo::virtual_pup(PUP::er &p) {
    recursive_pup<SharedInfo>(dynamic_cast<SharedInfo*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_processHeapShared::virtual_pup(PUP::er &p) {
    recursive_pup<processHeapShared>(dynamic_cast<processHeapShared*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
