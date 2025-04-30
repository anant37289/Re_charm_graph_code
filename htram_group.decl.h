#ifndef _DECL_htram_group_H_
#define _DECL_htram_group_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message HTramMessage{
int next;
itemT* buffer;
}
;
 */
class HTramMessage;
class CMessage_HTramMessage:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_HTramMessage();
    static void *pack(HTramMessage *p);
    static HTramMessage* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message HTramLocalMessage{
itemT* buffer;
int next;
}
;
 */
class HTramLocalMessage;
class CMessage_HTramLocalMessage:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_HTramLocalMessage();
    static void *pack(HTramLocalMessage *p);
    static HTramLocalMessage* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

#ifndef GROUPDEPNUM_DECLARED
# define GROUPDEPNUM_DECLARED
struct GroupDepNum
{
  int groupDepNum;
  explicit GroupDepNum(int g = 0) : groupDepNum{g} { }
  operator int() const { return groupDepNum; }
};
#endif
/* DECLS: message HTramNodeMessage{
datatype* buffer;
int* offset;
}
;
 */
class HTramNodeMessage;
class CMessage_HTramNodeMessage:public CkMessage{
  public:
    static int __idx;
    void* operator new(size_t, void*p) { return p; }
    void* operator new(size_t);
    void* operator new(size_t, int*, const int);
    void* operator new(size_t, int*, const int, const GroupDepNum);
    void* operator new(size_t, int*);
#if CMK_MULTIPLE_DELETE
    void operator delete(void*p, void*){dealloc(p);}
    void operator delete(void*p){dealloc(p);}
    void operator delete(void*p, int*, const int){dealloc(p);}
    void operator delete(void*p, int*, const int, const GroupDepNum){dealloc(p);}
    void operator delete(void*p, int*){dealloc(p);}
#endif
    void operator delete(void*p, size_t){dealloc(p);}
    static void* alloc(int,size_t, int*, int, GroupDepNum);
    static void dealloc(void *p);
    CMessage_HTramNodeMessage();
    static void *pack(HTramNodeMessage *p);
    static HTramNodeMessage* unpack(void* p);
    void *operator new(size_t, const int);
    void *operator new(size_t, const int, const GroupDepNum);
#if CMK_MULTIPLE_DELETE
    void operator delete(void *p, const int){dealloc(p);}
    void operator delete(void *p, const int, const GroupDepNum){dealloc(p);}
#endif
    static void __register(const char *s, size_t size, CkPackFnPtr pack, CkUnpackFnPtr unpack) {
      __idx = CkRegisterMsg(s, pack, unpack, dealloc, size);
    }
};

/* DECLS: group HTram: IrrGroup{
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
 class HTram;
 class CkIndex_HTram;
 class CProxy_HTram;
 class CProxyElement_HTram;
 class CProxySection_HTram;
/* --------------- index object ------------------ */
class CkIndex_HTram:public CkIndex_IrrGroup{
  public:
    typedef HTram local_t;
    typedef CkIndex_HTram index_t;
    typedef CProxy_HTram proxy_t;
    typedef CProxyElement_HTram element_t;
    typedef CProxySection_HTram section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
     */
    // Entry point registration at startup
    
    static int reg_HTram_marshall1();
    // Entry point index lookup
    
    inline static int idx_HTram_marshall1() {
      static int epidx = reg_HTram_marshall1();
      return epidx;
    }

    
    static int ckNew(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7) { return idx_HTram_marshall1(); }
    
    static void _call_HTram_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HTram_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_HTram_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_HTram_marshall1(PUP::er &p,void *msg);
    /* DECLS: HTram(const CkGroupID &gid, const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_HTram_marshall2();
    // Entry point index lookup
    
    inline static int idx_HTram_marshall2() {
      static int epidx = reg_HTram_marshall2();
      return epidx;
    }

    
    static int ckNew(const CkGroupID &gid, const CkCallback &cb) { return idx_HTram_marshall2(); }
    
    static void _call_HTram_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HTram_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_HTram_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_HTram_marshall2(PUP::er &p,void *msg);
    /* DECLS: void avgLatency(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_avgLatency_marshall3();
    // Entry point index lookup
    
    inline static int idx_avgLatency_marshall3() {
      static int epidx = reg_avgLatency_marshall3();
      return epidx;
    }

    
    inline static int idx_avgLatency(void (HTram::*)(const CkCallback &cb) ) {
      return idx_avgLatency_marshall3();
    }


    
    static int avgLatency(const CkCallback &cb) { return idx_avgLatency_marshall3(); }
    
    static void _call_avgLatency_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_avgLatency_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_avgLatency_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_avgLatency_marshall3(PUP::er &p,void *msg);
    /* DECLS: void tflush();
     */
    // Entry point registration at startup
    
