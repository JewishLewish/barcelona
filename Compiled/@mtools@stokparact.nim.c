/* Generated by Nim Compiler v1.6.10 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tyTuple__dboTR59aT9c9bUgchMaoxtB9bg tyTuple__dboTR59aT9c9bUgchMaoxtB9bg;
typedef struct tySequence__gnF6htrEU3VdsCZBgj9c9bSw tySequence__gnF6htrEU3VdsCZBgj9c9bSw;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__9bqdOjrj0ApToMEQZXAj3SQ tyTuple__9bqdOjrj0ApToMEQZXAj3SQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__a7oh6mBBTGRJTZN0JmA82Q tySequence__a7oh6mBBTGRJTZN0JmA82Q;
typedef struct tyTuple__pVYFlKaie8wqU3x3JGPthg tyTuple__pVYFlKaie8wqU3x3JGPthg;
typedef struct tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU8 tyEnum_TokenKind__4d5vOmx35i20DLXtrILcpw;
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__9bqdOjrj0ApToMEQZXAj3SQ {
tyEnum_TokenKind__4d5vOmx35i20DLXtrILcpw Field0;
NimStringDesc* Field1;
NI Field2;
NI Field3;
NI Field4;
NI Field5;
};
struct tyTuple__dboTR59aT9c9bUgchMaoxtB9bg {
NI Field0;
NI Field1;
tySequence__gnF6htrEU3VdsCZBgj9c9bSw* Field2;
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
struct tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag {
tySequence__a7oh6mBBTGRJTZN0JmA82Q* data;
NI counter;
};
struct tyTuple__pVYFlKaie8wqU3x3JGPthg {
tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag Field0;
NI Field1;
};
struct tySequence__gnF6htrEU3VdsCZBgj9c9bSw {
  TGenericSeq Sup;
  tyTuple__9bqdOjrj0ApToMEQZXAj3SQ data[SEQ_DECL_SIZE];
};
struct tySequence__a7oh6mBBTGRJTZN0JmA82Q {
  TGenericSeq Sup;
  tyTuple__dboTR59aT9c9bUgchMaoxtB9bg data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__a7oh6mBBTGRJTZN0JmA82Q)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tySequence__gnF6htrEU3VdsCZBgj9c9bSw*, newSeq__toolsZtokparact_13)(NI len);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initTable__toolsZtokparact_37)(NI initialSize, tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag* Result);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___toolsZtokparact_128)(tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag* t, NI key, tySequence__gnF6htrEU3VdsCZBgj9c9bSw* val);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE TNimType NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_;
extern TNimType NTIint__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTIseqLtokentupleT__gnF6htrEU3VdsCZBgj9c9bSw_;
N_LIB_PRIVATE TNimType NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_;
extern TNimType NTItokentuple__9bqdOjrj0ApToMEQZXAj3SQ_;
STRING_LITERAL(TM__g5ivRurgVLxSVhPXj1KaPg_8, "iterators.nim(240, 11) `len(a) == L` the length of the seq changed while iterating over it", 90);
static N_NIMCALL(void, Marker_tySequence__a7oh6mBBTGRJTZN0JmA82Q)(void* p, NI op) {
	tySequence__a7oh6mBBTGRJTZN0JmA82Q* a;
	NI T1_;
	a = (tySequence__a7oh6mBBTGRJTZN0JmA82Q*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field2, op);
	}
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__systemZmemory_7(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, actiontree2__toolsZtokparact_3)(tySequence__gnF6htrEU3VdsCZBgj9c9bSw** n, tyTuple__pVYFlKaie8wqU3x3JGPthg* Result) {
	tySequence__gnF6htrEU3VdsCZBgj9c9bSw* collect;
	NI c;
	NI i;
	tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag body;
	tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag colontmp_;
	NI colontmp__2;
{	collect = newSeq__toolsZtokparact_13(((NI) 0));
	c = ((NI) 0);
	i = ((NI) 0);
	nimZeroMem((void*)(&body), sizeof(tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag));
	initTable__toolsZtokparact_37(((NI) 32), (&body));
	{
		tyTuple__9bqdOjrj0ApToMEQZXAj3SQ* x;
		NI i_2;
		NI L;
		NI T2_;
		x = (tyTuple__9bqdOjrj0ApToMEQZXAj3SQ*)0;
		i_2 = ((NI) 0);
		T2_ = ((*n) ? (*n)->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				NI TM__g5ivRurgVLxSVhPXj1KaPg_7;
				if (!(i_2 < L)) goto LA4;
				if (i_2 < 0 || i_2 >= ((*n) ? (*n)->Sup.len : 0)){ raiseIndexError2(i_2,((*n) ? (*n)->Sup.len : 0)-1); }
				x = (&(*n)->data[i_2]);
				{
					NI T6_;
					collect = (tySequence__gnF6htrEU3VdsCZBgj9c9bSw*) incrSeqV3((TGenericSeq*)(collect), (&NTIseqLtokentupleT__gnF6htrEU3VdsCZBgj9c9bSw_));
					T6_ = collect->Sup.len++;
					genericAssign((void*)(&collect->data[T6_]), (void*)(&(*x)), (&NTItokentuple__9bqdOjrj0ApToMEQZXAj3SQ_));
					{
						if (!((*x).Field0 == ((tyEnum_TokenKind__4d5vOmx35i20DLXtrILcpw) 16))) goto LA9_;
						{
							NI TM__g5ivRurgVLxSVhPXj1KaPg_3;
							if (!(c == ((NI) 0))) goto LA13_;
							X5BX5Deq___toolsZtokparact_128((&body), i, collect);
							collect = newSeq__toolsZtokparact_13(((NI) 0));
							if (nimAddInt(i, ((NI) 1), &TM__g5ivRurgVLxSVhPXj1KaPg_3)) { raiseOverflow(); };
							i = (NI)(TM__g5ivRurgVLxSVhPXj1KaPg_3);
						}
						goto LA11_;
						LA13_: ;
						{
							goto LA5;
						}
						LA11_: ;
					}
					LA9_: ;
					{
						NI TM__g5ivRurgVLxSVhPXj1KaPg_4;
						if (!((*x).Field0 == ((tyEnum_TokenKind__4d5vOmx35i20DLXtrILcpw) 14))) goto LA18_;
						if (nimAddInt(c, ((NI) 1), &TM__g5ivRurgVLxSVhPXj1KaPg_4)) { raiseOverflow(); };
						c = (NI)(TM__g5ivRurgVLxSVhPXj1KaPg_4);
					}
					goto LA16_;
					LA18_: ;
					{
						NI TM__g5ivRurgVLxSVhPXj1KaPg_5;
						if (!((*x).Field0 == ((tyEnum_TokenKind__4d5vOmx35i20DLXtrILcpw) 15))) goto LA21_;
						if (nimSubInt(c, ((NI) 1), &TM__g5ivRurgVLxSVhPXj1KaPg_5)) { raiseOverflow(); };
						c = (NI)(TM__g5ivRurgVLxSVhPXj1KaPg_5);
						{
							NI TM__g5ivRurgVLxSVhPXj1KaPg_6;
							if (!(c == ((NI) 0))) goto LA25_;
							X5BX5Deq___toolsZtokparact_128((&body), i, collect);
							collect = newSeq__toolsZtokparact_13(((NI) 0));
							if (nimAddInt(i, ((NI) 1), &TM__g5ivRurgVLxSVhPXj1KaPg_6)) { raiseOverflow(); };
							i = (NI)(TM__g5ivRurgVLxSVhPXj1KaPg_6);
						}
						LA25_: ;
					}
					goto LA16_;
					LA21_: ;
					LA16_: ;
				} LA5: ;
				if (nimAddInt(i_2, ((NI) 1), &TM__g5ivRurgVLxSVhPXj1KaPg_7)) { raiseOverflow(); };
				i_2 = (NI)(TM__g5ivRurgVLxSVhPXj1KaPg_7);
				{
					NI T29_;
					T29_ = ((*n) ? (*n)->Sup.len : 0);
					if (!!((T29_ == L))) goto LA30_;
					failedAssertImpl__systemZassertions_56(((NimStringDesc*) &TM__g5ivRurgVLxSVhPXj1KaPg_8));
				}
				LA30_: ;
			} LA4: ;
		}
	}
	nimZeroMem((void*)(&colontmp_), sizeof(tyObject_Table__CJ69crqPf0LM1c9cZoWI44ag));
	genericSeqAssign((&colontmp_.data), body.data, (&NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_));
	colontmp_.counter = body.counter;
	colontmp__2 = i;
	genericSeqAssign((&(*Result).Field0.data), colontmp_.data, (&NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_));
	(*Result).Field0.counter = colontmp_.counter;
	(*Result).Field1 = colontmp__2;
	goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, atmtoolsatstokparactdotnim_DatInit000)(void) {
static TNimNode* TM__g5ivRurgVLxSVhPXj1KaPg_2_3[3];
static TNimNode TM__g5ivRurgVLxSVhPXj1KaPg_0[4];
NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_.size = sizeof(tyTuple__dboTR59aT9c9bUgchMaoxtB9bg);
NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_.align = NIM_ALIGNOF(tyTuple__dboTR59aT9c9bUgchMaoxtB9bg);
NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_.kind = 18;
NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_.base = 0;
TM__g5ivRurgVLxSVhPXj1KaPg_2_3[0] = &TM__g5ivRurgVLxSVhPXj1KaPg_0[1];
TM__g5ivRurgVLxSVhPXj1KaPg_0[1].kind = 1;
TM__g5ivRurgVLxSVhPXj1KaPg_0[1].offset = offsetof(tyTuple__dboTR59aT9c9bUgchMaoxtB9bg, Field0);
TM__g5ivRurgVLxSVhPXj1KaPg_0[1].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__g5ivRurgVLxSVhPXj1KaPg_0[1].name = "Field0";
TM__g5ivRurgVLxSVhPXj1KaPg_2_3[1] = &TM__g5ivRurgVLxSVhPXj1KaPg_0[2];
TM__g5ivRurgVLxSVhPXj1KaPg_0[2].kind = 1;
TM__g5ivRurgVLxSVhPXj1KaPg_0[2].offset = offsetof(tyTuple__dboTR59aT9c9bUgchMaoxtB9bg, Field1);
TM__g5ivRurgVLxSVhPXj1KaPg_0[2].typ = (&NTIint__rR5Bzr1D5krxoo1NcNyeMA_);
TM__g5ivRurgVLxSVhPXj1KaPg_0[2].name = "Field1";
TM__g5ivRurgVLxSVhPXj1KaPg_2_3[2] = &TM__g5ivRurgVLxSVhPXj1KaPg_0[3];
TM__g5ivRurgVLxSVhPXj1KaPg_0[3].kind = 1;
TM__g5ivRurgVLxSVhPXj1KaPg_0[3].offset = offsetof(tyTuple__dboTR59aT9c9bUgchMaoxtB9bg, Field2);
TM__g5ivRurgVLxSVhPXj1KaPg_0[3].typ = (&NTIseqLtokentupleT__gnF6htrEU3VdsCZBgj9c9bSw_);
TM__g5ivRurgVLxSVhPXj1KaPg_0[3].name = "Field2";
TM__g5ivRurgVLxSVhPXj1KaPg_0[0].len = 3; TM__g5ivRurgVLxSVhPXj1KaPg_0[0].kind = 2; TM__g5ivRurgVLxSVhPXj1KaPg_0[0].sons = &TM__g5ivRurgVLxSVhPXj1KaPg_2_3[0];
NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_.node = &TM__g5ivRurgVLxSVhPXj1KaPg_0[0];
NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_.size = sizeof(tySequence__a7oh6mBBTGRJTZN0JmA82Q*);
NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_.align = NIM_ALIGNOF(tySequence__a7oh6mBBTGRJTZN0JmA82Q*);
NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_.kind = 24;
NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_.base = (&NTIkeyvaluepair__dboTR59aT9c9bUgchMaoxtB9bg_);
NTIkeyvaluepairseq__a7oh6mBBTGRJTZN0JmA82Q_.marker = Marker_tySequence__a7oh6mBBTGRJTZN0JmA82Q;
}
