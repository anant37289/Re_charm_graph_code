



/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::avgLatency_3_closure : public SDAG::Closure {
            CkCallback cb;


      avgLatency_3_closure() {
        init();
      }
      avgLatency_3_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~avgLatency_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(avgLatency_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::tflush_4_closure : public SDAG::Closure {
      

      tflush_4_closure() {
        init();
      }
      tflush_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~tflush_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(tflush_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::stop_periodic_flush_9_closure : public SDAG::Closure {
      

      stop_periodic_flush_9_closure() {
        init();
      }
      stop_periodic_flush_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~stop_periodic_flush_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(stop_periodic_flush_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::sanityCheck_10_closure : public SDAG::Closure {
      

      sanityCheck_10_closure() {
        init();
      }
      sanityCheck_10_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sanityCheck_10_closure() {
      }
      PUPable_decl(SINGLE_ARG(sanityCheck_10_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::getTotSendCount_11_closure : public SDAG::Closure {
            int impl_noname_8;


      getTotSendCount_11_closure() {
        init();
      }
      getTotSendCount_11_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_8;}
      void pup(PUP::er& __p) {
        __p | impl_noname_8;
        packClosure(__p);
      }
      virtual ~getTotSendCount_11_closure() {
      }
      PUPable_decl(SINGLE_ARG(getTotSendCount_11_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::getTotRecvCount_12_closure : public SDAG::Closure {
            int impl_noname_9;


      getTotRecvCount_12_closure() {
        init();
      }
      getTotRecvCount_12_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_9;}
      void pup(PUP::er& __p) {
        __p | impl_noname_9;
        packClosure(__p);
      }
      virtual ~getTotRecvCount_12_closure() {
      }
      PUPable_decl(SINGLE_ARG(getTotRecvCount_12_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTram::getTotTramHCount_13_closure : public SDAG::Closure {
            int impl_noname_a;


      getTotTramHCount_13_closure() {
        init();
      }
      getTotTramHCount_13_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return impl_noname_a;}
      void pup(PUP::er& __p) {
        __p | impl_noname_a;
        packClosure(__p);
      }
      virtual ~getTotTramHCount_13_closure() {
      }
      PUPable_decl(SINGLE_ARG(getTotTramHCount_13_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_HTramRecv::avgLatency_5_closure : public SDAG::Closure {
            CkCallback cb;


      avgLatency_5_closure() {
        init();
      }
      avgLatency_5_closure(CkMigrateMessage*) {
        init();
      }
            CkCallback & getP0() { return cb;}
      void pup(PUP::er& __p) {
        __p | cb;
        packClosure(__p);
      }
      virtual ~avgLatency_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(avgLatency_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: message HTramMessage{
int next;
itemT* buffer;
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HTramMessage::operator new(size_t s){
  return HTramMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_HTramMessage::operator new(size_t s, int* sz){
  return HTramMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_HTramMessage::operator new(size_t s, int* sz,const int pb){
  return HTramMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_HTramMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return HTramMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_HTramMessage::operator new(size_t s, const int p) {
  return HTramMessage::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_HTramMessage::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return HTramMessage::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_HTramMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_HTramMessage::CMessage_HTramMessage() {
HTramMessage *newmsg = (HTramMessage *)this;
}
void CMessage_HTramMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HTramMessage::pack(HTramMessage *msg) {
  return (void *) msg;
}
HTramMessage* CMessage_HTramMessage::unpack(void* buf) {
  HTramMessage *msg = (HTramMessage *) buf;
  return msg;
}
int CMessage_HTramMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message HTramLocalMessage{
itemT* buffer;
int next;
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HTramLocalMessage::operator new(size_t s){
  return HTramLocalMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_HTramLocalMessage::operator new(size_t s, int* sz){
  return HTramLocalMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_HTramLocalMessage::operator new(size_t s, int* sz,const int pb){
  return HTramLocalMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_HTramLocalMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return HTramLocalMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_HTramLocalMessage::operator new(size_t s, const int p) {
  return HTramLocalMessage::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_HTramLocalMessage::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return HTramLocalMessage::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_HTramLocalMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_HTramLocalMessage::CMessage_HTramLocalMessage() {
HTramLocalMessage *newmsg = (HTramLocalMessage *)this;
}
void CMessage_HTramLocalMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HTramLocalMessage::pack(HTramLocalMessage *msg) {
  return (void *) msg;
}
HTramLocalMessage* CMessage_HTramLocalMessage::unpack(void* buf) {
  HTramLocalMessage *msg = (HTramLocalMessage *) buf;
  return msg;
}
int CMessage_HTramLocalMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: message HTramNodeMessage{
datatype* buffer;
int* offset;
}
;
 */
#ifndef CK_TEMPLATES_ONLY
void *CMessage_HTramNodeMessage::operator new(size_t s){
  return HTramNodeMessage::alloc(__idx, s, 0, 0, GroupDepNum{});
}
void *CMessage_HTramNodeMessage::operator new(size_t s, int* sz){
  return HTramNodeMessage::alloc(__idx, s, sz, 0, GroupDepNum{});
}
void *CMessage_HTramNodeMessage::operator new(size_t s, int* sz,const int pb){
  return HTramNodeMessage::alloc(__idx, s, sz, pb, GroupDepNum{});
}
void *CMessage_HTramNodeMessage::operator new(size_t s, int* sz,const int pb, const GroupDepNum groupDepNum){
  return HTramNodeMessage::alloc(__idx, s, sz, pb, groupDepNum);
}
void *CMessage_HTramNodeMessage::operator new(size_t s, const int p) {
  return HTramNodeMessage::alloc(__idx, s, 0, p, GroupDepNum{});
}
void *CMessage_HTramNodeMessage::operator new(size_t s, const int p, const GroupDepNum groupDepNum) {
  return HTramNodeMessage::alloc(__idx, s, 0, p, groupDepNum);
}
void* CMessage_HTramNodeMessage::alloc(int msgnum, size_t sz, int *sizes, int pb, GroupDepNum groupDepNum) {
  CkpvAccess(_offsets)[0] = ALIGN_DEFAULT(sz);
  return CkAllocMsg(msgnum, CkpvAccess(_offsets)[0], pb, groupDepNum);
}
CMessage_HTramNodeMessage::CMessage_HTramNodeMessage() {
HTramNodeMessage *newmsg = (HTramNodeMessage *)this;
}
void CMessage_HTramNodeMessage::dealloc(void *p) {
  CkFreeMsg(p);
}
void* CMessage_HTramNodeMessage::pack(HTramNodeMessage *msg) {
  return (void *) msg;
}
HTramNodeMessage* CMessage_HTramNodeMessage::unpack(void* buf) {
  HTramNodeMessage *msg = (HTramNodeMessage *) buf;
  return msg;
}
int CMessage_HTramNodeMessage::__idx=0;
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: group HTram: IrrGroup{
HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
HTram(const CkGroupID &gid, const CkCallback &cb);
void avgLatency(const CkCallback &cb);
void tflush();
bool idleFlush();
void receivePerPE(HTramMessage* impl_msg);
void receiveOnPE(HTramMessage* impl_msg);
void receivePerPE(HTramNodeMessage* impl_msg);
void stop_periodic_flush();
void sanityCheck();
void getTotSendCount(int impl_noname_8);
void getTotRecvCount(int impl_noname_9);
void getTotTramHCount(int impl_noname_a);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HTram::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxyElement_HTram::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tflush();
 */
void CProxyElement_HTram::tflush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idleFlush();
 */
bool CProxyElement_HTram::idleFlush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  HTram *obj = ckLocalBranch();
  CkAssert(obj);
  envelope env;
  env.setMsgtype(ForBocMsg);
  env.setTotalsize(0);
  _TRACE_CREATION_DETAILED(&env, CkIndex_HTram::idx_idleFlush_void());
  _TRACE_CREATION_DONE(1);
  _TRACE_BEGIN_EXECUTE_DETAILED(CpvAccess(curPeEvent),ForBocMsg,(CkIndex_HTram::idx_idleFlush_void()),CkMyPe(),0,NULL, NULL);
#if CMK_CHARMDEBUG
  CpdBeforeEp(CkIndex_HTram::idx_idleFlush_void(), obj, NULL);
#endif
  CkCallstackPush((Chare*)obj);
  bool retValue = obj->idleFlush();
  CkCallstackPop((Chare*)obj);
#if CMK_CHARMDEBUG
  CpdAfterEp(CkIndex_HTram::idx_idleFlush_void());
#endif
  _TRACE_END_EXECUTE();
  return retValue;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramMessage* impl_msg);
 */
void CProxyElement_HTram::receivePerPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOnPE(HTramMessage* impl_msg);
 */
void CProxyElement_HTram::receiveOnPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
void CProxyElement_HTram::receivePerPE(HTramNodeMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxyElement_HTram::stop_periodic_flush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sanityCheck();
 */
void CProxyElement_HTram::sanityCheck(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotSendCount(int impl_noname_8);
 */
void CProxyElement_HTram::getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_HTram::_call_redn_wrapper_getTotSendCount_marshall11(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotSendCount(std::move(impl_noname_8.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotRecvCount(int impl_noname_9);
 */
void CProxyElement_HTram::getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_HTram::_call_redn_wrapper_getTotRecvCount_marshall12(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<int> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotRecvCount(std::move(impl_noname_9.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotTramHCount(int impl_noname_a);
 */
void CProxyElement_HTram::getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgBranch(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
void CkIndex_HTram::_call_redn_wrapper_getTotTramHCount_marshall13(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  /*Unmarshall pup'd fields: int impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  PUP::detail::TemporaryObjectHolder<int> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotTramHCount(std::move(impl_noname_a.t));
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
CkGroupID CProxy_HTram::ckNew(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    implP|impl_noname_2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_3;
    implP|impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    implP|impl_noname_2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_3;
    implP|impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_7;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_HTram::__idx, CkIndex_HTram::idx_HTram_marshall1(), impl_msg);
  return gId;
}
  CProxy_HTram::CProxy_HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    implP|impl_noname_2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_3;
    implP|impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_7;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_0;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)impl_noname_1;
    implP|impl_noname_2;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_3;
    implP|impl_noname_4;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_5;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<bool>::type>::type &)impl_noname_6;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)impl_noname_7;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_HTram::__idx, CkIndex_HTram::idx_HTram_marshall1(), impl_msg));
}

// Entry point registration function
int CkIndex_HTram::reg_HTram_marshall1() {
  int epidx = CkRegisterEp("HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7)",
      reinterpret_cast<CkCallFnPtr>(_call_HTram_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_HTram_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_HTram_marshall1);

  return epidx;
}

void CkIndex_HTram::_call_HTram_marshall1(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HTram(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t), std::move(impl_noname_7.t));
}
int CkIndex_HTram::_callmarshall_HTram_marshall1(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HTram(std::move(impl_noname_0.t), std::move(impl_noname_1.t), std::move(impl_noname_2.t), std::move(impl_noname_3.t), std::move(impl_noname_4.t), std::move(impl_noname_5.t), std::move(impl_noname_6.t), std::move(impl_noname_7.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_HTram_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_0;
  implP|impl_noname_0;
  PUP::detail::TemporaryObjectHolder<CkGroupID> impl_noname_1;
  implP|impl_noname_1;
  PUP::detail::TemporaryObjectHolder<int> impl_noname_2;
  implP|impl_noname_2;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_3;
  implP|impl_noname_3;
  PUP::detail::TemporaryObjectHolder<double> impl_noname_4;
  implP|impl_noname_4;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_5;
  implP|impl_noname_5;
  PUP::detail::TemporaryObjectHolder<bool> impl_noname_6;
  implP|impl_noname_6;
  PUP::detail::TemporaryObjectHolder<CkCallback> impl_noname_7;
  implP|impl_noname_7;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_2");
  implDestP|impl_noname_2;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_3");
  implDestP|impl_noname_3;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_4");
  implDestP|impl_noname_4;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_5");
  implDestP|impl_noname_5;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_6");
  implDestP|impl_noname_6;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_7");
  implDestP|impl_noname_7;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
CkGroupID CProxy_HTram::ckNew(const CkGroupID &gid, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &gid, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  CkGroupID gId = CkCreateGroup(CkIndex_HTram::__idx, CkIndex_HTram::idx_HTram_marshall2(), impl_msg);
  return gId;
}
  CProxy_HTram::CProxy_HTram(const CkGroupID &gid, const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CkGroupID &gid, const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkGroupID>::type>::type &)gid;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  UsrToEnv(impl_msg)->setMsgtype(BocInitMsg);
  ckSetGroupID(CkCreateGroup(CkIndex_HTram::__idx, CkIndex_HTram::idx_HTram_marshall2(), impl_msg));
}

// Entry point registration function
int CkIndex_HTram::reg_HTram_marshall2() {
  int epidx = CkRegisterEp("HTram(const CkGroupID &gid, const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_HTram_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_HTram_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_HTram_marshall2);

  return epidx;
}

void CkIndex_HTram::_call_HTram_marshall2(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &gid, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HTram(std::move(gid.t), std::move(cb.t));
}
int CkIndex_HTram::_callmarshall_HTram_marshall2(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkGroupID &gid, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) HTram(std::move(gid.t), std::move(cb.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_HTram_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkGroupID &gid, const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkGroupID> gid;
  implP|gid;
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("gid");
  implDestP|gid;
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxy_HTram::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::avgLatency(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchMulti(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::avgLatency(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  CkSendMsgBranchGroup(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_avgLatency_marshall3() {
  int epidx = CkRegisterEp("avgLatency(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_avgLatency_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_avgLatency_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_avgLatency_marshall3);

  return epidx;
}

void CkIndex_HTram::_call_avgLatency_marshall3(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->avgLatency(std::move(cb.t));
}
int CkIndex_HTram::_callmarshall_avgLatency_marshall3(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->avgLatency(std::move(cb.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_avgLatency_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_HTram::avgLatency_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tflush();
 */
void CProxy_HTram::tflush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::tflush(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::tflush(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_tflush_void() {
  int epidx = CkRegisterEp("tflush()",
      reinterpret_cast<CkCallFnPtr>(_call_tflush_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTram::_call_tflush_void(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->tflush();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_HTram::tflush_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idleFlush();
 */

// Entry point registration function
int CkIndex_HTram::reg_idleFlush_void() {
  int epidx = CkRegisterEp("idleFlush()",
      reinterpret_cast<CkCallFnPtr>(_call_idleFlush_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTram::_call_idleFlush_void(void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  bool res = impl_obj->idleFlush();
  if (res) CkCallWhenIdle(idx_idleFlush_void(), impl_obj);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramMessage* impl_msg);
 */
void CProxy_HTram::receivePerPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::receivePerPE(HTramMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::receivePerPE(HTramMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_receivePerPE_HTramMessage() {
  int epidx = CkRegisterEp("receivePerPE(HTramMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receivePerPE_HTramMessage), CMessage_HTramMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTram::_call_receivePerPE_HTramMessage(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->receivePerPE((HTramMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOnPE(HTramMessage* impl_msg);
 */
void CProxy_HTram::receiveOnPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}
void CProxy_HTram::receiveOnPE(HTramMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID(), npes, pes,0+CK_MSG_EXPEDITED);
}
void CProxy_HTram::receiveOnPE(HTramMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetGroupID(), grp,0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_HTram::reg_receiveOnPE_HTramMessage() {
  int epidx = CkRegisterEp("receiveOnPE(HTramMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receiveOnPE_HTramMessage), CMessage_HTramMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTram::_call_receiveOnPE_HTramMessage(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->receiveOnPE((HTramMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
void CProxy_HTram::receivePerPE(HTramNodeMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::receivePerPE(HTramNodeMessage* impl_msg, int npes, int *pes) {
  CkSendMsgBranchMulti(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::receivePerPE(HTramNodeMessage* impl_msg, CmiGroup &grp) {
  CkSendMsgBranchGroup(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_receivePerPE_HTramNodeMessage() {
  int epidx = CkRegisterEp("receivePerPE(HTramNodeMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receivePerPE_HTramNodeMessage), CMessage_HTramNodeMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramNodeMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTram::_call_receivePerPE_HTramNodeMessage(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->receivePerPE((HTramNodeMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxy_HTram::stop_periodic_flush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::stop_periodic_flush(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::stop_periodic_flush(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_stop_periodic_flush_void() {
  int epidx = CkRegisterEp("stop_periodic_flush()",
      reinterpret_cast<CkCallFnPtr>(_call_stop_periodic_flush_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTram::_call_stop_periodic_flush_void(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->stop_periodic_flush();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_HTram::stop_periodic_flush_9_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sanityCheck();
 */
void CProxy_HTram::sanityCheck(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::sanityCheck(int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchMulti(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::sanityCheck(CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkSendMsgBranchGroup(CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_sanityCheck_void() {
  int epidx = CkRegisterEp("sanityCheck()",
      reinterpret_cast<CkCallFnPtr>(_call_sanityCheck_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTram::_call_sanityCheck_void(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  impl_obj->sanityCheck();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_HTram::sanityCheck_10_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotSendCount(int impl_noname_8);
 */
void CProxy_HTram::getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::getTotSendCount(int impl_noname_8, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::getTotSendCount(int impl_noname_8, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  CkSendMsgBranchGroup(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_getTotSendCount_marshall11() {
  int epidx = CkRegisterEp("getTotSendCount(int impl_noname_8)",
      reinterpret_cast<CkCallFnPtr>(_call_getTotSendCount_marshall11), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getTotSendCount_marshall11);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getTotSendCount_marshall11);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_HTram::reg_redn_wrapper_getTotSendCount_marshall11() {
  return CkRegisterEp("redn_wrapper_getTotSendCount(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_getTotSendCount_marshall11), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_HTram::_call_getTotSendCount_marshall11(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotSendCount(std::move(impl_noname_8.t));
}
int CkIndex_HTram::_callmarshall_getTotSendCount_marshall11(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotSendCount(std::move(impl_noname_8.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_getTotSendCount_marshall11(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_8*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_8;
  implP|impl_noname_8;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_8");
  implDestP|impl_noname_8;
}
PUPable_def(SINGLE_ARG(Closure_HTram::getTotSendCount_11_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotRecvCount(int impl_noname_9);
 */
void CProxy_HTram::getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::getTotRecvCount(int impl_noname_9, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::getTotRecvCount(int impl_noname_9, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  CkSendMsgBranchGroup(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_getTotRecvCount_marshall12() {
  int epidx = CkRegisterEp("getTotRecvCount(int impl_noname_9)",
      reinterpret_cast<CkCallFnPtr>(_call_getTotRecvCount_marshall12), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getTotRecvCount_marshall12);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getTotRecvCount_marshall12);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_HTram::reg_redn_wrapper_getTotRecvCount_marshall12() {
  return CkRegisterEp("redn_wrapper_getTotRecvCount(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_getTotRecvCount_marshall12), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_HTram::_call_getTotRecvCount_marshall12(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotRecvCount(std::move(impl_noname_9.t));
}
int CkIndex_HTram::_callmarshall_getTotRecvCount_marshall12(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotRecvCount(std::move(impl_noname_9.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_getTotRecvCount_marshall12(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_9*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_9;
  implP|impl_noname_9;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_9");
  implDestP|impl_noname_9;
}
PUPable_def(SINGLE_ARG(Closure_HTram::getTotRecvCount_12_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotTramHCount(int impl_noname_a);
 */
void CProxy_HTram::getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     CkGroupMsgPrep(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->GroupBroadcast(ckDelegatedPtr(),CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgBranch(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID(),0);
}
void CProxy_HTram::getTotTramHCount(int impl_noname_a, int npes, int *pes, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID(), npes, pes,0);
}
void CProxy_HTram::getTotTramHCount(int impl_noname_a, CmiGroup &grp, const CkEntryOptions *impl_e_opts) {
  //Marshall: int impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  CkSendMsgBranchGroup(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetGroupID(), grp,0);
}

// Entry point registration function
int CkIndex_HTram::reg_getTotTramHCount_marshall13() {
  int epidx = CkRegisterEp("getTotTramHCount(int impl_noname_a)",
      reinterpret_cast<CkCallFnPtr>(_call_getTotTramHCount_marshall13), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_getTotTramHCount_marshall13);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_getTotTramHCount_marshall13);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_HTram::reg_redn_wrapper_getTotTramHCount_marshall13() {
  return CkRegisterEp("redn_wrapper_getTotTramHCount(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_getTotTramHCount_marshall13), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_HTram::_call_getTotTramHCount_marshall13(void* impl_msg, void* impl_obj_void)
{
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotTramHCount(std::move(impl_noname_a.t));
}
int CkIndex_HTram::_callmarshall_getTotTramHCount_marshall13(char* impl_buf, void* impl_obj_void) {
  HTram* impl_obj = static_cast<HTram*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->getTotTramHCount(std::move(impl_noname_a.t));
  return implP.size();
}
void CkIndex_HTram::_marshallmessagepup_getTotTramHCount_marshall13(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int impl_noname_a*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> impl_noname_a;
  implP|impl_noname_a;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_a");
  implDestP|impl_noname_a;
}
PUPable_def(SINGLE_ARG(Closure_HTram::getTotTramHCount_13_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxySection_HTram::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_avgLatency_marshall3(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void tflush();
 */
void CProxySection_HTram::tflush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_tflush_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_tflush_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: bool idleFlush();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramMessage* impl_msg);
 */
void CProxySection_HTram::receivePerPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_receivePerPE_HTramMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receiveOnPE(HTramMessage* impl_msg);
 */
void CProxySection_HTram::receiveOnPE(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_receiveOnPE_HTramMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
void CProxySection_HTram::receivePerPE(HTramNodeMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_receivePerPE_HTramNodeMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void stop_periodic_flush();
 */
void CProxySection_HTram::stop_periodic_flush(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_stop_periodic_flush_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sanityCheck();
 */
void CProxySection_HTram::sanityCheck(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_sanityCheck_void(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_sanityCheck_void(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotSendCount(int impl_noname_8);
 */
void CProxySection_HTram::getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_8
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_8;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_8;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotSendCount_marshall11(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotRecvCount(int impl_noname_9);
 */
void CProxySection_HTram::getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_9
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_9;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_9;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotRecvCount_marshall12(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getTotTramHCount(int impl_noname_a);
 */
void CProxySection_HTram::getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int impl_noname_a
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|impl_noname_a;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|impl_noname_a;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->GroupSectionSend(ckDelegatedPtr(),CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgBranchMulti(CkIndex_HTram::idx_getTotTramHCount_marshall13(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HTram::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_IrrGroup::__idx);
   CkRegisterGroupIrr(__idx,HTram::isIrreducible());
  // REG: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
  idx_HTram_marshall1();

  // REG: HTram(const CkGroupID &gid, const CkCallback &cb);
  idx_HTram_marshall2();

  // REG: void avgLatency(const CkCallback &cb);
  idx_avgLatency_marshall3();

  // REG: void tflush();
  idx_tflush_void();

  // REG: bool idleFlush();
  idx_idleFlush_void();

  // REG: void receivePerPE(HTramMessage* impl_msg);
  idx_receivePerPE_HTramMessage();

  // REG: void receiveOnPE(HTramMessage* impl_msg);
  idx_receiveOnPE_HTramMessage();

  // REG: void receivePerPE(HTramNodeMessage* impl_msg);
  idx_receivePerPE_HTramNodeMessage();

  // REG: void stop_periodic_flush();
  idx_stop_periodic_flush_void();

  // REG: void sanityCheck();
  idx_sanityCheck_void();

  // REG: void getTotSendCount(int impl_noname_8);
  idx_getTotSendCount_marshall11();
  idx_redn_wrapper_getTotSendCount_marshall11();

  // REG: void getTotRecvCount(int impl_noname_9);
  idx_getTotRecvCount_marshall12();
  idx_redn_wrapper_getTotRecvCount_marshall12();

  // REG: void getTotTramHCount(int impl_noname_a);
  idx_getTotTramHCount_marshall13();
  idx_redn_wrapper_getTotTramHCount_marshall13();

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup HTramNodeGrp: NodeGroup{
HTramNodeGrp();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HTramNodeGrp::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramNodeGrp();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramNodeGrp();
 */
CkGroupID CProxy_HTramNodeGrp::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_HTramNodeGrp::__idx, CkIndex_HTramNodeGrp::idx_HTramNodeGrp_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_HTramNodeGrp::reg_HTramNodeGrp_void() {
  int epidx = CkRegisterEp("HTramNodeGrp()",
      reinterpret_cast<CkCallFnPtr>(_call_HTramNodeGrp_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTramNodeGrp::_call_HTramNodeGrp_void(void* impl_msg, void* impl_obj_void)
{
  HTramNodeGrp* impl_obj = static_cast<HTramNodeGrp*>(impl_obj_void);
  new (impl_obj_void) HTramNodeGrp();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramNodeGrp();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HTramNodeGrp::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,HTramNodeGrp::isIrreducible());
  // REG: HTramNodeGrp();
  idx_HTramNodeGrp_void();
  CkRegisterDefaultCtor(__idx, idx_HTramNodeGrp_void());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: nodegroup HTramRecv: NodeGroup{
HTramRecv();
void receive(HTramMessage* impl_msg);
void receive_no_sort(HTramMessage* impl_msg);
void receive_small(HTramLocalMessage* impl_msg);
void avgLatency(const CkCallback &cb);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_HTramRecv::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramRecv();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(HTramMessage* impl_msg);
 */
void CProxyElement_HTramRecv::receive(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0+CK_MSG_EXPEDITED);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_no_sort(HTramMessage* impl_msg);
 */
void CProxyElement_HTramRecv::receive_no_sort(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_small(HTramLocalMessage* impl_msg);
 */
void CProxyElement_HTramRecv::receive_small(HTramLocalMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxyElement_HTramRecv::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID());
  } else {
    CkSendMsgNodeBranch(CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupPe(), ckGetGroupID(),0);
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramRecv();
 */
CkGroupID CProxy_HTramRecv::ckNew(const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(NodeBocInitMsg);
  CkGroupID gId = CkCreateNodeGroup(CkIndex_HTramRecv::__idx, CkIndex_HTramRecv::idx_HTramRecv_void(), impl_msg);
  return gId;
}

// Entry point registration function
int CkIndex_HTramRecv::reg_HTramRecv_void() {
  int epidx = CkRegisterEp("HTramRecv()",
      reinterpret_cast<CkCallFnPtr>(_call_HTramRecv_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_HTramRecv::_call_HTramRecv_void(void* impl_msg, void* impl_obj_void)
{
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  new (impl_obj_void) HTramRecv();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(HTramMessage* impl_msg);
 */
void CProxy_HTramRecv::receive(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetGroupID(),0+CK_MSG_EXPEDITED);
}

// Entry point registration function
int CkIndex_HTramRecv::reg_receive_HTramMessage() {
  int epidx = CkRegisterEp("receive(HTramMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receive_HTramMessage), CMessage_HTramMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTramRecv::_call_receive_HTramMessage(void* impl_msg, void* impl_obj_void)
{
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  impl_obj->receive((HTramMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_no_sort(HTramMessage* impl_msg);
 */
void CProxy_HTramRecv::receive_no_sort(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_HTramRecv::reg_receive_no_sort_HTramMessage() {
  int epidx = CkRegisterEp("receive_no_sort(HTramMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receive_no_sort_HTramMessage), CMessage_HTramMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTramRecv::_call_receive_no_sort_HTramMessage(void* impl_msg, void* impl_obj_void)
{
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  impl_obj->receive_no_sort((HTramMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_small(HTramLocalMessage* impl_msg);
 */
void CProxy_HTramRecv::receive_small(HTramLocalMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_HTramRecv::reg_receive_small_HTramLocalMessage() {
  int epidx = CkRegisterEp("receive_small(HTramLocalMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_receive_small_HTramLocalMessage), CMessage_HTramLocalMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)HTramLocalMessage::ckDebugPup);
  return epidx;
}

void CkIndex_HTramRecv::_call_receive_small_HTramLocalMessage(void* impl_msg, void* impl_obj_void)
{
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  impl_obj->receive_small((HTramLocalMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxy_HTramRecv::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     CkNodeGroupMsgPrep(CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupID());
     ckDelegatedTo()->NodeGroupBroadcast(ckDelegatedPtr(),CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupID());
  } else CkBroadcastMsgNodeBranch(CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetGroupID(),0);
}

// Entry point registration function
int CkIndex_HTramRecv::reg_avgLatency_marshall5() {
  int epidx = CkRegisterEp("avgLatency(const CkCallback &cb)",
      reinterpret_cast<CkCallFnPtr>(_call_avgLatency_marshall5), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_avgLatency_marshall5);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_avgLatency_marshall5);

  return epidx;
}

void CkIndex_HTramRecv::_call_avgLatency_marshall5(void* impl_msg, void* impl_obj_void)
{
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->avgLatency(std::move(cb.t));
}
int CkIndex_HTramRecv::_callmarshall_avgLatency_marshall5(char* impl_buf, void* impl_obj_void) {
  HTramRecv* impl_obj = static_cast<HTramRecv*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->avgLatency(std::move(cb.t));
  return implP.size();
}
void CkIndex_HTramRecv::_marshallmessagepup_avgLatency_marshall5(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CkCallback &cb*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CkCallback> cb;
  implP|cb;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("cb");
  implDestP|cb;
}
PUPable_def(SINGLE_ARG(Closure_HTramRecv::avgLatency_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: HTramRecv();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive(HTramMessage* impl_msg);
 */
void CProxySection_HTramRecv::receive(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_HTramRecv::idx_receive_HTramMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0+CK_MSG_EXPEDITED);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_no_sort(HTramMessage* impl_msg);
 */
void CProxySection_HTramRecv::receive_no_sort(HTramMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_HTramRecv::idx_receive_no_sort_HTramMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void receive_small(HTramLocalMessage* impl_msg);
 */
void CProxySection_HTramRecv::receive_small(HTramLocalMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_HTramRecv::idx_receive_small_HTramLocalMessage(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void avgLatency(const CkCallback &cb);
 */
void CProxySection_HTramRecv::avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: const CkCallback &cb
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CkCallback>::type>::type &)cb;
  }
  if (ckIsDelegated()) {
     ckDelegatedTo()->NodeGroupSectionSend(ckDelegatedPtr(),CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg, ckGetNumSections(), ckGetSectionIDs());
  } else {
    void *impl_msg_tmp;
    for (int i=0; i<ckGetNumSections(); ++i) {
       impl_msg_tmp= (i<ckGetNumSections()-1) ? CkCopyMsg((void **) &impl_msg):impl_msg;
       CkSendMsgNodeBranchMulti(CkIndex_HTramRecv::idx_avgLatency_marshall5(), impl_msg_tmp, ckGetGroupIDn(i), ckGetNumElements(i), ckGetElements(i),0);
    }
  }
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_HTramRecv::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeGroup);
  CkRegisterBase(__idx, CkIndex_NodeGroup::__idx);
   CkRegisterGroupIrr(__idx,HTramRecv::isIrreducible());
  // REG: HTramRecv();
  idx_HTramRecv_void();
  CkRegisterDefaultCtor(__idx, idx_HTramRecv_void());

  // REG: void receive(HTramMessage* impl_msg);
  idx_receive_HTramMessage();

  // REG: void receive_no_sort(HTramMessage* impl_msg);
  idx_receive_no_sort_HTramMessage();

  // REG: void receive_small(HTramLocalMessage* impl_msg);
  idx_receive_small_HTramLocalMessage();

  // REG: void avgLatency(const CkCallback &cb);
  idx_avgLatency_marshall5();

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerhtram_group(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerInitCall(registerMsgStatsCollection,1);

/* REG: message HTramMessage{
int next;
itemT* buffer;
}
;
*/
CMessage_HTramMessage::__register("HTramMessage", sizeof(HTramMessage),(CkPackFnPtr) HTramMessage::pack,(CkUnpackFnPtr) HTramMessage::unpack);

/* REG: message HTramLocalMessage{
itemT* buffer;
int next;
}
;
*/
CMessage_HTramLocalMessage::__register("HTramLocalMessage", sizeof(HTramLocalMessage),(CkPackFnPtr) HTramLocalMessage::pack,(CkUnpackFnPtr) HTramLocalMessage::unpack);

/* REG: message HTramNodeMessage{
datatype* buffer;
int* offset;
}
;
*/
CMessage_HTramNodeMessage::__register("HTramNodeMessage", sizeof(HTramNodeMessage),(CkPackFnPtr) HTramNodeMessage::pack,(CkUnpackFnPtr) HTramNodeMessage::unpack);

/* REG: group HTram: IrrGroup{
HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
HTram(const CkGroupID &gid, const CkCallback &cb);
void avgLatency(const CkCallback &cb);
void tflush();
bool idleFlush();
void receivePerPE(HTramMessage* impl_msg);
void receiveOnPE(HTramMessage* impl_msg);
void receivePerPE(HTramNodeMessage* impl_msg);
void stop_periodic_flush();
void sanityCheck();
void getTotSendCount(int impl_noname_8);
void getTotRecvCount(int impl_noname_9);
void getTotTramHCount(int impl_noname_a);
};
*/
  CkIndex_HTram::__register("HTram", sizeof(HTram));

/* REG: nodegroup HTramNodeGrp: NodeGroup{
HTramNodeGrp();
};
*/
  CkIndex_HTramNodeGrp::__register("HTramNodeGrp", sizeof(HTramNodeGrp));

/* REG: nodegroup HTramRecv: NodeGroup{
HTramRecv();
void receive(HTramMessage* impl_msg);
void receive_no_sort(HTramMessage* impl_msg);
void receive_small(HTramLocalMessage* impl_msg);
void avgLatency(const CkCallback &cb);
};
*/
  CkIndex_HTramRecv::__register("HTramRecv", sizeof(HTramRecv));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HTram::virtual_pup(PUP::er &p) {
    recursive_pup<HTram>(dynamic_cast<HTram*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HTramNodeGrp::virtual_pup(PUP::er &p) {
    recursive_pup<HTramNodeGrp>(dynamic_cast<HTramNodeGrp*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_HTramRecv::virtual_pup(PUP::er &p) {
    recursive_pup<HTramRecv>(dynamic_cast<HTramRecv*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