    static int reg_tflush_void();
    // Entry point index lookup
    
    inline static int idx_tflush_void() {
      static int epidx = reg_tflush_void();
      return epidx;
    }

    
    inline static int idx_tflush(void (HTram::*)() ) {
      return idx_tflush_void();
    }


    
    static int tflush() { return idx_tflush_void(); }
    
    static void _call_tflush_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_tflush_void(void* impl_msg, void* impl_obj);
    /* DECLS: bool idleFlush();
     */
    // Entry point registration at startup
    
    static int reg_idleFlush_void();
    // Entry point index lookup
    
    inline static int idx_idleFlush_void() {
      static int epidx = reg_idleFlush_void();
      return epidx;
    }

    
    inline static int idx_idleFlush(bool (HTram::*)() ) {
      return idx_idleFlush_void();
    }


    
    static int idleFlush() { return idx_idleFlush_void(); }
    
    static void _call_idleFlush_void(void* impl_obj);
    
    static void _call_sdag_idleFlush_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receivePerPE(HTramMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receivePerPE_HTramMessage();
    // Entry point index lookup
    
    inline static int idx_receivePerPE_HTramMessage() {
      static int epidx = reg_receivePerPE_HTramMessage();
      return epidx;
    }

    
    inline static int idx_receivePerPE(void (HTram::*)(HTramMessage* impl_msg) ) {
      return idx_receivePerPE_HTramMessage();
    }


    
    static int receivePerPE(HTramMessage* impl_msg) { return idx_receivePerPE_HTramMessage(); }
    
    static void _call_receivePerPE_HTramMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receivePerPE_HTramMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void receiveOnPE(HTramMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receiveOnPE_HTramMessage();
    // Entry point index lookup
    
    inline static int idx_receiveOnPE_HTramMessage() {
      static int epidx = reg_receiveOnPE_HTramMessage();
      return epidx;
    }

    
    inline static int idx_receiveOnPE(void (HTram::*)(HTramMessage* impl_msg) ) {
      return idx_receiveOnPE_HTramMessage();
    }


    
    static int receiveOnPE(HTramMessage* impl_msg) { return idx_receiveOnPE_HTramMessage(); }
    
    static void _call_receiveOnPE_HTramMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receiveOnPE_HTramMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void receivePerPE(HTramNodeMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receivePerPE_HTramNodeMessage();
    // Entry point index lookup
    
    inline static int idx_receivePerPE_HTramNodeMessage() {
      static int epidx = reg_receivePerPE_HTramNodeMessage();
      return epidx;
    }

    
    inline static int idx_receivePerPE(void (HTram::*)(HTramNodeMessage* impl_msg) ) {
      return idx_receivePerPE_HTramNodeMessage();
    }


    
    static int receivePerPE(HTramNodeMessage* impl_msg) { return idx_receivePerPE_HTramNodeMessage(); }
    
    static void _call_receivePerPE_HTramNodeMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receivePerPE_HTramNodeMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void stop_periodic_flush();
     */
    // Entry point registration at startup
    
    static int reg_stop_periodic_flush_void();
    // Entry point index lookup
    
    inline static int idx_stop_periodic_flush_void() {
      static int epidx = reg_stop_periodic_flush_void();
      return epidx;
    }

    
    inline static int idx_stop_periodic_flush(void (HTram::*)() ) {
      return idx_stop_periodic_flush_void();
    }


    
    static int stop_periodic_flush() { return idx_stop_periodic_flush_void(); }
    
    static void _call_stop_periodic_flush_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_stop_periodic_flush_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sanityCheck();
     */
    // Entry point registration at startup
    
    static int reg_sanityCheck_void();
    // Entry point index lookup
    
    inline static int idx_sanityCheck_void() {
      static int epidx = reg_sanityCheck_void();
      return epidx;
    }

    
    inline static int idx_sanityCheck(void (HTram::*)() ) {
      return idx_sanityCheck_void();
    }


    
    static int sanityCheck() { return idx_sanityCheck_void(); }
    
    static void _call_sanityCheck_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sanityCheck_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getTotSendCount(int impl_noname_8);
     */
    // Entry point registration at startup
    
    static int reg_getTotSendCount_marshall11();
    // Entry point index lookup
    
    inline static int idx_getTotSendCount_marshall11() {
      static int epidx = reg_getTotSendCount_marshall11();
      return epidx;
    }

    
    inline static int idx_getTotSendCount(void (HTram::*)(int impl_noname_8) ) {
      return idx_getTotSendCount_marshall11();
    }


    
    static int getTotSendCount(int impl_noname_8) { return idx_getTotSendCount_marshall11(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_getTotSendCount_marshall11();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_getTotSendCount_marshall11() {
      static int epidx = reg_redn_wrapper_getTotSendCount_marshall11();
      return epidx;
    }
    
    static int redn_wrapper_getTotSendCount(CkReductionMsg* impl_msg) { return idx_redn_wrapper_getTotSendCount_marshall11(); }
    
    static void _call_redn_wrapper_getTotSendCount_marshall11(void* impl_msg, void* impl_obj_void);
    
    static void _call_getTotSendCount_marshall11(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getTotSendCount_marshall11(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getTotSendCount_marshall11(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getTotSendCount_marshall11(PUP::er &p,void *msg);
    /* DECLS: void getTotRecvCount(int impl_noname_9);
     */
    // Entry point registration at startup
    
    static int reg_getTotRecvCount_marshall12();
    // Entry point index lookup
    
    inline static int idx_getTotRecvCount_marshall12() {
      static int epidx = reg_getTotRecvCount_marshall12();
      return epidx;
    }

    
    inline static int idx_getTotRecvCount(void (HTram::*)(int impl_noname_9) ) {
      return idx_getTotRecvCount_marshall12();
    }


    
    static int getTotRecvCount(int impl_noname_9) { return idx_getTotRecvCount_marshall12(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_getTotRecvCount_marshall12();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_getTotRecvCount_marshall12() {
      static int epidx = reg_redn_wrapper_getTotRecvCount_marshall12();
      return epidx;
    }
    
    static int redn_wrapper_getTotRecvCount(CkReductionMsg* impl_msg) { return idx_redn_wrapper_getTotRecvCount_marshall12(); }
    
    static void _call_redn_wrapper_getTotRecvCount_marshall12(void* impl_msg, void* impl_obj_void);
    
    static void _call_getTotRecvCount_marshall12(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getTotRecvCount_marshall12(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getTotRecvCount_marshall12(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getTotRecvCount_marshall12(PUP::er &p,void *msg);
    /* DECLS: void getTotTramHCount(int impl_noname_a);
     */
    // Entry point registration at startup
    
    static int reg_getTotTramHCount_marshall13();
    // Entry point index lookup
    
    inline static int idx_getTotTramHCount_marshall13() {
      static int epidx = reg_getTotTramHCount_marshall13();
      return epidx;
    }

    
    inline static int idx_getTotTramHCount(void (HTram::*)(int impl_noname_a) ) {
      return idx_getTotTramHCount_marshall13();
    }


    
    static int getTotTramHCount(int impl_noname_a) { return idx_getTotTramHCount_marshall13(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_getTotTramHCount_marshall13();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_getTotTramHCount_marshall13() {
      static int epidx = reg_redn_wrapper_getTotTramHCount_marshall13();
      return epidx;
    }
    
    static int redn_wrapper_getTotTramHCount(CkReductionMsg* impl_msg) { return idx_redn_wrapper_getTotTramHCount_marshall13(); }
    
    static void _call_redn_wrapper_getTotTramHCount_marshall13(void* impl_msg, void* impl_obj_void);
    
    static void _call_getTotTramHCount_marshall13(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getTotTramHCount_marshall13(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_getTotTramHCount_marshall13(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_getTotTramHCount_marshall13(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HTram: public CProxyElement_IrrGroup{
  public:
    typedef HTram local_t;
    typedef CkIndex_HTram index_t;
    typedef CProxy_HTram proxy_t;
    typedef CProxyElement_HTram element_t;
    typedef CProxySection_HTram section_t;


    /* TRAM aggregators */

    CProxyElement_HTram(void) {
    }
    CProxyElement_HTram(const IrrGroup *g) : CProxyElement_IrrGroup(g){
    }
    CProxyElement_HTram(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_IrrGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_HTram(CkGroupID _gid,int _onPE) : CProxyElement_IrrGroup(_gid,_onPE){
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
    HTram* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTram* ckLocalBranch(CkGroupID gID) {
      return (HTram*)CkLocalBranch(gID);
    }
/* DECLS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
    

/* DECLS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
    

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tflush();
 */
    
    void tflush(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: bool idleFlush();
 */
    
    bool idleFlush(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receivePerPE(HTramMessage* impl_msg);
 */
    
    void receivePerPE(HTramMessage* impl_msg);

/* DECLS: void receiveOnPE(HTramMessage* impl_msg);
 */
    
    void receiveOnPE(HTramMessage* impl_msg);

/* DECLS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
    
    void receivePerPE(HTramNodeMessage* impl_msg);

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sanityCheck();
 */
    
    void sanityCheck(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotSendCount(int impl_noname_8);
 */
    
    void getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotRecvCount(int impl_noname_9);
 */
    
    void getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotTramHCount(int impl_noname_a);
 */
    
    void getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_HTram: public CProxy_IrrGroup{
  public:
    typedef HTram local_t;
    typedef CkIndex_HTram index_t;
    typedef CProxy_HTram proxy_t;
    typedef CProxyElement_HTram element_t;
    typedef CProxySection_HTram section_t;

    CProxy_HTram(void) {
    }
    CProxy_HTram(const IrrGroup *g) : CProxy_IrrGroup(g){
    }
    CProxy_HTram(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_IrrGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HTram(CkGroupID _gid) : CProxy_IrrGroup(_gid){  }
    CProxyElement_HTram operator[](int onPE) const
      {return CProxyElement_HTram(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    HTram* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTram* ckLocalBranch(CkGroupID gID) {
      return (HTram*)CkLocalBranch(gID);
    }
/* DECLS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
    
    static CkGroupID ckNew(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
    
    static CkGroupID ckNew(const CkGroupID &gid, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_HTram(const CkGroupID &gid, const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);
    
    void avgLatency(const CkCallback &cb, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void avgLatency(const CkCallback &cb, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tflush();
 */
    
    void tflush(const CkEntryOptions *impl_e_opts=NULL);
    
    void tflush(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void tflush(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: bool idleFlush();
 */

/* DECLS: void receivePerPE(HTramMessage* impl_msg);
 */
    
    void receivePerPE(HTramMessage* impl_msg);
    
    void receivePerPE(HTramMessage* impl_msg, int npes, int *pes);
    
    void receivePerPE(HTramMessage* impl_msg, CmiGroup &grp);

/* DECLS: void receiveOnPE(HTramMessage* impl_msg);
 */
    
    void receiveOnPE(HTramMessage* impl_msg);
    
    void receiveOnPE(HTramMessage* impl_msg, int npes, int *pes);
    
    void receiveOnPE(HTramMessage* impl_msg, CmiGroup &grp);

/* DECLS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
    
    void receivePerPE(HTramNodeMessage* impl_msg);
    
    void receivePerPE(HTramNodeMessage* impl_msg, int npes, int *pes);
    
    void receivePerPE(HTramNodeMessage* impl_msg, CmiGroup &grp);

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL);
    
    void stop_periodic_flush(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void stop_periodic_flush(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sanityCheck();
 */
    
    void sanityCheck(const CkEntryOptions *impl_e_opts=NULL);
    
    void sanityCheck(int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void sanityCheck(CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotSendCount(int impl_noname_8);
 */
    
    void getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotSendCount(int impl_noname_8, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotSendCount(int impl_noname_8, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotRecvCount(int impl_noname_9);
 */
    
    void getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotRecvCount(int impl_noname_9, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotRecvCount(int impl_noname_9, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotTramHCount(int impl_noname_a);
 */
    
    void getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotTramHCount(int impl_noname_a, int npes, int *pes, const CkEntryOptions *impl_e_opts=NULL);
    
    void getTotTramHCount(int impl_noname_a, CmiGroup &grp, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_HTram: public CProxySection_IrrGroup{
  public:
    typedef HTram local_t;
    typedef CkIndex_HTram index_t;
    typedef CProxy_HTram proxy_t;
    typedef CProxyElement_HTram element_t;
    typedef CProxySection_HTram section_t;

    CProxySection_HTram(void) {
    }
    CProxySection_HTram(const IrrGroup *g) : CProxySection_IrrGroup(g){
    }
    CProxySection_HTram(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HTram(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_HTram(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_HTram(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_IrrGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    HTram* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTram* ckLocalBranch(CkGroupID gID) {
      return (HTram*)CkLocalBranch(gID);
    }
/* DECLS: HTram(const CkGroupID &impl_noname_0, const CkGroupID &impl_noname_1, int impl_noname_2, const bool &impl_noname_3, double impl_noname_4, const bool &impl_noname_5, const bool &impl_noname_6, const CkCallback &impl_noname_7);
 */
    

/* DECLS: HTram(const CkGroupID &gid, const CkCallback &cb);
 */
    

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void tflush();
 */
    
    void tflush(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: bool idleFlush();
 */

/* DECLS: void receivePerPE(HTramMessage* impl_msg);
 */
    
    void receivePerPE(HTramMessage* impl_msg);

/* DECLS: void receiveOnPE(HTramMessage* impl_msg);
 */
    
    void receiveOnPE(HTramMessage* impl_msg);

/* DECLS: void receivePerPE(HTramNodeMessage* impl_msg);
 */
    
    void receivePerPE(HTramNodeMessage* impl_msg);

/* DECLS: void stop_periodic_flush();
 */
    
    void stop_periodic_flush(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void sanityCheck();
 */
    
    void sanityCheck(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotSendCount(int impl_noname_8);
 */
    
    void getTotSendCount(int impl_noname_8, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotRecvCount(int impl_noname_9);
 */
    
    void getTotRecvCount(int impl_noname_9, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getTotTramHCount(int impl_noname_a);
 */
    
    void getTotTramHCount(int impl_noname_a, const CkEntryOptions *impl_e_opts=NULL);

};
#define HTram_SDAG_CODE 
typedef CBaseT1<Group, CProxy_HTram>CBase_HTram;

/* DECLS: nodegroup HTramNodeGrp: NodeGroup{
HTramNodeGrp();
};
 */
 class HTramNodeGrp;
 class CkIndex_HTramNodeGrp;
 class CProxy_HTramNodeGrp;
 class CProxyElement_HTramNodeGrp;
 class CProxySection_HTramNodeGrp;
/* --------------- index object ------------------ */
class CkIndex_HTramNodeGrp:public CkIndex_NodeGroup{
  public:
    typedef HTramNodeGrp local_t;
    typedef CkIndex_HTramNodeGrp index_t;
    typedef CProxy_HTramNodeGrp proxy_t;
    typedef CProxyElement_HTramNodeGrp element_t;
    typedef CProxySection_HTramNodeGrp section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: HTramNodeGrp();
     */
    // Entry point registration at startup
    
    static int reg_HTramNodeGrp_void();
    // Entry point index lookup
    
    inline static int idx_HTramNodeGrp_void() {
      static int epidx = reg_HTramNodeGrp_void();
      return epidx;
    }

    
    static int ckNew() { return idx_HTramNodeGrp_void(); }
    
    static void _call_HTramNodeGrp_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HTramNodeGrp_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HTramNodeGrp: public CProxyElement_NodeGroup{
  public:
    typedef HTramNodeGrp local_t;
    typedef CkIndex_HTramNodeGrp index_t;
    typedef CProxy_HTramNodeGrp proxy_t;
    typedef CProxyElement_HTramNodeGrp element_t;
    typedef CProxySection_HTramNodeGrp section_t;


    /* TRAM aggregators */

    CProxyElement_HTramNodeGrp(void) {
    }
    CProxyElement_HTramNodeGrp(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_HTramNodeGrp(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_HTramNodeGrp(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
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
    HTramNodeGrp* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramNodeGrp* ckLocalBranch(CkGroupID gID) {
      return (HTramNodeGrp*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramNodeGrp();
 */
    

};
/* ---------------- collective proxy -------------- */
class CProxy_HTramNodeGrp: public CProxy_NodeGroup{
  public:
    typedef HTramNodeGrp local_t;
    typedef CkIndex_HTramNodeGrp index_t;
    typedef CProxy_HTramNodeGrp proxy_t;
    typedef CProxyElement_HTramNodeGrp element_t;
    typedef CProxySection_HTramNodeGrp section_t;

    CProxy_HTramNodeGrp(void) {
    }
    CProxy_HTramNodeGrp(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_HTramNodeGrp(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HTramNodeGrp(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_HTramNodeGrp operator[](int onPE) const
      {return CProxyElement_HTramNodeGrp(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    HTramNodeGrp* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramNodeGrp* ckLocalBranch(CkGroupID gID) {
      return (HTramNodeGrp*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramNodeGrp();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_HTramNodeGrp: public CProxySection_NodeGroup{
  public:
    typedef HTramNodeGrp local_t;
    typedef CkIndex_HTramNodeGrp index_t;
    typedef CProxy_HTramNodeGrp proxy_t;
    typedef CProxyElement_HTramNodeGrp element_t;
    typedef CProxySection_HTramNodeGrp section_t;

    CProxySection_HTramNodeGrp(void) {
    }
    CProxySection_HTramNodeGrp(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_HTramNodeGrp(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HTramNodeGrp(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_HTramNodeGrp(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_HTramNodeGrp(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    HTramNodeGrp* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramNodeGrp* ckLocalBranch(CkGroupID gID) {
      return (HTramNodeGrp*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramNodeGrp();
 */
    

};
#define HTramNodeGrp_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_HTramNodeGrp>CBase_HTramNodeGrp;

/* DECLS: nodegroup HTramRecv: NodeGroup{
HTramRecv();
void receive(HTramMessage* impl_msg);
void receive_no_sort(HTramMessage* impl_msg);
void receive_small(HTramLocalMessage* impl_msg);
void avgLatency(const CkCallback &cb);
};
 */
 class HTramRecv;
 class CkIndex_HTramRecv;
 class CProxy_HTramRecv;
 class CProxyElement_HTramRecv;
 class CProxySection_HTramRecv;
/* --------------- index object ------------------ */
class CkIndex_HTramRecv:public CkIndex_NodeGroup{
  public:
    typedef HTramRecv local_t;
    typedef CkIndex_HTramRecv index_t;
    typedef CProxy_HTramRecv proxy_t;
    typedef CProxyElement_HTramRecv element_t;
    typedef CProxySection_HTramRecv section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: HTramRecv();
     */
    // Entry point registration at startup
    
    static int reg_HTramRecv_void();
    // Entry point index lookup
    
    inline static int idx_HTramRecv_void() {
      static int epidx = reg_HTramRecv_void();
      return epidx;
    }

    
    static int ckNew() { return idx_HTramRecv_void(); }
    
    static void _call_HTramRecv_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_HTramRecv_void(void* impl_msg, void* impl_obj);
    /* DECLS: void receive(HTramMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receive_HTramMessage();
    // Entry point index lookup
    
    inline static int idx_receive_HTramMessage() {
      static int epidx = reg_receive_HTramMessage();
      return epidx;
    }

    
    inline static int idx_receive(void (HTramRecv::*)(HTramMessage* impl_msg) ) {
      return idx_receive_HTramMessage();
    }


    
    static int receive(HTramMessage* impl_msg) { return idx_receive_HTramMessage(); }
    
    static void _call_receive_HTramMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receive_HTramMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void receive_no_sort(HTramMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receive_no_sort_HTramMessage();
    // Entry point index lookup
    
    inline static int idx_receive_no_sort_HTramMessage() {
      static int epidx = reg_receive_no_sort_HTramMessage();
      return epidx;
    }

    
    inline static int idx_receive_no_sort(void (HTramRecv::*)(HTramMessage* impl_msg) ) {
      return idx_receive_no_sort_HTramMessage();
    }


    
    static int receive_no_sort(HTramMessage* impl_msg) { return idx_receive_no_sort_HTramMessage(); }
    
    static void _call_receive_no_sort_HTramMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receive_no_sort_HTramMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void receive_small(HTramLocalMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_receive_small_HTramLocalMessage();
    // Entry point index lookup
    
    inline static int idx_receive_small_HTramLocalMessage() {
      static int epidx = reg_receive_small_HTramLocalMessage();
      return epidx;
    }

    
    inline static int idx_receive_small(void (HTramRecv::*)(HTramLocalMessage* impl_msg) ) {
      return idx_receive_small_HTramLocalMessage();
    }


    
    static int receive_small(HTramLocalMessage* impl_msg) { return idx_receive_small_HTramLocalMessage(); }
    
    static void _call_receive_small_HTramLocalMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_receive_small_HTramLocalMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void avgLatency(const CkCallback &cb);
     */
    // Entry point registration at startup
    
    static int reg_avgLatency_marshall5();
    // Entry point index lookup
    
    inline static int idx_avgLatency_marshall5() {
      static int epidx = reg_avgLatency_marshall5();
      return epidx;
    }

    
    inline static int idx_avgLatency(void (HTramRecv::*)(const CkCallback &cb) ) {
      return idx_avgLatency_marshall5();
    }


    
    static int avgLatency(const CkCallback &cb) { return idx_avgLatency_marshall5(); }
    
    static void _call_avgLatency_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_avgLatency_marshall5(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_avgLatency_marshall5(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_avgLatency_marshall5(PUP::er &p,void *msg);
};
/* --------------- element proxy ------------------ */
class CProxyElement_HTramRecv: public CProxyElement_NodeGroup{
  public:
    typedef HTramRecv local_t;
    typedef CkIndex_HTramRecv index_t;
    typedef CProxy_HTramRecv proxy_t;
    typedef CProxyElement_HTramRecv element_t;
    typedef CProxySection_HTramRecv section_t;


    /* TRAM aggregators */

    CProxyElement_HTramRecv(void) {
    }
    CProxyElement_HTramRecv(const IrrGroup *g) : CProxyElement_NodeGroup(g){
    }
    CProxyElement_HTramRecv(CkGroupID _gid,int _onPE,CK_DELCTOR_PARAM) : CProxyElement_NodeGroup(_gid,_onPE,CK_DELCTOR_ARGS){
    }
    CProxyElement_HTramRecv(CkGroupID _gid,int _onPE) : CProxyElement_NodeGroup(_gid,_onPE){
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
    HTramRecv* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramRecv* ckLocalBranch(CkGroupID gID) {
      return (HTramRecv*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramRecv();
 */
    

/* DECLS: void receive(HTramMessage* impl_msg);
 */
    
    void receive(HTramMessage* impl_msg);

/* DECLS: void receive_no_sort(HTramMessage* impl_msg);
 */
    
    void receive_no_sort(HTramMessage* impl_msg);

/* DECLS: void receive_small(HTramLocalMessage* impl_msg);
 */
    
    void receive_small(HTramLocalMessage* impl_msg);

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- collective proxy -------------- */
class CProxy_HTramRecv: public CProxy_NodeGroup{
  public:
    typedef HTramRecv local_t;
    typedef CkIndex_HTramRecv index_t;
    typedef CProxy_HTramRecv proxy_t;
    typedef CProxyElement_HTramRecv element_t;
    typedef CProxySection_HTramRecv section_t;

    CProxy_HTramRecv(void) {
    }
    CProxy_HTramRecv(const IrrGroup *g) : CProxy_NodeGroup(g){
    }
    CProxy_HTramRecv(CkGroupID _gid,CK_DELCTOR_PARAM) : CProxy_NodeGroup(_gid,CK_DELCTOR_ARGS){  }
    CProxy_HTramRecv(CkGroupID _gid) : CProxy_NodeGroup(_gid){  }
    CProxyElement_HTramRecv operator[](int onPE) const
      {return CProxyElement_HTramRecv(ckGetGroupID(),onPE,CK_DELCTOR_CALL);}

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
    HTramRecv* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramRecv* ckLocalBranch(CkGroupID gID) {
      return (HTramRecv*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramRecv();
 */
    
    static CkGroupID ckNew(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void receive(HTramMessage* impl_msg);
 */
    
    void receive(HTramMessage* impl_msg);

/* DECLS: void receive_no_sort(HTramMessage* impl_msg);
 */
    
    void receive_no_sort(HTramMessage* impl_msg);

/* DECLS: void receive_small(HTramLocalMessage* impl_msg);
 */
    
    void receive_small(HTramLocalMessage* impl_msg);

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

};
/* ---------------- section proxy -------------- */
class CProxySection_HTramRecv: public CProxySection_NodeGroup{
  public:
    typedef HTramRecv local_t;
    typedef CkIndex_HTramRecv index_t;
    typedef CProxy_HTramRecv proxy_t;
    typedef CProxyElement_HTramRecv element_t;
    typedef CProxySection_HTramRecv section_t;

    CProxySection_HTramRecv(void) {
    }
    CProxySection_HTramRecv(const IrrGroup *g) : CProxySection_NodeGroup(g){
    }
    CProxySection_HTramRecv(const CkGroupID &_gid,const int *_pelist,int _npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }
    CProxySection_HTramRecv(const CkGroupID &_gid,const int *_pelist,int _npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(_gid,_pelist,_npes,factor){  }
    CProxySection_HTramRecv(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, int factor = USE_DEFAULT_BRANCH_FACTOR) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,factor){  }
    CProxySection_HTramRecv(int n,const CkGroupID *_gid, int const * const *_pelist,const int *_npes, CK_DELCTOR_PARAM) : CProxySection_NodeGroup(n,_gid,_pelist,_npes,CK_DELCTOR_ARGS){  }

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
    HTramRecv* ckLocalBranch(void) const {
      return ckLocalBranch(ckGetGroupID());
    }
    static HTramRecv* ckLocalBranch(CkGroupID gID) {
      return (HTramRecv*)CkLocalNodeBranch(gID);
    }
/* DECLS: HTramRecv();
 */
    

/* DECLS: void receive(HTramMessage* impl_msg);
 */
    
    void receive(HTramMessage* impl_msg);

/* DECLS: void receive_no_sort(HTramMessage* impl_msg);
 */
    
    void receive_no_sort(HTramMessage* impl_msg);

/* DECLS: void receive_small(HTramLocalMessage* impl_msg);
 */
    
    void receive_small(HTramLocalMessage* impl_msg);

/* DECLS: void avgLatency(const CkCallback &cb);
 */
    
    void avgLatency(const CkCallback &cb, const CkEntryOptions *impl_e_opts=NULL);

};
#define HTramRecv_SDAG_CODE 
typedef CBaseT1<NodeGroup, CProxy_HTramRecv>CBase_HTramRecv;





/* ---------------- method closures -------------- */
class Closure_HTram {
  public:



    struct avgLatency_3_closure;


    struct tflush_4_closure;






    struct stop_periodic_flush_9_closure;


    struct sanityCheck_10_closure;


    struct getTotSendCount_11_closure;


    struct getTotRecvCount_12_closure;


    struct getTotTramHCount_13_closure;

};

/* ---------------- method closures -------------- */
class Closure_HTramNodeGrp {
  public:

};

/* ---------------- method closures -------------- */
class Closure_HTramRecv {
  public:





    struct avgLatency_5_closure;

};

extern void _registerhtram_group(void);
#endif
