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
typedef struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg tyObject_GUID__J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NI8 tyArray__9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray__9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc__5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__pureZdynlib_3)(NimStringDesc* path, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__pureZdynlib_30)(void* lib, NCSTRING name);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_2, "Ws2_32.dll", 10);
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX__windowsZwinlean_712 = {((NI32) 631375801), ((NI16) -8717), ((NI16) 18016), {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX__windowsZwinlean_713 = {((NI32) -1254720015), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS__windowsZwinlean_714 = {((NI32) -1254720014), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyProc__5ctyytqoGFQ0BA1imFGbVw inet_ntop_real__windowsZwinlean_803 = NIM_NIL;
N_LIB_PRIVATE void* ws2__windowsZwinlean_804;
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatsdotdotatsNimminusREatsnimminus1dot6dot10atslibatswindowsatswinleandotnim_Init000)(void) {
{
	ws2__windowsZwinlean_804 = loadLib__pureZdynlib_3(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2), NIM_FALSE);
	{
		void* T5_;
		if (!!((ws2__windowsZwinlean_804 == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = symAddr__pureZdynlib_30(ws2__windowsZwinlean_804, "inet_ntop");
		inet_ntop_real__windowsZwinlean_803 = ((tyProc__5ctyytqoGFQ0BA1imFGbVw) (T5_));
	}
	LA3_: ;
}
}

