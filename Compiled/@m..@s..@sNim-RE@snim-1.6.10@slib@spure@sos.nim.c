/* Generated by Nim Compiler v1.6.10 */
#define NIM_INTBITS 32

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op);
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
N_LIB_PRIVATE tySequence__sM4lkSb7zS6F7OVMvW9cffQ* ownArgv__pureZos_1602;
N_LIB_PRIVATE NIM_BOOL ownParsedArgv__pureZos_1603;
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a;
	NI T1_;
	a = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void) {
	nimGCvisit((void*)ownArgv__pureZos_1602, 0);
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimminusREatsnimminus1dot6dot10atslibatspureatsosdotnim_Init000)(void) {
{
	TFrame FR_; FR_.len = 0;

	nimRegisterThreadLocalMarker(TM__yu6cxgKBBXbNsTkT9cyMd4g_2);

}/* preInitProc end */
{
}
}

N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimminusREatsnimminus1dot6dot10atslibatspureatsosdotnim_DatInit000)(void) {
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.size = sizeof(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.align = NIM_ALIGNOF(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.kind = 24;
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.base = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.marker = Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
}
