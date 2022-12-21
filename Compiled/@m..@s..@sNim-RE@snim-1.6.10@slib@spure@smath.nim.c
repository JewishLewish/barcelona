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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NI tyArray__vslrOoLvnekviVT9ccwSQbg[13];
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__systemZassertions_56)(NimStringDesc* msg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___systemZdollars_3)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NI, binom__pureZmath_27)(NI n, NI k);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
STRING_LITERAL(TM__YqBQIdfvZX5pt75kDBsDLg_2, "math.nim(119, 9) `n >= 0` ", 26);
STRING_LITERAL(TM__YqBQIdfvZX5pt75kDBsDLg_3, " must not be negative.", 22);
STRING_LITERAL(TM__YqBQIdfvZX5pt75kDBsDLg_4, "math.nim(120, 9) `n < factTable.len` ", 37);
STRING_LITERAL(TM__YqBQIdfvZX5pt75kDBsDLg_5, " is too large to look up in the table", 37);
N_LIB_PRIVATE NIM_CONST tyArray__vslrOoLvnekviVT9ccwSQbg factTable__pureZmath_68 = {((NI) 1),
((NI) 1),
((NI) 2),
((NI) 6),
((NI) 24),
((NI) 120),
((NI) 720),
((NI) 5040),
((NI) 40320),
((NI) 362880),
((NI) 3628800),
((NI) 39916800),
((NI) 479001600)}
;
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_175)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 16))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 8))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 4))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 2))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NF, sum__OOZOOZOOZOOZOnimbleZpkgsZmathexpr4549O51O50Zmathexpr_857)(NF* x, NI xLen_0) {
	NF result;
	result = (NF)0;
	{
		NF* i;
		NI i_2;
		i = (NF*)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < xLen_0)) goto LA3;
				i = (&x[i_2]);
				result = ((NF)(result) + (NF)((*i)));
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem__system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, fac__pureZmath_41)(NI n) {
	NI result;
	result = (NI)0;
	{
		NimStringDesc* T5_;
		NimStringDesc* T6_;
		if (!!((((NI) 0) <= n))) goto LA3_;
		T5_ = NIM_NIL;
		T6_ = NIM_NIL;
		T6_ = dollar___systemZdollars_3(n);
		T5_ = rawNewString((T6_ ? T6_->Sup.len : 0) + 48);
appendString(T5_, ((NimStringDesc*) &TM__YqBQIdfvZX5pt75kDBsDLg_2));
appendString(T5_, T6_);
appendString(T5_, ((NimStringDesc*) &TM__YqBQIdfvZX5pt75kDBsDLg_3));
		failedAssertImpl__systemZassertions_56(T5_);
	}
	LA3_: ;
	{
		NimStringDesc* T11_;
		NimStringDesc* T12_;
		if (!!((n < ((NI) 13)))) goto LA9_;
		T11_ = NIM_NIL;
		T12_ = NIM_NIL;
		T12_ = dollar___systemZdollars_3(n);
		T11_ = rawNewString((T12_ ? T12_->Sup.len : 0) + 74);
appendString(T11_, ((NimStringDesc*) &TM__YqBQIdfvZX5pt75kDBsDLg_4));
appendString(T11_, T12_);
appendString(T11_, ((NimStringDesc*) &TM__YqBQIdfvZX5pt75kDBsDLg_5));
		failedAssertImpl__systemZassertions_56(T11_);
	}
	LA9_: ;
	if ((NU)(n) > (NU)(12)){ raiseIndexError2(n, 12); }
	result = factTable__pureZmath_68[(n)- 0];
	return result;
}
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == ((NI) (-2147483647 -1)));
		if (!(T3_)) goto LA4_;
		T3_ = (b == ((NI) -1));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA5_: ;
	{
		(*res) = (NI)(a / b);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, binom__pureZmath_27)(NI n, NI k) {
	NI result;
{	result = (NI)0;
	{
		if (!(k <= ((NI) 0))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI TM__YqBQIdfvZX5pt75kDBsDLg_6;
		NI TM__YqBQIdfvZX5pt75kDBsDLg_7;
		if (nimMulInt(((NI) 2), k, &TM__YqBQIdfvZX5pt75kDBsDLg_6)) { raiseOverflow(); };
		if (!(n < (NI)(TM__YqBQIdfvZX5pt75kDBsDLg_6))) goto LA7_;
		if (nimSubInt(n, k, &TM__YqBQIdfvZX5pt75kDBsDLg_7)) { raiseOverflow(); };
		result = binom__pureZmath_27(n, (NI)(TM__YqBQIdfvZX5pt75kDBsDLg_7));
		goto BeforeRet_;
	}
	LA7_: ;
	result = n;
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 2);
		{
			while (1) {
				NI TM__YqBQIdfvZX5pt75kDBsDLg_8;
				NI TM__YqBQIdfvZX5pt75kDBsDLg_9;
				NI TM__YqBQIdfvZX5pt75kDBsDLg_10;
				NI TM__YqBQIdfvZX5pt75kDBsDLg_11;
				NI TM__YqBQIdfvZX5pt75kDBsDLg_12;
				if (!(res <= k)) goto LA11;
				i = res;
				if (nimAddInt(n, ((NI) 1), &TM__YqBQIdfvZX5pt75kDBsDLg_8)) { raiseOverflow(); };
				if (nimSubInt((NI)(TM__YqBQIdfvZX5pt75kDBsDLg_8), i, &TM__YqBQIdfvZX5pt75kDBsDLg_9)) { raiseOverflow(); };
				if (nimMulInt(result, (NI)(TM__YqBQIdfvZX5pt75kDBsDLg_9), &TM__YqBQIdfvZX5pt75kDBsDLg_10)) { raiseOverflow(); };
				if (i == 0){ raiseDivByZero(); }
				if (nimDivInt((NI)(TM__YqBQIdfvZX5pt75kDBsDLg_10), i, &TM__YqBQIdfvZX5pt75kDBsDLg_11)) { raiseOverflow(); };
				result = (NI)(TM__YqBQIdfvZX5pt75kDBsDLg_11);
				if (nimAddInt(res, ((NI) 1), &TM__YqBQIdfvZX5pt75kDBsDLg_12)) { raiseOverflow(); };
				res = (NI)(TM__YqBQIdfvZX5pt75kDBsDLg_12);
			} LA11: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
