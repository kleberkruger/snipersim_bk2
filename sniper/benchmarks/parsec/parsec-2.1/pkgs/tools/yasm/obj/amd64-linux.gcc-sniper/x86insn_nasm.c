/* ANSI-C code produced by genperf */
/* Command-line: genperf /workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf x86insn_nasm.c */
#line 9 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
struct insnprefix_parse_data;
static const struct insnprefix_parse_data *
insnprefix_nasm_find(const char *key, size_t len)
{
  static const struct insnprefix_parse_data pd[1434] = {
#line 176 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1301 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilps",	vpermil_insn,	4,	NONE,	0x04,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 616 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomeqq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1047 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgt_oqps",	ssecmp_128_insn,	3,	NONE,	0x1E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 100 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpltpd",	ssecmp_128_insn,	3,	NONE,	0x01,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 543 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsx",	movszx_insn,	5,	NONE,	0xBE,	0,	0,	0,	CPU_386,	0,	0},
#line 821 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"protw",	sse5prot_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1214 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vminss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 336 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldl2e",	twobyte_insn,	1,	NONE,	0xD9,	0xEA,	0,	0,	CPU_FPU,	0,	0},
#line 1218 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovapd",	movau_insn,	6,	NONE,	0x66,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1187 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmaddps",	fma_128_256_insn,	4,	NONE,	0x78,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1266 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 179 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 895 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ror",	shift_insn,	16,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 729 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phadduwq",	sse5two_insn,	1,	NONE,	0x57,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 672 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneqw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 880 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rcr",	shift_insn,	16,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 158 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 893 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"retn",	retnf_insn,	6,	NONE,	0xC2,	0,	0,	0,	0,	0,	0},
#line 201 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 370 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fptan",	twobyte_insn,	1,	NONE,	0xD9,	0xF2,	0,	0,	CPU_FPU,	0,	0},
#line 977 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"subsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 537 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsd",	movsd_insn,	5,	NONE,	0,	0,	0,	0,	CPU_386,	0,	0},
#line 1173 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vextractps",	extractps_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1109 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnless",	ssecmp_32_insn,	4,	NONE,	0x06,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1361 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsignw",	ssse3_insn,	3,	NONE,	0x09,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 903 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsqrtps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 610 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpistri",	sse4pcmpstr_insn,	1,	NONE,	0x63,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 642 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1323 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 157 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1401 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsqrtps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 688 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomud",	sse5com_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 25 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addsubps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 982 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"swapgs",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xF8,	ONLY_64,	0,	0,	0},
#line 1374 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1025 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_usss",	ssecmp_32_insn,	4,	NONE,	0x18,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 257 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtps2pd",	xmm_xmm64_insn,	4,	NONE,	0x00,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 745 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pinsrw",	pinsrw_insn,	9,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 741 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pi2fw",	now3d_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 875 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushfw",	onebyte_insn,	1,	NONE,	0x9C,	0x10,	0x40,	0,	0,	0,	0},
#line 1045 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgess",	ssecmp_32_insn,	4,	NONE,	0x0D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 684 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 877 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rcl",	shift_insn,	16,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 969 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stosb",	onebyte_insn,	1,	NONE,	0xAA,	0x00,	0,	0,	0,	0,	0},
#line 1105 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnle_uqss",	ssecmp_32_insn,	4,	NONE,	0x16,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1249 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmsave",	svm_rax_insn,	2,	NONE,	0xDB,	0,	0,	0,	CPU_SVM,	0,	0},
#line 678 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomq",	sse5com_insn,	1,	NONE,	0x4F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1156 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtsi2sd",	cvt_xmm_rmx_insn,	6,	NONE,	0xF2,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 951 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shufpd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0xC6,	0,	0,	CPU_SSE2,	0,	0},
#line 1086 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnge_uqpd",	ssecmp_128_insn,	3,	NONE,	0x19,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 250 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtpd2dq",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 1155 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtsd2ss",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 914 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"scasw",	onebyte_insn,	1,	NONE,	0xAF,	0x10,	0,	0,	0,	0,	0},
#line 1370 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsrlq",	vpshift_insn,	4,	NONE,	0xD3,	0x73,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 373 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frczsd",	sse5two64_insn,	2,	NONE,	0x13,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 842 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psllw",	pshift_insn,	4,	NONE,	0xF1,	0x71,	0x06,	0,	CPU_MMX,	0,	0},
#line 1398 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vshufpd",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x66,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 383 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fst",	fst_insn,	3,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 369 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fprem1",	twobyte_insn,	1,	NONE,	0xD9,	0xF5,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 930 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setne",	setcc_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 1429 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xcryptcfb",	padlock_insn,	1,	NONE,	0xE0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1332 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminuw",	ssse3_insn,	3,	NONE,	0x3A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 975 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"subpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5C,	0,	0,	CPU_SSE2,	0,	0},
#line 36 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"andps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x54,	0,	0,	CPU_SSE,	0,	0},
#line 1395 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vroundss",	sse4m32imm_insn,	4,	NONE,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 488 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loop",	loop_insn,	8,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 857 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubw",	mmxsse2_insn,	2,	NONE,	0xF9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1421 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"wait",	onebyte_insn,	1,	NONE,	0x9B,	0,	0,	0,	0,	0,	0},
#line 553 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mulss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 561 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"or",	arith_insn,	22,	NONE,	0x08,	0x01,	0,	0,	0,	0,	0},
#line 972 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stosw",	onebyte_insn,	1,	NONE,	0xAB,	0x10,	0,	0,	0,	0,	0},
#line 1024 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_ussd",	ssecmp_64_insn,	4,	NONE,	0x18,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 484 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lodsb",	onebyte_insn,	1,	NONE,	0xAC,	0x00,	0,	0,	0,	0,	0},
#line 848 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psrlw",	pshift_insn,	4,	NONE,	0xD1,	0x71,	0x02,	0,	CPU_MMX,	0,	0},
#line 28 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aesenc",	aes_insn,	1,	NONE,	0x38,	0xDC,	0,	0,	CPU_AES,	0,	0},
#line 547 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movzx",	movszx_insn,	5,	NONE,	0xB6,	0,	0,	0,	CPU_386,	0,	0},
#line 1269 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddsb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1304 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpextrb",	pextrb_insn,	3,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 248 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtdq2pd",	xmm_xmm64_insn,	4,	NONE,	0xF3,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 747 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacsdd",	sse5pmacs_insn,	1,	NONE,	0x9E,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 879 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rcpss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 81 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovno",	cmovcc_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_686,	0,	0},
#line 686 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtruew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 600 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpeqb",	mmxsse2_insn,	2,	NONE,	0x74,	0,	0,	0,	CPU_MMX,	0,	0},
#line 286 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"extractps",	extractps_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 308 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcompp",	twobyte_insn,	1,	NONE,	0xDE,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 802 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popa",	onebyte_insn,	1,	NONE,	0x61,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 161 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 323 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fild",	fildstp_insn,	3,	NONE,	0x00,	0x02,	0x05,	0,	CPU_FPU,	0,	0},
#line 760 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaddwd",	mmxsse2_insn,	2,	NONE,	0xF5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 156 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1200 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vlddqu",	lddqu_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 680 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrued",	sse5comcc_insn,	1,	NONE,	0x4E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1082 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneqpd",	ssecmp_128_insn,	3,	NONE,	0x04,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 591 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pavgw",	mmxsse2_insn,	2,	NONE,	0xE3,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 554 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mwait",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC9,	0,	CPU_SSE3,	0,	0},
#line 818 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"protb",	sse5prot_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 904 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x52,	0,	0,	CPU_SSE,	0,	0},
#line 1190 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmsubpd",	fma_128_256_insn,	4,	NONE,	0x7D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 887 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"repe",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 27 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aesdeclast",	aes_insn,	1,	NONE,	0x38,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 1366 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsrad",	vpshift_insn,	4,	NONE,	0xE2,	0x72,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1240 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovss",	movss_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 62 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovae",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1343 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxdq",	sse4m64_insn,	2,	NONE,	0x35,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 164 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comneqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1013 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vbroadcastss",	vbroadcastss_insn,	2,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 604 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpestri",	sse4pcmpstr_insn,	1,	NONE,	0x61,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 606 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpgtb",	mmxsse2_insn,	2,	NONE,	0x64,	0,	0,	0,	CPU_MMX,	0,	0},
#line 289 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fabs",	twobyte_insn,	1,	NONE,	0xD9,	0xE1,	0,	0,	CPU_FPU,	0,	0},
#line 989 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ucomiss",	xmm_xmm32_insn,	4,	NONE,	0x00,	0x2E,	0,	0,	CPU_SSE,	0,	0},
#line 241 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunordpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 85 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovo",	cmovcc_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_686,	0,	0},
#line 192 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comss",	sse5com32_insn,	2,	NONE,	0x2E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1095 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngt_uqps",	ssecmp_128_insn,	3,	NONE,	0x1A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 450 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jne",	jcc_insn,	9,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 482 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loadall286",	twobyte_insn,	1,	NONE,	0x0F,	0x05,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 44 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bsr",	bsfr_insn,	3,	NONE,	0xBD,	0,	0,	0,	CPU_386,	0,	0},
#line 215 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comultsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 734 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubbw",	sse5two_insn,	1,	NONE,	0x61,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 961 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sqrtps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 944 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setz",	setcc_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 206 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1176 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddsd",	fma_128_m64_insn,	3,	NONE,	0x6B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 288 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"f2xm1",	twobyte_insn,	1,	NONE,	0xD9,	0xF0,	0,	0,	CPU_FPU,	0,	0},
#line 367 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fpatan",	twobyte_insn,	1,	NONE,	0xD9,	0xF3,	0,	0,	CPU_FPU,	0,	0},
#line 652 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 923 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setl",	setcc_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 92 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpeqpd",	ssecmp_128_insn,	3,	NONE,	0x00,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 963 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x51,	0,	0,	CPU_SSE,	0,	0},
#line 559 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"o32",	NULL,	X86_OPERSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 401 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fxrstor",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 1232 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovntdq",	movnt_insn,	1,	NONE,	0x66,	0xE7,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1415 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vunpcklpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 645 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 732 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddwq",	sse5two_insn,	1,	NONE,	0x47,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 132 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpxchg16b",	cmpxchg16b_insn,	1,	NONE,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1098 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngtpd",	ssecmp_128_insn,	3,	NONE,	0x0A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1147 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcomiss",	avx_xmm_xmm32_insn,	2,	NONE,	0x00,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1324 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxub",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 778 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxdq",	sse4m64_insn,	2,	NONE,	0x25,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1066 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpltpd",	ssecmp_128_insn,	3,	NONE,	0x01,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 198 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comueqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 1316 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpinsrd",	pinsrd_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1352 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmuludq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 765 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxub",	mmxsse2_insn,	2,	NONE,	0xDE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1259 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpabsb",	avx_ssse3_2op_insn,	1,	NONE,	0x1C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1003 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vandnpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 408 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"hlt",	onebyte_insn,	1,	NONE,	0xF4,	0,	0,	0,	CPU_Priv,	0,	0},
#line 693 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"permpd",	sse5arith_insn,	4,	NONE,	0x21,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1030 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalse_ospd",	ssecmp_128_insn,	3,	NONE,	0x1B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 935 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setno",	setcc_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_386,	0,	0},
#line 330 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fisub",	fiarith_insn,	2,	NONE,	0x04,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 67 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovg",	cmovcc_insn,	3,	NONE,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 53 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cdqe",	onebyte_insn,	1,	NONE,	0x98,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1170 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"verr",	prot286_insn,	1,	NONE,	0x04,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1108 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlesd",	ssecmp_64_insn,	4,	NONE,	0x06,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 252 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtpd2ps",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 187 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comordsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1172 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vextractf128",	vextractf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1154 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 584 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"palignr",	ssse3imm_insn,	2,	NONE,	0x0F,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1444 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xstorerng",	padlock_insn,	1,	NONE,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 129 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpunordsd",	ssecmp_64_insn,	4,	NONE,	0x03,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1345 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxwq",	sse4m32_insn,	2,	NONE,	0x34,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 394 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fucomi",	fcom2_insn,	2,	NONE,	0xDB,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1051 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgtps",	ssecmp_128_insn,	3,	NONE,	0x0E,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 679 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 13 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"a64",	NULL,	X86_ADDRSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 1292 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpistrm",	sse4pcmpstr_insn,	1,	NONE,	0x62,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 981 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"svts",	cyrixsmm_insn,	1,	NONE,	0x7C,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1338 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxwd",	sse4m64_insn,	2,	NONE,	0x23,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 213 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comultpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 1365 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsllw",	vpshift_insn,	4,	NONE,	0xF1,	0x71,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 270 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 444 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jmp",	jmp_insn,	27,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1306 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpextrq",	pextrq_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 88 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovpo",	cmovcc_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 411 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ibts",	ibts_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 1008 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vblendps",	sse4imm_256_insn,	3,	NONE,	0x0C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 500 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maxps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 799 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmvnzb",	cyrixmmx_insn,	1,	NONE,	0x5A,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 800 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmvzb",	cyrixmmx_insn,	1,	NONE,	0x58,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 588 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paveb",	cyrixmmx_insn,	1,	NONE,	0x50,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1438 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xrstor",	twobytemem_insn,	1,	NONE,	0x05,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 508 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"monitor",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC8,	0,	CPU_SSE3,	0,	0},
#line 1133 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptrue_usss",	ssecmp_32_insn,	4,	NONE,	0x1F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 766 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxud",	sse4_insn,	2,	NONE,	0x3F,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 217 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1151 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtpd2ps",	avx_cvt_xmm128_insn,	2,	NONE,	0x66,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 138 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comeqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 817 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetchw",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 474 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xE8,	0,	CPU_P3,	0,	0},
#line 116 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpordpd",	ssecmp_128_insn,	3,	NONE,	0x07,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 406 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"haddpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 1250 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmulpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 55 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cld",	onebyte_insn,	1,	NONE,	0xFC,	0,	0,	0,	0,	0,	0},
#line 1112 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlt_uqsd",	ssecmp_64_insn,	4,	NONE,	0x15,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1356 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpshufd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 498 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maskmovq",	maskmovq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1093 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngess",	ssecmp_32_insn,	4,	NONE,	0x09,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 786 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxwq",	sse4m32_insn,	2,	NONE,	0x34,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1046 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgt_oqpd",	ssecmp_128_insn,	3,	NONE,	0x1E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1313 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphsubsw",	ssse3_insn,	3,	NONE,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1194 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vhaddpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 718 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddbd",	sse5two_insn,	1,	NONE,	0x42,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 377 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsave",	twobytemem_insn,	1,	NONE,	0x06,	0x9B,	0xDD,	0,	CPU_FPU,	0,	0},
#line 1162 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvttsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 622 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 37 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"arpl",	arpl_insn,	1,	NONE,	0,	0,	0,	NOT_64,	CPU_286,	CPU_Prot,	0},
#line 359 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmsubps",	sse5arith_insn,	4,	NONE,	0x18,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 872 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushf",	onebyte_insn,	1,	NONE,	0x9C,	0x00,	0x40,	0,	0,	0,	0},
#line 169 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 149 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 775 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxbd",	sse4m32_insn,	2,	NONE,	0x21,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 668 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomnequb",	sse5comcc_insn,	1,	NONE,	0x6C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 152 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comiss",	xmm_xmm32_insn,	4,	NONE,	0x00,	0x2F,	0,	0,	CPU_SSE,	0,	0},
#line 1440 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xsetbv",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD1,	0,	CPU_386,	CPU_Priv,	CPU_XSAVE},
#line 932 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnge",	setcc_insn,	1,	NONE,	0x0C,	0,	0,	0,	CPU_386,	0,	0},
#line 120 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmppd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0xC2,	0,	0,	CPU_SSE2,	0,	0},
#line 346 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmsubpd",	sse5arith_insn,	4,	NONE,	0x09,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 991 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ud2",	twobyte_insn,	1,	NONE,	0x0F,	0x0B,	0,	0,	CPU_286,	0,	0},
#line 237 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 1360 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsignd",	ssse3_insn,	3,	NONE,	0x0A,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1272 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddusw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1318 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpinsrw",	pinsrw_insn,	9,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1201 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vldmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 609 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpgtw",	mmxsse2_insn,	2,	NONE,	0x65,	0,	0,	0,	CPU_MMX,	0,	0},
#line 130 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpunordss",	ssecmp_32_insn,	4,	NONE,	0x03,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 568 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pabsb",	ssse3_insn,	3,	NONE,	0x1C,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 477 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lgs",	lfgss_insn,	2,	NONE,	0xB5,	0,	0,	0,	CPU_386,	0,	0},
#line 389 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsubp",	farithp_insn,	3,	NONE,	0xE8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 439 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jecxz",	jcxz_insn,	2,	NONE,	0x20,	0,	0,	0,	CPU_386,	0,	0},
#line 1211 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vminpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1203 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaskmovpd",	vmaskmov_insn,	4,	NONE,	0x2D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 325 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fincstp",	twobyte_insn,	1,	NONE,	0xD9,	0xF7,	0,	0,	CPU_FPU,	0,	0},
#line 16 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aam",	aadm_insn,	2,	NONE,	0x00,	0,	0,	NOT_64,	0,	0,	0},
#line 563 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"orps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x56,	0,	0,	CPU_SSE,	0,	0},
#line 1417 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vxorpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1207 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaxsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 710 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfpnacc",	now3d_insn,	1,	NONE,	0x8E,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 374 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frczss",	sse5two32_insn,	2,	NONE,	0x12,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1061 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpless",	ssecmp_32_insn,	4,	NONE,	0x02,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 753 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacsswd",	sse5pmacs_insn,	1,	NONE,	0x86,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 159 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 83 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovns",	cmovcc_insn,	3,	NONE,	0x09,	0,	0,	0,	CPU_686,	0,	0},
#line 1104 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnle_uqsd",	ssecmp_64_insn,	4,	NONE,	0x16,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1383 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpckhqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 229 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 541 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movss",	movss_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 31 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aeskeygenassist",	aes_imm_insn,	1,	NONE,	0x3A,	0xDF,	0,	0,	CPU_AES,	0,	0},
#line 995 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"unpcklpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x14,	0,	0,	CPU_SSE2,	0,	0},
#line 578 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddsb",	mmxsse2_insn,	2,	NONE,	0xEC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1405 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 421 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"int",	int_insn,	1,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 809 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popfw",	onebyte_insn,	1,	NONE,	0x9D,	0x10,	0x40,	0,	0,	0,	0},
#line 1330 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminub",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 275 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"das",	onebyte_insn,	1,	NONE,	0x2F,	0,	0,	NOT_64,	0,	0,	0},
#line 1120 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpord_ssd",	ssecmp_64_insn,	4,	NONE,	0x17,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 131 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpxchg",	cmpxchgxadd_insn,	4,	NONE,	0xB0,	0,	0,	0,	CPU_486,	0,	0},
#line 979 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"svdc",	svdc_insn,	1,	NONE,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 690 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomuw",	sse5com_insn,	1,	NONE,	0x6D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 739 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubwd",	sse5two_insn,	1,	NONE,	0x62,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 650 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 959 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"smsw",	sldtmsw_insn,	6,	NONE,	0x04,	0x01,	0,	0,	CPU_286,	0,	0},
#line 470 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lds",	ldes_insn,	2,	NONE,	0xC5,	0,	0,	NOT_64,	0,	0,	0},
#line 295 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fclex",	threebyte_insn,	1,	NONE,	0x9B,	0xDB,	0xE2,	0,	CPU_FPU,	0,	0},
#line 324 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fimul",	fiarith_insn,	2,	NONE,	0x01,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 983 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"syscall",	twobyte_insn,	1,	NONE,	0x0F,	0x05,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 347 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmsubps",	sse5arith_insn,	4,	NONE,	0x08,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1296 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilmo2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x02,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 860 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpckhbw",	mmxsse2_insn,	2,	NONE,	0x68,	0,	0,	0,	CPU_MMX,	0,	0},
#line 29 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aesenclast",	aes_insn,	1,	NONE,	0x38,	0xDD,	0,	0,	CPU_AES,	0,	0},
#line 368 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fprem",	twobyte_insn,	1,	NONE,	0xD9,	0xF8,	0,	0,	CPU_FPU,	0,	0},
#line 1157 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtsi2ss",	cvt_xmm_rmx_insn,	6,	NONE,	0xF3,	0x2A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 565 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"outsb",	onebyte_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	0,	0,	0},
#line 1076 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_ossd",	ssecmp_64_insn,	4,	NONE,	0x1C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1382 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpckhdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 133 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpxchg486",	cmpxchgxadd_insn,	4,	NONE,	0xA6,	0,	0,	0,	CPU_486,	CPU_Undoc,	0},
#line 836 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psignb",	ssse3_insn,	3,	NONE,	0x08,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 339 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldln2",	twobyte_insn,	1,	NONE,	0xD9,	0xED,	0,	0,	CPU_FPU,	0,	0},
#line 660 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 86 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovp",	cmovcc_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 1286 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpestrm",	sse4pcmpstr_insn,	1,	NONE,	0x60,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 363 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnsave",	onebytemem_insn,	1,	NONE,	0x06,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 1220 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovd",	vmovd_insn,	2,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_386,	CPU_AVX,	0},
#line 185 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comordpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 491 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loopnz",	loop_insn,	8,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 1141 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunord_sss",	ssecmp_32_insn,	4,	NONE,	0x13,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 505 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"minps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 510 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mov",	mov_insn,	69,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1171 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"verw",	prot286_insn,	1,	NONE,	0x05,	0x00,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 1114 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnltpd",	ssecmp_128_insn,	3,	NONE,	0x05,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 697 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pextrq",	pextrq_insn,	1,	NONE,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 783 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxbw",	sse4m64_insn,	2,	NONE,	0x30,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1217 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmmcall",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD9,	0,	CPU_SVM,	0,	0},
#line 1358 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpshuflw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF2,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 422 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"int03",	onebyte_insn,	1,	NONE,	0xCC,	0,	0,	0,	0,	0,	0},
#line 1059 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpleps",	ssecmp_128_insn,	3,	NONE,	0x02,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 139 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comfalsepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 1263 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpacksswb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x63,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1175 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddps",	fma_128_256_insn,	4,	NONE,	0x68,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 593 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pblendw",	sse4imm_insn,	2,	NONE,	0x0E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 999 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1340 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxbd",	sse4m32_insn,	2,	NONE,	0x31,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 949 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shr",	shift_insn,	16,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 958 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"smintold",	twobyte_insn,	1,	NONE,	0x0F,	0x7E,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_Obs},
#line 1208 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaxss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1116 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnltsd",	ssecmp_64_insn,	4,	NONE,	0x05,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 345 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmaddss",	sse5arith32_insn,	8,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 659 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1437 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xorps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x57,	0,	0,	CPU_SSE,	0,	0},
#line 694 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"permps",	sse5arith_insn,	4,	NONE,	0x20,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1096 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngt_uqsd",	ssecmp_64_insn,	4,	NONE,	0x1A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1388 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpcklwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x61,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 764 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxsw",	mmxsse2_insn,	2,	NONE,	0xEE,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 60 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmc",	onebyte_insn,	1,	NONE,	0xF5,	0,	0,	0,	0,	0,	0},
#line 805 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popcnt",	cnt_insn,	3,	NONE,	0xB8,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 136 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comeqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 939 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"seto",	setcc_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_386,	0,	0},
#line 150 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1153 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtps2pd",	avx_cvt_xmm64_insn,	3,	NONE,	0x00,	0x5A,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1387 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpcklqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 351 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmulp",	farithp_insn,	3,	NONE,	0xC8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 90 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovz",	cmovcc_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 868 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"push",	push_insn,	33,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 586 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pandn",	mmxsse2_insn,	2,	NONE,	0xDF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1283 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpeqq",	ssse3_insn,	3,	NONE,	0x29,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 49 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bts",	bittest_insn,	6,	NONE,	0xAB,	0x05,	0,	0,	CPU_386,	0,	0},
#line 539 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsldup",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 340 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldpi",	twobyte_insn,	1,	NONE,	0xD9,	0xEB,	0,	0,	CPU_FPU,	0,	0},
#line 890 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"repz",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 771 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminub",	mmxsse2_insn,	2,	NONE,	0xDA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1216 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmload",	svm_rax_insn,	2,	NONE,	0xDA,	0,	0,	0,	CPU_SVM,	0,	0},
#line 207 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1181 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubaddps",	fma_128_256_insn,	4,	NONE,	0x5E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 314 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fdivrp",	farithp_insn,	3,	NONE,	0xF0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 123 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpsd",	cmpsd_insn,	5,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 736 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubdq",	sse5two_insn,	1,	NONE,	0x63,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 792 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhuw",	mmxsse2_insn,	2,	NONE,	0xE4,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 226 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1420 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vzeroupper",	vzero_insn,	1,	NONE,	0xC0,	0,	0,	0,	CPU_AVX,	0,	0},
#line 337 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldl2t",	twobyte_insn,	1,	NONE,	0xD9,	0xE9,	0,	0,	CPU_FPU,	0,	0},
#line 512 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movaps",	movau_insn,	6,	NONE,	0x00,	0x28,	0x01,	0,	CPU_SSE,	0,	0},
#line 358 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmsubpd",	sse5arith_insn,	4,	NONE,	0x19,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1399 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vshufps",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x00,	0xC6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1425 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xadd",	cmpxchgxadd_insn,	4,	NONE,	0xC0,	0,	0,	0,	CPU_486,	0,	0},
#line 1159 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1130 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptrue_uspd",	ssecmp_128_insn,	3,	NONE,	0x1F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 585 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pand",	mmxsse2_insn,	2,	NONE,	0xDB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 63 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovb",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 615 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomeqd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 526 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntdq",	movnt_insn,	1,	NONE,	0x66,	0xE7,	0,	0,	CPU_SSE2,	0,	0},
#line 379 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsetpm",	twobyte_insn,	1,	NONE,	0xDB,	0xE4,	0,	0,	CPU_286,	CPU_FPU,	CPU_Obs},
#line 1337 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxdq",	sse4m64_insn,	2,	NONE,	0x25,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 724 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddubd",	sse5two_insn,	1,	NONE,	0x52,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1106 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlepd",	ssecmp_128_insn,	3,	NONE,	0x06,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 61 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmova",	cmovcc_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 682 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1023 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_usps",	ssecmp_128_insn,	3,	NONE,	0x18,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1006 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vandps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1169 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdpps",	sse4imm_256_insn,	3,	NONE,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1135 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptrueps",	ssecmp_128_insn,	3,	NONE,	0x0F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1242 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovups",	movau_insn,	6,	NONE,	0x00,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 443 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jle",	jcc_insn,	9,	NONE,	0x0E,	0,	0,	0,	0,	0,	0},
#line 253 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtph2ps",	cvtph2ps_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 648 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 954 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"skinit",	skinit_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1087 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnge_uqps",	ssecmp_128_insn,	3,	NONE,	0x19,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 416 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"insb",	onebyte_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	0,	0,	0},
#line 1362 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpslld",	vpshift_insn,	4,	NONE,	0xF2,	0x72,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1255 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmxoff",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC4,	0,	CPU_P4,	0,	0},
#line 943 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sets",	setcc_insn,	1,	NONE,	0x08,	0,	0,	0,	CPU_386,	0,	0},
#line 231 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 436 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jc",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 384 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fstcw",	fstcw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1213 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vminsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 637 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1252 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmulsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 831 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshufb",	ssse3_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 305 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcomi",	fcom2_insn,	2,	NONE,	0xDB,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 15 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aad",	aadm_insn,	2,	NONE,	0x01,	0,	0,	NOT_64,	0,	0,	0},
#line 898 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"roundsd",	sse4m64imm_insn,	4,	NONE,	0x0B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 629 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalsew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 984 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sysenter",	twobyte_insn,	1,	NONE,	0x0F,	0x34,	0,	NOT_64,	CPU_686,	0,	0},
#line 723 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddsw",	ssse3_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 912 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"scasd",	onebyte_insn,	1,	NONE,	0xAF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 258 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtps2ph",	cvtps2ph_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1080 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_ussd",	ssecmp_64_insn,	4,	NONE,	0x14,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1140 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunord_ssd",	ssecmp_64_insn,	4,	NONE,	0x13,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 194 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comtrueps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 494 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lss",	lfgss_insn,	2,	NONE,	0xB2,	0,	0,	0,	CPU_386,	0,	0},
#line 503 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xF0,	0,	CPU_P3,	0,	0},
#line 1123 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpordps",	ssecmp_128_insn,	3,	NONE,	0x07,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 39 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"blendps",	sse4imm_insn,	2,	NONE,	0x0C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 772 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminud",	sse4_insn,	2,	NONE,	0x3B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1423 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"wrmsr",	twobyte_insn,	1,	NONE,	0x0F,	0x30,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 326 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"finit",	threebyte_insn,	1,	NONE,	0x9B,	0xDB,	0xE3,	0,	CPU_FPU,	0,	0},
#line 1427 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xchg",	xchg_insn,	16,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 154 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 193 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comtruepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 1158 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtss2sd",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5A,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 608 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpgtq",	sse4_insn,	2,	NONE,	0x37,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 146 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 1185 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubss",	fma_128_m32_insn,	3,	NONE,	0x6E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 319 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ficom",	fiarith_insn,	2,	NONE,	0x02,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1386 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpckldq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x62,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 357 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmaddss",	sse5arith32_insn,	8,	NONE,	0x12,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1021 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_uqss",	ssecmp_32_insn,	4,	NONE,	0x08,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 89 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovs",	cmovcc_insn,	3,	NONE,	0x08,	0,	0,	0,	CPU_686,	0,	0},
#line 331 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fisubr",	fiarith_insn,	2,	NONE,	0x05,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 579 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddsiw",	cyrixmmx_insn,	1,	NONE,	0x51,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 855 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubusb",	mmxsse2_insn,	2,	NONE,	0xD8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 338 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldlg2",	twobyte_insn,	1,	NONE,	0xD9,	0xEC,	0,	0,	CPU_FPU,	0,	0},
#line 1293 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vperm2f128",	vperm2f128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1219 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovaps",	movau_insn,	6,	NONE,	0x00,	0x28,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 525 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movmskps",	movmsk_insn,	4,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 833 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshufhw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF3,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 634 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 603 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpeqw",	mmxsse2_insn,	2,	NONE,	0x75,	0,	0,	0,	CPU_MMX,	0,	0},
#line 410 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"hsubps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1258 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vorps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 475 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lfs",	lfgss_insn,	2,	NONE,	0xB4,	0,	0,	0,	CPU_386,	0,	0},
#line 1020 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_uqsd",	ssecmp_64_insn,	4,	NONE,	0x08,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 371 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frczpd",	sse5two_insn,	1,	NONE,	0x11,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1180 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubaddpd",	fma_128_256_insn,	4,	NONE,	0x5F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 919 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setc",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 111 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnless",	ssecmp_32_insn,	4,	NONE,	0x06,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 740 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pi2fd",	now3d_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 811 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pperm",	sse5arith_insn,	4,	NONE,	0x23,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 571 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"packssdw",	mmxsse2_insn,	2,	NONE,	0x6B,	0,	0,	0,	CPU_MMX,	0,	0},
#line 902 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsm",	twobyte_insn,	1,	NONE,	0x0F,	0xAA,	0,	0,	CPU_586,	CPU_SMM,	0},
#line 113 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnltps",	ssecmp_128_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_SSE,	0,	0},
#line 788 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhriw",	cyrixmmx_insn,	1,	NONE,	0x5D,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 601 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpeqd",	mmxsse2_insn,	2,	NONE,	0x76,	0,	0,	0,	CPU_MMX,	0,	0},
#line 524 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movmskpd",	movmsk_insn,	4,	NONE,	0x66,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 313 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fdivr",	farith_insn,	7,	NONE,	0xF0,	0xF8,	0x07,	0,	CPU_FPU,	0,	0},
#line 464 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"js",	jcc_insn,	9,	NONE,	0x08,	0,	0,	0,	0,	0,	0},
#line 84 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnz",	cmovcc_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 263 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtsi2ss",	cvt_xmm_rmx_insn,	6,	NONE,	0xF3,	0x2A,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 738 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubw",	ssse3_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1282 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpeqd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x76,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1294 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermil2pd",	vpermil2_insn,	4,	NONE,	0x49,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 200 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comueqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 964 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stc",	onebyte_insn,	1,	NONE,	0xF9,	0,	0,	0,	0,	0,	0},
#line 770 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminsw",	mmxsse2_insn,	2,	NONE,	0xEA,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 499 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maxpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 21 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x58,	0,	0,	CPU_SSE,	0,	0},
#line 392 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ftst",	twobyte_insn,	1,	NONE,	0xD9,	0xE4,	0,	0,	CPU_FPU,	0,	0},
#line 700 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pf2iw",	now3d_insn,	1,	NONE,	0x1C,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 440 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jg",	jcc_insn,	9,	NONE,	0x0F,	0,	0,	0,	0,	0,	0},
#line 309 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcos",	twobyte_insn,	1,	NONE,	0xD9,	0xFF,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 417 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"insd",	onebyte_insn,	1,	NONE,	0x6D,	0x20,	0,	0,	CPU_386,	0,	0},
#line 614 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomeqb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 141 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comfalsesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 492 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loopz",	loop_insn,	8,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 605 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpestrm",	sse4pcmpstr_insn,	1,	NONE,	0x60,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1027 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeqps",	ssecmp_128_insn,	3,	NONE,	0x00,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 974 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sub",	arith_insn,	22,	NONE,	0x28,	0x05,	0,	0,	0,	0,	0},
#line 1053 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgtss",	ssecmp_32_insn,	4,	NONE,	0x0E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 365 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnstenv",	onebytemem_insn,	1,	NONE,	0x06,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 457 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jns",	jcc_insn,	9,	NONE,	0x09,	0,	0,	0,	0,	0,	0},
#line 1300 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilpd",	vpermil_insn,	4,	NONE,	0x05,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1122 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpordpd",	ssecmp_128_insn,	3,	NONE,	0x07,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 960 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sqrtpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 463 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jrcxz",	jcxz_insn,	2,	NONE,	0x40,	0,	0,	ONLY_64,	0,	0,	0},
#line 929 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnc",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 624 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1319 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaddubsw",	ssse3_insn,	3,	NONE,	0x04,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1363 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpslldq",	pslrldq_insn,	2,	NONE,	0x07,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 725 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddubq",	sse5two_insn,	1,	NONE,	0x53,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1264 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpackusdw",	ssse3_insn,	3,	NONE,	0x2B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 850 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubd",	mmxsse2_insn,	2,	NONE,	0xFA,	0,	0,	0,	CPU_MMX,	0,	0},
#line 619 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomequq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 48 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"btr",	bittest_insn,	6,	NONE,	0xB3,	0x06,	0,	0,	CPU_386,	0,	0},
#line 757 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmadcsswd",	sse5pmacs_insn,	1,	NONE,	0xA6,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 426 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"invlpg",	twobytemem_insn,	1,	NONE,	0x07,	0x0F,	0x01,	0,	CPU_486,	CPU_Priv,	0},
#line 676 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 845 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psrld",	pshift_insn,	4,	NONE,	0xD2,	0x72,	0x02,	0,	CPU_MMX,	0,	0},
#line 715 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfrsqrt",	now3d_insn,	1,	NONE,	0x97,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1129 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpss",	xmm_xmm32_imm_insn,	4,	NONE,	0xF3,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 702 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfadd",	now3d_insn,	1,	NONE,	0x9E,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 378 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fscale",	twobyte_insn,	1,	NONE,	0xD9,	0xFD,	0,	0,	CPU_FPU,	0,	0},
#line 134 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpxchg8b",	cmpxchg8b_insn,	1,	NONE,	0,	0,	0,	0,	CPU_586,	0,	0},
#line 1103 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnle_uqps",	ssecmp_128_insn,	3,	NONE,	0x16,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1041 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpge_oqss",	ssecmp_32_insn,	4,	NONE,	0x1D,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 486 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lodsq",	onebyte_insn,	1,	NONE,	0xAD,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 355 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmaddps",	sse5arith_insn,	4,	NONE,	0x10,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1257 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vorpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x56,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 814 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetcht0",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 687 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomub",	sse5com_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 780 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxwq",	sse4m32_insn,	2,	NONE,	0x24,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1085 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneqss",	ssecmp_32_insn,	4,	NONE,	0x04,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 455 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jno",	jcc_insn,	9,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 1075 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_osps",	ssecmp_128_insn,	3,	NONE,	0x1C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 638 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1205 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaxpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1071 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_oqps",	ssecmp_128_insn,	3,	NONE,	0x0C,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1325 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxud",	ssse3_insn,	3,	NONE,	0x3F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 103 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpltss",	ssecmp_32_insn,	4,	NONE,	0x01,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 82 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnp",	cmovcc_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_686,	0,	0},
#line 947 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shl",	shift_insn,	16,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 1377 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubusb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 209 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comulepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 994 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"unpckhps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x15,	0,	0,	CPU_SSE,	0,	0},
#line 230 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 819 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"protd",	sse5prot_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1209 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmcall",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC1,	0,	CPU_P4,	0,	0},
#line 1222 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovdqa",	movau_insn,	6,	NONE,	0x66,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1145 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunordss",	ssecmp_32_insn,	4,	NONE,	0x03,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 583 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddw",	mmxsse2_insn,	2,	NONE,	0xFD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1289 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpgtq",	ssse3_insn,	3,	NONE,	0x37,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1101 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngtss",	ssecmp_32_insn,	4,	NONE,	0x0A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1078 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_uspd",	ssecmp_128_insn,	3,	NONE,	0x14,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 769 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminsd",	sse4_insn,	2,	NONE,	0x39,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 733 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phminposuw",	sse4_insn,	2,	NONE,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 73 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnb",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 689 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomuq",	sse5com_insn,	1,	NONE,	0x6F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1118 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpord_spd",	ssecmp_128_insn,	3,	NONE,	0x17,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1331 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminud",	ssse3_insn,	3,	NONE,	0x3B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 955 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sldt",	sldtmsw_insn,	6,	NONE,	0x00,	0x00,	0,	0,	CPU_286,	0,	0},
#line 892 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"retf",	retnf_insn,	6,	NONE,	0xCA,	0x40,	0,	0,	0,	0,	0},
#line 797 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmvgezb",	cyrixmmx_insn,	1,	NONE,	0x5C,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 68 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovge",	cmovcc_insn,	3,	NONE,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 647 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomled",	sse5comcc_insn,	1,	NONE,	0x4E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 466 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lahf",	onebyte_insn,	1,	NONE,	0x9F,	0,	0,	0,	0,	0,	0},
#line 1137 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptruess",	ssecmp_32_insn,	4,	NONE,	0x0F,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 151 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comisd",	xmm_xmm64_insn,	4,	NONE,	0x66,	0x2F,	0,	0,	CPU_SSE2,	0,	0},
#line 704 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfcmpge",	now3d_insn,	1,	NONE,	0x90,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 51 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cbw",	onebyte_insn,	1,	NONE,	0x98,	0x10,	0,	0,	0,	0,	0},
#line 1426 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xbts",	xbts_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Obs,	CPU_Undoc},
#line 670 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomnequq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 581 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddusb",	mmxsse2_insn,	2,	NONE,	0xDC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1411 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vucomisd",	avx_xmm_xmm64_insn,	2,	NONE,	0x66,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 483 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lock",	NULL,	X86_LOCKREP>>8,	0xF0,	0,	0,	0,	0,	0,	0,	0},
#line 38 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"blendpd",	sse4imm_insn,	2,	NONE,	0x0D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 899 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"roundss",	sse4m32imm_insn,	4,	NONE,	0x0A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 501 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maxsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5F,	0,	0,	CPU_SSE2,	0,	0},
#line 244 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunordss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 429 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"iretd",	onebyte_insn,	1,	NONE,	0xCF,	0x20,	0,	0,	CPU_386,	0,	0},
#line 153 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1254 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmwrite",	vmxmemwr_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 737 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubsw",	ssse3_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 707 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfmin",	now3d_insn,	1,	NONE,	0x94,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 272 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cwd",	onebyte_insn,	1,	NONE,	0x99,	0x10,	0,	0,	0,	0,	0},
#line 1359 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsignb",	ssse3_insn,	3,	NONE,	0x08,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 795 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmullw",	mmxsse2_insn,	2,	NONE,	0xD5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 487 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lodsw",	onebyte_insn,	1,	NONE,	0xAD,	0x10,	0,	0,	0,	0,	0},
#line 1097 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngt_uqss",	ssecmp_32_insn,	4,	NONE,	0x1A,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 254 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtpi2pd",	cvt_xmm_mm_ss_insn,	1,	NONE,	0x66,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 654 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1372 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 415 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"inc",	incdec_insn,	6,	NONE,	0x40,	0x00,	0,	0,	0,	0,	0},
#line 1321 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxsb",	ssse3_insn,	3,	NONE,	0x3C,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1161 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvttps2dq",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 423 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"int3",	onebyte_insn,	1,	NONE,	0xCC,	0,	0,	0,	0,	0,	0},
#line 933 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnl",	setcc_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 993 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"unpckhpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x15,	0,	0,	CPU_SSE2,	0,	0},
#line 212 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 815 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetcht1",	twobytemem_insn,	1,	NONE,	0x02,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1326 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxuw",	ssse3_insn,	3,	NONE,	0x3E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1014 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_ospd",	ssecmp_128_insn,	3,	NONE,	0x10,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 277 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"div",	div_insn,	8,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 709 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfnacc",	now3d_insn,	1,	NONE,	0x8A,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 17 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aas",	onebyte_insn,	1,	NONE,	0x3F,	0,	0,	NOT_64,	0,	0,	0},
#line 144 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 140 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comfalseps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 840 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pslldq",	pslrldq_insn,	2,	NONE,	0x07,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1206 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaxps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5F,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 965 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"std",	onebyte_insn,	1,	NONE,	0xFD,	0,	0,	0,	0,	0,	0},
#line 572 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"packsswb",	mmxsse2_insn,	2,	NONE,	0x63,	0,	0,	0,	CPU_MMX,	0,	0},
#line 538 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movshdup",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x16,	0,	0,	CPU_SSE3,	0,	0},
#line 56 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"clflush",	clflush_insn,	1,	NONE,	0,	0,	0,	0,	CPU_P3,	0,	0},
#line 375 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frndint",	twobyte_insn,	1,	NONE,	0xD9,	0xFC,	0,	0,	CPU_FPU,	0,	0},
#line 293 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fbstp",	fbldstp_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_FPU,	0,	0},
#line 529 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntpd",	movnt_insn,	1,	NONE,	0x66,	0x2B,	0,	0,	CPU_SSE2,	0,	0},
#line 551 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mulps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x59,	0,	0,	CPU_SSE,	0,	0},
#line 302 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovnu",	fcmovcc_insn,	1,	NONE,	0xDB,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 419 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"insertq",	insertq_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 405 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fyl2xp1",	twobyte_insn,	1,	NONE,	0xD9,	0xF9,	0,	0,	CPU_FPU,	0,	0},
#line 1210 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmclear",	vmxthreebytemem_insn,	1,	NONE,	0x66,	0,	0,	0,	CPU_P4,	0,	0},
#line 1062 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplt_oqpd",	ssecmp_128_insn,	3,	NONE,	0x11,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 556 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"nop",	onebyte_insn,	1,	NONE,	0x90,	0,	0,	0,	0,	0,	0},
#line 1186 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmaddpd",	fma_128_256_insn,	4,	NONE,	0x79,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 528 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movnti",	movnti_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 613 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomd",	sse5com_insn,	1,	NONE,	0x4E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 907 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sal",	shift_insn,	16,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 1341 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxbq",	sse4m16_insn,	2,	NONE,	0x32,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1333 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovmskb",	pmovmskb_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1339 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxwq",	sse4m32_insn,	2,	NONE,	0x24,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 555 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"neg",	f6_insn,	4,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 441 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jge",	jcc_insn,	9,	NONE,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1225 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovhpd",	movhlp_insn,	3,	NONE,	0x66,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1188 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmaddsd",	fma_128_m64_insn,	3,	NONE,	0x7B,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1431 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xcryptecb",	padlock_insn,	1,	NONE,	0xC8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 196 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comtruess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 458 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnz",	jcc_insn,	9,	NONE,	0x05,	0,	0,	0,	0,	0,	0},
#line 65 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovc",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 167 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 310 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fdecstp",	twobyte_insn,	1,	NONE,	0xD9,	0xF6,	0,	0,	CPU_FPU,	0,	0},
#line 1060 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplesd",	ssecmp_64_insn,	4,	NONE,	0x02,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 72 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnae",	cmovcc_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_686,	0,	0},
#line 531 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntq",	movntq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1392 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vroundpd",	avx_sse4imm_insn,	3,	NONE,	0x09,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 267 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttpd2pi",	cvt_mm_xmm_insn,	1,	NONE,	0x66,	0x2C,	0,	0,	CPU_SSE2,	0,	0},
#line 1302 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermiltd2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x00,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1022 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_uspd",	ssecmp_128_insn,	3,	NONE,	0x18,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 59 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"clts",	twobyte_insn,	1,	NONE,	0x0F,	0x06,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 1397 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vrsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x52,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 118 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpordsd",	ssecmp_64_insn,	4,	NONE,	0x07,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 352 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnclex",	twobyte_insn,	1,	NONE,	0xDB,	0xE2,	0,	0,	CPU_FPU,	0,	0},
#line 1389 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpxor",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 50 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"call",	call_insn,	26,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1136 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptruesd",	ssecmp_64_insn,	4,	NONE,	0x0F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1253 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmulss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1055 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmple_oqps",	ssecmp_128_insn,	3,	NONE,	0x12,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1197 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vhsubps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1164 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdivpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1381 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpckhbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x68,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 621 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomeqw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1166 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdivsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1230 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovmskpd",	movmsk_insn,	4,	NONE,	0x66,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 838 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psignw",	ssse3_insn,	3,	NONE,	0x09,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 785 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxwd",	sse4m64_insn,	2,	NONE,	0x33,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 279 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"divps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 502 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maxss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5F,	0,	0,	CPU_SSE,	0,	0},
#line 1297 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilmo2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x02,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 108 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnlepd",	ssecmp_128_insn,	3,	NONE,	0x06,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 343 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmaddps",	sse5arith_insn,	4,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 844 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psraw",	pshift_insn,	4,	NONE,	0xE1,	0x71,	0x04,	0,	CPU_MMX,	0,	0},
#line 587 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pause",	onebyte_prefix_insn,	1,	NONE,	0xF3,	0x90,	0,	0,	CPU_P4,	0,	0},
#line 216 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comultss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 148 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 178 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 372 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frczps",	sse5two_insn,	1,	NONE,	0x10,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 296 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovb",	fcmovcc_insn,	1,	NONE,	0xDA,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 98 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmplesd",	ssecmp_64_insn,	4,	NONE,	0x02,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1144 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunordsd",	ssecmp_64_insn,	4,	NONE,	0x03,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 910 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sbb",	arith_insn,	22,	NONE,	0x18,	0x03,	0,	0,	0,	0,	0},
#line 864 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpcklbw",	mmxsse2_insn,	2,	NONE,	0x60,	0,	0,	0,	CPU_MMX,	0,	0},
#line 208 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 445 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jna",	jcc_insn,	9,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 1403 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsqrtss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 598 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pclmulqdq",	aes_imm_insn,	1,	NONE,	0x3A,	0x44,	0,	0,	CPU_CLMUL,	0,	0},
#line 711 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfrcp",	now3d_insn,	1,	NONE,	0x96,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1202 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaskmovdqu",	maskmovdqu_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1124 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpordsd",	ssecmp_64_insn,	4,	NONE,	0x07,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1305 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpextrd",	pextrd_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 841 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psllq",	pshift_insn,	4,	NONE,	0xF3,	0x73,	0x06,	0,	CPU_MMX,	0,	0},
#line 801 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pop",	pop_insn,	21,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1349 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmulhw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 399 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fxam",	twobyte_insn,	1,	NONE,	0xD9,	0xE5,	0,	0,	CPU_FPU,	0,	0},
#line 552 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mulsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 1270 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xED,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 664 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 717 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfsubr",	now3d_insn,	1,	NONE,	0xAA,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 599 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmov",	sse5arith_insn,	4,	NONE,	0x22,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 948 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shld",	shlrd_insn,	9,	NONE,	0xA4,	0,	0,	0,	CPU_386,	0,	0},
#line 1408 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsubss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 24 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addsubpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD0,	0,	0,	CPU_SSE3,	0,	0},
#line 1138 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunord_spd",	ssecmp_128_insn,	3,	NONE,	0x13,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 997 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1312 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphsubd",	ssse3_insn,	3,	NONE,	0x06,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 752 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacssdql",	sse5pmacs_insn,	1,	NONE,	0x87,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 387 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fstsw",	fstsw_insn,	2,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 128 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpunordps",	ssecmp_128_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 869 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pusha",	onebyte_insn,	1,	NONE,	0x60,	0x00,	0,	NOT_64,	CPU_186,	0,	0},
#line 228 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 344 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmaddsd",	sse5arith64_insn,	8,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 438 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"je",	jcc_insn,	9,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 70 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovle",	cmovcc_insn,	3,	NONE,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 520 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movhps",	movhlp_insn,	3,	NONE,	0x00,	0x16,	0,	0,	CPU_SSE,	0,	0},
#line 1418 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vxorps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x57,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1111 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlt_uqps",	ssecmp_128_insn,	3,	NONE,	0x15,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 936 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnp",	setcc_insn,	1,	NONE,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 527 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntdqa",	movntdqa_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 976 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"subps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 618 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomequd",	sse5comcc_insn,	1,	NONE,	0x6E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1243 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmpsadbw",	sse4imm_insn,	2,	NONE,	0x42,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1432 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xcryptofb",	padlock_insn,	1,	NONE,	0xE8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 884 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rdtsc",	twobyte_insn,	1,	NONE,	0x0F,	0x31,	0,	0,	CPU_586,	0,	0},
#line 47 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"btc",	bittest_insn,	6,	NONE,	0xBB,	0x07,	0,	0,	CPU_386,	0,	0},
#line 804 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popaw",	onebyte_insn,	1,	NONE,	0x61,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 575 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddb",	mmxsse2_insn,	2,	NONE,	0xFC,	0,	0,	0,	CPU_MMX,	0,	0},
#line 837 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psignd",	ssse3_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 300 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovnbe",	fcmovcc_insn,	1,	NONE,	0xDB,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 290 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fadd",	farith_insn,	7,	NONE,	0xC0,	0xC0,	0x00,	0,	CPU_FPU,	0,	0},
#line 667 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneqq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 507 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"minss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5D,	0,	0,	CPU_SSE,	0,	0},
#line 122 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpsb",	onebyte_insn,	1,	NONE,	0xA6,	0x00,	0,	0,	0,	0,	0},
#line 166 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comneqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 448 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnbe",	jcc_insn,	9,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 782 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxbq",	sse4m16_insn,	2,	NONE,	0x32,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1050 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgtpd",	ssecmp_128_insn,	3,	NONE,	0x0E,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 356 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmaddsd",	sse5arith64_insn,	8,	NONE,	0x13,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 988 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ucomisd",	xmm_xmm64_insn,	4,	NONE,	0x66,	0x2E,	0,	0,	CPU_SSE2,	0,	0},
#line 175 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngtsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 701 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfacc",	now3d_insn,	1,	NONE,	0xAE,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 30 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aesimc",	aes_insn,	1,	NONE,	0x38,	0xDB,	0,	0,	CPU_AES,	0,	0},
#line 1422 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"wbinvd",	twobyte_insn,	1,	NONE,	0x0F,	0x09,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 530 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntps",	movnt_insn,	1,	NONE,	0x00,	0x2B,	0,	0,	CPU_SSE,	0,	0},
#line 307 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcomp",	fcom_insn,	5,	NONE,	0xD8,	0x03,	0,	0,	CPU_FPU,	0,	0},
#line 397 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fucompp",	twobyte_insn,	1,	NONE,	0xDA,	0xE9,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 246 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cqo",	onebyte_insn,	1,	NONE,	0x99,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1336 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxbw",	sse4m64_insn,	2,	NONE,	0x20,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 820 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"protq",	sse5prot_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1070 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_oqpd",	ssecmp_128_insn,	3,	NONE,	0x0C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1125 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpordss",	ssecmp_32_insn,	4,	NONE,	0x07,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1063 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplt_oqps",	ssecmp_128_insn,	3,	NONE,	0x11,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 779 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxwd",	sse4m64_insn,	2,	NONE,	0x23,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 294 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fchs",	twobyte_insn,	1,	NONE,	0xD9,	0xE0,	0,	0,	CPU_FPU,	0,	0},
#line 763 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxsd",	sse4_insn,	2,	NONE,	0x3D,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 916 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setae",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 1385 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpcklbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x60,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 318 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fiadd",	fiarith_insn,	2,	NONE,	0x00,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 987 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"test",	test_insn,	20,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 827 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshlb",	sse5psh_insn,	2,	NONE,	0x00,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 570 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pabsw",	ssse3_insn,	3,	NONE,	0x1D,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1348 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmulhuw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 564 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"out",	out_insn,	12,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 908 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"salc",	onebyte_insn,	1,	NONE,	0xD6,	0,	0,	NOT_64,	CPU_Undoc,	0,	0},
#line 1224 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovhlps",	movhllhps_insn,	2,	NONE,	0x12,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1233 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovntdqa",	movntdqa_insn,	1,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 400 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fxch",	fxch_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1007 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vblendpd",	sse4imm_256_insn,	3,	NONE,	0x0D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 913 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"scasq",	onebyte_insn,	1,	NONE,	0xAF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 829 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshlq",	sse5psh_insn,	2,	NONE,	0x03,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 364 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnstcw",	fldnstcw_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_FPU,	0,	0},
#line 195 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comtruesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0F,	0,	0,	CPU_SSE5,	0,	0},
#line 768 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminsb",	sse4_insn,	2,	NONE,	0x38,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 506 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"minsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 199 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comueqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 669 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomnequd",	sse5comcc_insn,	1,	NONE,	0x6E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 743 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pinsrd",	pinsrd_insn,	2,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1261 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpabsw",	avx_ssse3_2op_insn,	1,	NONE,	0x1D,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 839 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pslld",	pshift_insn,	4,	NONE,	0xF2,	0x72,	0x06,	0,	CPU_MMX,	0,	0},
#line 298 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmove",	fcmovcc_insn,	1,	NONE,	0xDA,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 998 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 360 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmsubsd",	sse5arith64_insn,	8,	NONE,	0x1B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 328 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fistp",	fildstp_insn,	3,	NONE,	0x03,	0x02,	0x07,	0,	CPU_FPU,	0,	0},
#line 242 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunordps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 557 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"not",	f6_insn,	4,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 1160 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvttpd2dq",	avx_cvt_xmm128_insn,	2,	NONE,	0x66,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 137 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comeqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 19 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"add",	arith_insn,	22,	NONE,	0x00,	0x00,	0,	0,	0,	0,	0},
#line 1056 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmple_oqsd",	ssecmp_64_insn,	4,	NONE,	0x12,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 262 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtsi2sd",	cvt_xmm_rmx_insn,	6,	NONE,	0xF2,	0x2A,	0,	0,	CPU_SSE2,	0,	0},
#line 93 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpeqps",	ssecmp_128_insn,	3,	NONE,	0x00,	0,	0,	0,	CPU_SSE,	0,	0},
#line 962 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sqrtsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x51,	0,	0,	CPU_SSE2,	0,	0},
#line 1435 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xor",	arith_insn,	22,	NONE,	0x30,	0x06,	0,	0,	0,	0,	0},
#line 617 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomequb",	sse5comcc_insn,	1,	NONE,	0x6C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 112 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnltpd",	ssecmp_128_insn,	3,	NONE,	0x05,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 390 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsubr",	farith_insn,	7,	NONE,	0xE0,	0xE8,	0x05,	0,	CPU_FPU,	0,	0},
#line 287 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"extrq",	extrq_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 781 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxbd",	sse4m32_insn,	2,	NONE,	0x31,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1280 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpblendw",	sse4imm_insn,	2,	NONE,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1134 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptruepd",	ssecmp_128_insn,	3,	NONE,	0x0F,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1307 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpextrw",	pextrw_insn,	7,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 453 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnl",	jcc_insn,	9,	NONE,	0x0D,	0,	0,	0,	0,	0,	0},
#line 1285 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpestri",	sse4pcmpstr_insn,	1,	NONE,	0x61,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1012 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vbroadcastsd",	vbroadcastsd_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 674 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1409 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vtestpd",	sse4_insn,	2,	NONE,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 14 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aaa",	onebyte_insn,	1,	NONE,	0x37,	0,	0,	NOT_64,	0,	0,	0},
#line 886 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rep",	NULL,	X86_LOCKREP>>8,	0xF3,	0,	0,	0,	0,	0,	0,	0},
#line 1174 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddpd",	fma_128_256_insn,	4,	NONE,	0x69,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 191 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comsd",	sse5com64_insn,	2,	NONE,	0x2F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 917 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setb",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 12 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"a32",	NULL,	X86_ADDRSIZE>>8,	0x20,	0,	0,	0,	0,	0,	0,	0},
#line 695 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pextrb",	pextrb_insn,	3,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1428 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xcryptcbc",	padlock_insn,	1,	NONE,	0xD0,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 1132 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptrue_ussd",	ssecmp_64_insn,	4,	NONE,	0x1F,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 96 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmplepd",	ssecmp_128_insn,	3,	NONE,	0x02,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 546 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movups",	movau_insn,	6,	NONE,	0x00,	0x10,	0x01,	0,	CPU_SSE,	0,	0},
#line 404 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fyl2x",	twobyte_insn,	1,	NONE,	0xD9,	0xF1,	0,	0,	CPU_FPU,	0,	0},
#line 1072 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_oqsd",	ssecmp_64_insn,	4,	NONE,	0x0C,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 548 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mpsadbw",	sse4imm_insn,	2,	NONE,	0x42,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 476 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lgdt",	twobytemem_insn,	1,	NONE,	0x02,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 221 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuneqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 260 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtsd2si",	cvt_rx_xmm64_insn,	4,	NONE,	0xF2,	0x2D,	0,	0,	CPU_386,	CPU_SSE2,	0},
#line 78 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnge",	cmovcc_insn,	3,	NONE,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 119 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpordss",	ssecmp_32_insn,	4,	NONE,	0x07,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 247 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"crc32",	crc32_insn,	5,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE42,	0},
#line 1371 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsrlw",	vpshift_insn,	4,	NONE,	0xD1,	0x71,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 569 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pabsd",	ssse3_insn,	3,	NONE,	0x1E,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 784 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovzxdq",	sse4m64_insn,	2,	NONE,	0x35,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 281 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"divss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5E,	0,	0,	CPU_SSE,	0,	0},
#line 97 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpleps",	ssecmp_128_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1126 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmppd",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x66,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 366 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnstsw",	fnstsw_insn,	2,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1127 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpps",	xmm_xmm128_imm_256_insn,	3,	NONE,	0x00,	0xC2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1089 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnge_uqss",	ssecmp_32_insn,	4,	NONE,	0x19,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1009 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vblendvpd",	avx_sse4xmm0_insn,	2,	NONE,	0x4B,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 350 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmul",	farith_insn,	7,	NONE,	0xC8,	0xC8,	0x01,	0,	CPU_FPU,	0,	0},
#line 1152 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtps2dq",	avx_xmm_xmm128_insn,	2,	NONE,	0x66,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1274 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpalignr",	sse4imm_insn,	2,	NONE,	0x0F,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1410 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vtestps",	sse4_insn,	2,	NONE,	0x0E,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 924 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setle",	setcc_insn,	1,	NONE,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 80 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnle",	cmovcc_insn,	3,	NONE,	0x0F,	0,	0,	0,	CPU_686,	0,	0},
#line 921 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setg",	setcc_insn,	1,	NONE,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 1402 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsqrtsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x51,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1310 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphaddw",	ssse3_insn,	3,	NONE,	0x01,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1376 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1347 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmulhrsw",	ssse3_insn,	3,	NONE,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1054 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmple_oqpd",	ssecmp_128_insn,	3,	NONE,	0x12,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 882 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rdpmc",	twobyte_insn,	1,	NONE,	0x0F,	0x33,	0,	0,	CPU_686,	0,	0},
#line 160 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1026 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeqpd",	ssecmp_128_insn,	3,	NONE,	0x00,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 446 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnae",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 66 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmove",	cmovcc_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_686,	0,	0},
#line 1178 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddsubpd",	fma_128_256_insn,	4,	NONE,	0x5D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1380 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vptest",	sse4_insn,	2,	NONE,	0x17,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 20 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 774 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovmskb",	pmovmskb_insn,	4,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 523 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movlps",	movhlp_insn,	3,	NONE,	0x00,	0x12,	0,	0,	CPU_SSE,	0,	0},
#line 268 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttps2dq",	xmm_xmm128_insn,	2,	NONE,	0xF3,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 335 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldenv",	onebytemem_insn,	1,	NONE,	0x04,	0xD9,	0,	0,	CPU_FPU,	0,	0},
#line 125 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpss",	xmm_xmm32_imm_insn,	4,	NONE,	0xF3,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 412 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"idiv",	div_insn,	8,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 1391 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vrcpss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x53,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 777 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxbw",	sse4m64_insn,	2,	NONE,	0x20,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1298 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilmz2pd",	vpermil2_fixed_insn,	4,	NONE,	0x49,	0x03,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 726 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddubw",	sse5two_insn,	1,	NONE,	0x51,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 303 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovu",	fcmovcc_insn,	1,	NONE,	0xDA,	0xD8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 990 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ud1",	twobyte_insn,	1,	NONE,	0x0F,	0xB9,	0,	0,	CPU_286,	CPU_Undoc,	0},
#line 516 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movdqa",	movau_insn,	6,	NONE,	0x66,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 1043 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgeps",	ssecmp_128_insn,	3,	NONE,	0x0D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 683 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 249 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtdq2ps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 542 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsw",	onebyte_insn,	1,	NONE,	0xA5,	0x10,	0,	0,	0,	0,	0},
#line 1353 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpor",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 787 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmuldq",	sse4_insn,	2,	NONE,	0x28,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1275 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpand",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDB,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 58 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cli",	onebyte_insn,	1,	NONE,	0xFA,	0,	0,	0,	0,	0,	0},
#line 181 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnltpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 284 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"emms",	twobyte_insn,	1,	NONE,	0x0F,	0x77,	0,	0,	CPU_MMX,	0,	0},
#line 1327 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminsb",	ssse3_insn,	3,	NONE,	0x38,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 174 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngtps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 1163 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvttss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 942 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setpo",	setcc_insn,	1,	NONE,	0x0B,	0,	0,	0,	CPU_386,	0,	0},
#line 758 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmadcswd",	sse5pmacs_insn,	1,	NONE,	0xB6,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 750 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacssdd",	sse5pmacs_insn,	1,	NONE,	0x8E,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 789 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhrsw",	ssse3_insn,	3,	NONE,	0x0B,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1434 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xlatb",	onebyte_insn,	1,	NONE,	0xD7,	0x00,	0,	0,	0,	0,	0},
#line 953 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sidt",	twobytemem_insn,	1,	NONE,	0x01,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 696 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pextrd",	pextrd_insn,	1,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_SSE41,	0},
#line 1322 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaxsd",	ssse3_insn,	3,	NONE,	0x3D,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 798 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmvlzb",	cyrixmmx_insn,	1,	NONE,	0x5B,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1143 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunordps",	ssecmp_128_insn,	3,	NONE,	0x03,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1342 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxbw",	sse4m64_insn,	2,	NONE,	0x30,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1407 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsubsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 656 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 858 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pswapd",	now3d_insn,	1,	NONE,	0xBB,	0,	0,	0,	CPU_3DNow,	CPU_Athlon,	0},
#line 1077 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_osss",	ssecmp_32_insn,	4,	NONE,	0x1C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 342 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmaddpd",	sse5arith_insn,	4,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1150 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtpd2dq",	avx_cvt_xmm128_insn,	2,	NONE,	0xF2,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1094 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngt_uqpd",	ssecmp_128_insn,	3,	NONE,	0x1A,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 628 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1442 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xsha256",	padlock_insn,	1,	NONE,	0xD0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 830 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshlw",	sse5psh_insn,	2,	NONE,	0x01,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1309 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphaddsw",	ssse3_insn,	3,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 115 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnltss",	ssecmp_32_insn,	4,	NONE,	0x05,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 1039 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpge_oqps",	ssecmp_128_insn,	3,	NONE,	0x1D,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 91 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmp",	arith_insn,	22,	NONE,	0x38,	0x07,	0,	0,	0,	0,	0},
#line 1195 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vhaddps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0x7C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 754 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacssww",	sse5pmacs_insn,	1,	NONE,	0x85,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1303 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermiltd2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x00,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 334 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldcw",	fldnstcw_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1100 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngtsd",	ssecmp_64_insn,	4,	NONE,	0x0A,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 978 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"subss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5C,	0,	0,	CPU_SSE,	0,	0},
#line 824 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshad",	sse5psh_insn,	2,	NONE,	0x06,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 540 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsq",	onebyte_insn,	1,	NONE,	0xA5,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1183 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubps",	fma_128_256_insn,	4,	NONE,	0x6C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1223 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovdqu",	movau_insn,	6,	NONE,	0xF3,	0x6F,	0x10,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 353 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fninit",	twobyte_insn,	1,	NONE,	0xDB,	0xE3,	0,	0,	CPU_FPU,	0,	0},
#line 459 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jo",	jcc_insn,	9,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 1367 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsraw",	vpshift_insn,	4,	NONE,	0xE1,	0x71,	0x04,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 626 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 522 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movlpd",	movhlp_insn,	3,	NONE,	0x66,	0x12,	0,	0,	CPU_SSE2,	0,	0},
#line 261 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtsd2ss",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 655 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 143 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 315 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"femms",	twobyte_insn,	1,	NONE,	0x0F,	0x0E,	0,	0,	CPU_3DNow,	0,	0},
#line 45 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bswap",	bswap_insn,	2,	NONE,	0,	0,	0,	0,	CPU_486,	0,	0},
#line 94 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpeqsd",	ssecmp_64_insn,	4,	NONE,	0x00,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 1278 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpavgw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 905 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsts",	cyrixsmm_insn,	1,	NONE,	0x7D,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1005 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vandpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x54,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 521 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movlhps",	movhllhps_insn,	2,	NONE,	0x16,	0,	0,	0,	CPU_SSE,	0,	0},
#line 643 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 273 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cwde",	onebyte_insn,	1,	NONE,	0x98,	0x20,	0,	0,	CPU_386,	0,	0},
#line 87 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovpe",	cmovcc_insn,	3,	NONE,	0x0A,	0,	0,	0,	CPU_686,	0,	0},
#line 699 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pf2id",	now3d_insn,	1,	NONE,	0x1D,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 407 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"haddps",	xmm_xmm128_insn,	2,	NONE,	0xF2,	0x7C,	0,	0,	CPU_SSE3,	0,	0},
#line 631 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomged",	sse5comcc_insn,	1,	NONE,	0x4E,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 934 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnle",	setcc_insn,	1,	NONE,	0x0F,	0,	0,	0,	CPU_386,	0,	0},
#line 124 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpsq",	onebyte_insn,	1,	NONE,	0xA7,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 1028 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeqsd",	ssecmp_64_insn,	4,	NONE,	0x00,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 691 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomw",	sse5com_insn,	1,	NONE,	0x4D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 651 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 835 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshufw",	pshufw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 311 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fdiv",	farith_insn,	7,	NONE,	0xF8,	0xF0,	0x06,	0,	CPU_FPU,	0,	0},
#line 762 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxsb",	sse4_insn,	2,	NONE,	0x3C,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 210 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 894 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rol",	shift_insn,	16,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 612 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomb",	sse5com_insn,	1,	NONE,	0x4C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 431 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"iretw",	onebyte_insn,	1,	NONE,	0xCF,	0x10,	0,	0,	0,	0,	0},
#line 712 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfrcpit1",	now3d_insn,	1,	NONE,	0xA6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 388 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsub",	farith_insn,	7,	NONE,	0xE8,	0xE0,	0x04,	0,	CPU_FPU,	0,	0},
#line 1228 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovlpd",	movhlp_insn,	3,	NONE,	0x66,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 928 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnbe",	setcc_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 75 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnc",	cmovcc_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_686,	0,	0},
#line 1315 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpinsrb",	pinsrb_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 57 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"clgi",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xDD,	0,	CPU_SVM,	0,	0},
#line 901 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsldt",	cyrixsmm_insn,	1,	NONE,	0x7B,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 418 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"insertps",	insertps_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 544 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsxd",	movsxd_insn,	1,	NONE,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 381 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsincos",	twobyte_insn,	1,	NONE,	0xD9,	0xFB,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1384 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpunpckhwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x69,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 33 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"andnpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x55,	0,	0,	CPU_SSE2,	0,	0},
#line 1245 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmptrst",	vmxtwobytemem_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_P4,	0,	0},
#line 147 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 946 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sgdt",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 719 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddbq",	sse5two_insn,	1,	NONE,	0x43,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 636 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 197 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comueqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x08,	0,	0,	CPU_SSE5,	0,	0},
#line 481 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loadall",	twobyte_insn,	1,	NONE,	0x0F,	0x07,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 713 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfrcpit2",	now3d_insn,	1,	NONE,	0xB6,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 927 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnb",	setcc_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_386,	0,	0},
#line 514 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movddup",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x12,	0,	0,	CPU_SSE3,	0,	0},
#line 790 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhrwa",	now3d_insn,	1,	NONE,	0xB7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 673 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 71 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovna",	cmovcc_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 874 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushfq",	onebyte_insn,	1,	NONE,	0x9C,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 480 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lmsw",	prot286_insn,	1,	NONE,	0x06,	0x01,	0,	0,	CPU_286,	CPU_Priv,	0},
#line 940 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setp",	setcc_insn,	1,	NONE,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 640 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1416 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vunpcklps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x14,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1419 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vzeroall",	vzero_insn,	1,	NONE,	0xC4,	0,	0,	0,	CPU_AVX,	0,	0},
#line 639 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1067 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpltps",	ssecmp_128_insn,	3,	NONE,	0x01,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 720 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddbw",	sse5two_insn,	1,	NONE,	0x41,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 420 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"insw",	onebyte_insn,	1,	NONE,	0x6D,	0x10,	0,	0,	0,	0,	0},
#line 867 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpcklwd",	mmxsse2_insn,	2,	NONE,	0x61,	0,	0,	0,	CPU_MMX,	0,	0},
#line 454 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnle",	jcc_insn,	9,	NONE,	0x0F,	0,	0,	0,	0,	0,	0},
#line 41 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"blendvps",	sse4xmm0_insn,	2,	NONE,	0x14,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 395 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fucomip",	fcom2_insn,	2,	NONE,	0xDF,	0xE8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 1117 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnltss",	ssecmp_32_insn,	4,	NONE,	0x05,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 896 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"roundpd",	sse4imm_insn,	2,	NONE,	0x09,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 728 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phadduwd",	sse5two_insn,	1,	NONE,	0x56,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 184 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1394 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vroundsd",	sse4m64imm_insn,	4,	NONE,	0x0B,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1229 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovlps",	movhlp_insn,	3,	NONE,	0x00,	0x12,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 925 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setna",	setcc_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 794 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulld",	sse4_insn,	2,	NONE,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1414 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vunpckhps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1167 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdivss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 460 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jp",	jcc_insn,	9,	NONE,	0x0A,	0,	0,	0,	0,	0,	0},
#line 793 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhw",	mmxsse2_insn,	2,	NONE,	0xE5,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1317 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpinsrq",	pinsrq_insn,	2,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 386 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fstp",	fstp_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 107 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpneqss",	ssecmp_32_insn,	4,	NONE,	0x04,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 644 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 496 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lzcnt",	cnt_insn,	3,	NONE,	0xBD,	0,	0,	0,	CPU_686,	CPU_AMD,	0},
#line 1248 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmrun",	svm_rax_insn,	2,	NONE,	0xD8,	0,	0,	0,	CPU_SVM,	0,	0},
#line 1400 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsqrtpd",	avx_xmm_xmm128_insn,	2,	NONE,	0x66,	0x51,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1192 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmsubsd",	fma_128_m64_insn,	3,	NONE,	0x7F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1004 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vandnps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x55,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1271 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddusb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDC,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 973 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"str",	str_insn,	4,	NONE,	0,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 271 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2C,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 1234 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovntpd",	movnt_insn,	1,	NONE,	0x66,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1226 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovhps",	movhlp_insn,	3,	NONE,	0x00,	0x16,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 142 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comfalsess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0B,	0,	0,	CPU_SSE5,	0,	0},
#line 567 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"outsw",	onebyte_insn,	1,	NONE,	0x6F,	0x10,	0,	0,	0,	0,	0},
#line 861 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpckhdq",	mmxsse2_insn,	2,	NONE,	0x6A,	0,	0,	0,	CPU_MMX,	0,	0},
#line 971 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stosq",	onebyte_insn,	1,	NONE,	0xAB,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 968 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x03,	0,	0,	0,	CPU_SSE,	0,	0},
#line 280 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"divsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 627 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 64 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovbe",	cmovcc_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_686,	0,	0},
#line 180 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 862 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpckhqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6D,	0,	0,	CPU_SSE2,	0,	0},
#line 1433 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xgetbv",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xD0,	0,	CPU_386,	CPU_XSAVE,	0},
#line 322 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fidivr",	fiarith_insn,	2,	NONE,	0x07,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 773 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pminuw",	sse4_insn,	2,	NONE,	0x3A,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1443 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xstore",	padlock_insn,	1,	NONE,	0xC0,	0x00,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 447 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnb",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 1193 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmsubss",	fma_128_m32_insn,	3,	NONE,	0x7E,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 806 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popf",	onebyte_insn,	1,	NONE,	0x9D,	0x00,	0x40,	0,	0,	0,	0},
#line 597 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pclmullqlqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 937 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setns",	setcc_insn,	1,	NONE,	0x09,	0,	0,	0,	CPU_386,	0,	0},
#line 424 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"into",	onebyte_insn,	1,	NONE,	0xCE,	0,	0,	NOT_64,	0,	0,	0},
#line 1215 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmlaunch",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC2,	0,	CPU_P4,	0,	0},
#line 495 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ltr",	prot286_insn,	1,	NONE,	0x03,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 692 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pdistib",	cyrixmmx_insn,	1,	NONE,	0x54,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 414 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"in",	in_insn,	12,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 327 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fist",	fiarith_insn,	2,	NONE,	0x02,	0xDB,	0,	0,	CPU_FPU,	0,	0},
#line 1189 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmaddss",	fma_128_m32_insn,	3,	NONE,	0x7A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 1355 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpshufb",	ssse3_insn,	3,	NONE,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 576 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddd",	mmxsse2_insn,	2,	NONE,	0xFE,	0,	0,	0,	CPU_MMX,	0,	0},
#line 316 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ffree",	ffree_insn,	1,	NONE,	0xDD,	0,	0,	0,	CPU_FPU,	0,	0},
#line 427 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"invlpga",	invlpga_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SVM,	0,	0},
#line 851 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubq",	mmxsse2_insn,	2,	NONE,	0xFB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1346 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmuldq",	ssse3_insn,	3,	NONE,	0x28,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 236 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunless",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 843 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psrad",	pshift_insn,	4,	NONE,	0xE2,	0x72,	0x04,	0,	CPU_MMX,	0,	0},
#line 1139 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunord_sps",	ssecmp_128_insn,	3,	NONE,	0x13,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1396 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vrsqrtps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x52,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 235 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 285 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"enter",	enter_insn,	3,	NONE,	0,	0,	0,	0,	CPU_186,	0,	0},
#line 863 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpckhwd",	mmxsse2_insn,	2,	NONE,	0x69,	0,	0,	0,	CPU_MMX,	0,	0},
#line 382 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsqrt",	twobyte_insn,	1,	NONE,	0xD9,	0xFA,	0,	0,	CPU_FPU,	0,	0},
#line 403 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fxtract",	twobyte_insn,	1,	NONE,	0xD9,	0xF4,	0,	0,	CPU_FPU,	0,	0},
#line 1262 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpackssdw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 705 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfcmpgt",	now3d_insn,	1,	NONE,	0xA0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 348 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmsubsd",	sse5arith64_insn,	8,	NONE,	0x0B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 602 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpeqq",	sse4_insn,	2,	NONE,	0x29,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 106 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpneqsd",	ssecmp_64_insn,	4,	NONE,	0x04,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 566 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"outsd",	onebyte_insn,	1,	NONE,	0x6F,	0x20,	0,	0,	CPU_386,	0,	0},
#line 663 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomned",	sse5comcc_insn,	1,	NONE,	0x4E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1308 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphaddd",	ssse3_insn,	3,	NONE,	0x02,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 534 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movq",	movq_insn,	9,	NONE,	0,	0,	0,	0,	CPU_MMX,	0,	0},
#line 354 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmaddpd",	sse5arith_insn,	4,	NONE,	0x11,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 808 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popfq",	onebyte_insn,	1,	NONE,	0x9D,	0x40,	0x40,	ONLY_64,	0,	0,	0},
#line 251 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtpd2pi",	cvt_mm_xmm_insn,	1,	NONE,	0x66,	0x2D,	0,	0,	CPU_SSE2,	0,	0},
#line 661 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltw",	sse5comcc_insn,	1,	NONE,	0x4D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 630 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 891 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ret",	retnf_insn,	6,	NONE,	0xC2,	0,	0,	0,	0,	0,	0},
#line 1048 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgt_oqsd",	ssecmp_64_insn,	4,	NONE,	0x1E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 706 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfmax",	now3d_insn,	1,	NONE,	0xA4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 380 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsin",	twobyte_insn,	1,	NONE,	0xD9,	0xFE,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 532 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntsd",	movntsd_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 577 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddq",	mmxsse2_insn,	2,	NONE,	0xD4,	0,	0,	0,	CPU_MMX,	0,	0},
#line 945 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sfence",	threebyte_insn,	1,	NONE,	0x0F,	0xAE,	0xF8,	0,	CPU_P3,	0,	0},
#line 533 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movntss",	movntss_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE4a,	0,	0},
#line 173 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 536 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movsb",	onebyte_insn,	1,	NONE,	0xA4,	0x00,	0,	0,	0,	0,	0},
#line 425 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"invd",	twobyte_insn,	1,	NONE,	0x0F,	0x08,	0,	0,	CPU_486,	CPU_Priv,	0},
#line 1142 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpunordpd",	ssecmp_128_insn,	3,	NONE,	0x03,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 320 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ficomp",	fiarith_insn,	2,	NONE,	0x03,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1439 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xsave",	twobytemem_insn,	1,	NONE,	0x04,	0x0F,	0xAE,	0,	CPU_386,	CPU_XSAVE,	0},
#line 234 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunleps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1247 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmresume",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xC3,	0,	CPU_P4,	0,	0},
#line 163 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comneqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 1107 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnleps",	ssecmp_128_insn,	3,	NONE,	0x06,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 188 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comordss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 549 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mul",	f6_insn,	4,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 675 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 69 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovl",	cmovcc_insn,	3,	NONE,	0x0C,	0,	0,	0,	CPU_686,	0,	0},
#line 897 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"roundps",	sse4imm_insn,	2,	NONE,	0x08,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 759 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaddubsw",	ssse3_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 859 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ptest",	sse4_insn,	2,	NONE,	0x17,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 391 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fsubrp",	farithp_insn,	3,	NONE,	0xE0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 590 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pavgusb",	now3d_insn,	1,	NONE,	0xBF,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 545 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movupd",	movau_insn,	6,	NONE,	0x66,	0x10,	0x01,	0,	CPU_SSE2,	0,	0},
#line 671 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomnequw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1016 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_ossd",	ssecmp_64_insn,	4,	NONE,	0x10,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 312 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fdivp",	farithp_insn,	3,	NONE,	0xF8,	0,	0,	0,	CPU_FPU,	0,	0},
#line 471 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lea",	lea_insn,	3,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1031 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalse_osps",	ssecmp_128_insn,	3,	NONE,	0x1B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 535 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movq2dq",	movq2dq_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 941 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setpe",	setcc_insn,	1,	NONE,	0x0A,	0,	0,	0,	CPU_386,	0,	0},
#line 1354 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsadbw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF6,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 751 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacssdqh",	sse5pmacs_insn,	1,	NONE,	0x8F,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 117 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpordps",	ssecmp_128_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1221 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovddup",	vmovddup_insn,	3,	NONE,	0xF2,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 227 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 232 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungtss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 245 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cpuid",	twobyte_insn,	1,	NONE,	0x0F,	0xA2,	0,	0,	CPU_486,	0,	0},
#line 1184 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubsd",	fma_128_m64_insn,	3,	NONE,	0x6F,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 396 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fucomp",	fcom2_insn,	2,	NONE,	0xDD,	0xE8,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 155 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comlesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 468 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lddqu",	lddqu_insn,	2,	NONE,	0,	0,	0,	0,	CPU_SSE3,	0,	0},
#line 1083 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneqps",	ssecmp_128_insn,	3,	NONE,	0x04,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 873 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushfd",	onebyte_insn,	1,	NONE,	0x9C,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 906 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sahf",	onebyte_insn,	1,	NONE,	0x9E,	0,	0,	0,	0,	0,	0},
#line 102 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpltsd",	ssecmp_64_insn,	4,	NONE,	0x01,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 966 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stgi",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xDC,	0,	CPU_SVM,	0,	0},
#line 1091 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngeps",	ssecmp_128_insn,	3,	NONE,	0x09,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 332 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fld",	fld_insn,	4,	NONE,	0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 333 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fld1",	twobyte_insn,	1,	NONE,	0xD9,	0xE8,	0,	0,	CPU_FPU,	0,	0},
#line 413 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"imul",	imul_insn,	19,	NONE,	0,	0,	0,	0,	0,	0,	0},
#line 1212 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vminps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 274 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"daa",	onebyte_insn,	1,	NONE,	0x27,	0,	0,	NOT_64,	0,	0,	0},
#line 834 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshuflw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF2,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 731 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddwd",	sse5two_insn,	1,	NONE,	0x46,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 594 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pclmulhqhqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x11,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 1268 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD4,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 451 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jng",	jcc_insn,	9,	NONE,	0x0E,	0,	0,	0,	0,	0,	0},
#line 620 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomequw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 211 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comulesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0A,	0,	0,	CPU_SSE5,	0,	0},
#line 362 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnop",	twobyte_insn,	1,	NONE,	0xD9,	0xD0,	0,	0,	CPU_FPU,	0,	0},
#line 1115 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnltps",	ssecmp_128_insn,	3,	NONE,	0x05,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 816 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetcht2",	twobytemem_insn,	1,	NONE,	0x03,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 1344 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovzxwd",	sse4m64_insn,	2,	NONE,	0x33,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 299 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovnb",	fcmovcc_insn,	1,	NONE,	0xDB,	0xC0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 658 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltud",	sse5comcc_insn,	1,	NONE,	0x6E,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1334 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxbd",	sse4m32_insn,	2,	NONE,	0x21,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 204 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 938 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnz",	setcc_insn,	1,	NONE,	0x05,	0,	0,	0,	CPU_386,	0,	0},
#line 278 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"divpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5E,	0,	0,	CPU_SSE2,	0,	0},
#line 866 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpcklqdq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x6C,	0,	0,	CPU_SSE2,	0,	0},
#line 121 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpps",	xmm_xmm128_imm_insn,	1,	NONE,	0x00,	0xC2,	0,	0,	CPU_SSE,	0,	0},
#line 1244 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmptrld",	vmxtwobytemem_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_P4,	0,	0},
#line 1191 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfnmsubps",	fma_128_256_insn,	4,	NONE,	0x7C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 560 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"o64",	NULL,	X86_OPERSIZE>>8,	0x40,	0,	0,	0,	ONLY_64,	0,	0,	0},
#line 822 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psadbw",	mmxsse2_insn,	2,	NONE,	0xF6,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1373 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 922 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setge",	setcc_insn,	1,	NONE,	0x0D,	0,	0,	0,	CPU_386,	0,	0},
#line 264 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtss2sd",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x5A,	0,	0,	CPU_SSE2,	0,	0},
#line 1231 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovmskps",	movmsk_insn,	4,	NONE,	0x00,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 240 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunltss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 1237 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovsd",	movsd_insn,	5,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1295 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermil2ps",	vpermil2_insn,	4,	NONE,	0x48,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 76 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovne",	cmovcc_insn,	3,	NONE,	0x05,	0,	0,	0,	CPU_686,	0,	0},
#line 1393 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vroundps",	avx_sse4imm_insn,	3,	NONE,	0x08,	0,	0,	ONLY_AVX,	CPU_SSE41,	0,	0},
#line 219 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuneqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 42 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bound",	bound_insn,	2,	NONE,	0,	0,	0,	NOT_64,	CPU_186,	0,	0},
#line 517 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movdqu",	movau_insn,	6,	NONE,	0xF3,	0x6F,	0x10,	0,	CPU_SSE2,	0,	0},
#line 847 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psrlq",	pshift_insn,	4,	NONE,	0xD3,	0x73,	0x02,	0,	CPU_MMX,	0,	0},
#line 889 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"repnz",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 1131 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmptrue_usps",	ssecmp_128_insn,	3,	NONE,	0x1F,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 511 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movapd",	movau_insn,	6,	NONE,	0x66,	0x28,	0x01,	0,	CPU_SSE2,	0,	0},
#line 1033 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalse_osss",	ssecmp_32_insn,	4,	NONE,	0x1B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 596 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pclmullqhqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x10,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 478 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lidt",	twobytemem_insn,	1,	NONE,	0x03,	0x0F,	0x01,	0,	CPU_286,	CPU_Priv,	0},
#line 714 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfrsqit1",	now3d_insn,	1,	NONE,	0xA7,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 186 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comordps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 329 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fisttp",	fildstp_insn,	3,	NONE,	0x01,	0x00,	0x01,	0,	CPU_SSE3,	0,	0},
#line 722 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phadddq",	sse5two_insn,	1,	NONE,	0x4B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1121 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpord_sss",	ssecmp_32_insn,	4,	NONE,	0x17,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 376 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"frstor",	onebytemem_insn,	1,	NONE,	0x04,	0xDD,	0,	0,	CPU_FPU,	0,	0},
#line 826 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshaw",	sse5psh_insn,	2,	NONE,	0x05,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 361 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fnmsubss",	sse5arith32_insn,	8,	NONE,	0x1A,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1235 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovntps",	movnt_insn,	1,	NONE,	0x00,	0x2B,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1273 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFD,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1001 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 721 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddd",	ssse3_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 239 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 796 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmuludq",	mmxsse2_insn,	2,	NONE,	0xF4,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1287 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpgtb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x64,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1084 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneqsd",	ssecmp_64_insn,	4,	NONE,	0x04,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 435 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jbe",	jcc_insn,	9,	NONE,	0x06,	0,	0,	0,	0,	0,	0},
#line 767 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmaxuw",	sse4_insn,	2,	NONE,	0x3E,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1032 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalse_ossd",	ssecmp_64_insn,	4,	NONE,	0x1B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1015 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_osps",	ssecmp_128_insn,	3,	NONE,	0x10,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 662 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 519 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movhpd",	movhlp_insn,	3,	NONE,	0x66,	0x16,	0,	0,	CPU_SSE2,	0,	0},
#line 283 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"dpps",	sse4imm_insn,	2,	NONE,	0x40,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 920 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sete",	setcc_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_386,	0,	0},
#line 1329 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminsw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xEA,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1057 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmple_oqss",	ssecmp_32_insn,	4,	NONE,	0x12,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 580 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddsw",	mmxsse2_insn,	2,	NONE,	0xED,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1279 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpblendvb",	avx_sse4xmm0_insn,	2,	NONE,	0x4C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1328 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpminsd",	ssse3_insn,	3,	NONE,	0x39,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 301 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovne",	fcmovcc_insn,	1,	NONE,	0xDB,	0xC8,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 633 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1149 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtdq2ps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x5B,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1311 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphminposuw",	avx_ssse3_2op_insn,	1,	NONE,	0x41,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1430 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xcryptctr",	padlock_insn,	1,	NONE,	0xD8,	0xF3,	0xA7,	0,	CPU_PadLock,	0,	0},
#line 77 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovng",	cmovcc_insn,	3,	NONE,	0x0E,	0,	0,	0,	CPU_686,	0,	0},
#line 878 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rcpps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x53,	0,	0,	CPU_SSE,	0,	0},
#line 430 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"iretq",	onebyte_insn,	1,	NONE,	0xCF,	0x40,	0,	ONLY_64,	0,	0,	0},
#line 202 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 190 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comps",	sse5com_insn,	1,	NONE,	0x2C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 442 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jl",	jcc_insn,	9,	NONE,	0x0C,	0,	0,	0,	0,	0,	0},
#line 292 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fbld",	fbldstp_insn,	1,	NONE,	0x04,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1357 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpshufhw",	xmm_xmm128_imm_insn,	1,	NONE,	0xF3,	0x70,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1128 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpsd",	cmpsd_insn,	5,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 900 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rsdc",	rsdc_insn,	1,	NONE,	0,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 1350 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmulld",	ssse3_insn,	3,	NONE,	0x40,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 95 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpeqss",	ssecmp_32_insn,	4,	NONE,	0x00,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 385 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fstenv",	twobytemem_insn,	1,	NONE,	0x06,	0x9B,	0xD9,	0,	CPU_FPU,	0,	0},
#line 649 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 291 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"faddp",	farithp_insn,	3,	NONE,	0xC0,	0,	0,	0,	CPU_FPU,	0,	0},
#line 1369 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsrldq",	pslrldq_insn,	2,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 952 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shufps",	xmm_xmm128_imm_insn,	1,	NONE,	0x00,	0xC6,	0,	0,	CPU_SSE,	0,	0},
#line 562 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"orpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x56,	0,	0,	CPU_SSE2,	0,	0},
#line 1179 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddsubps",	fma_128_256_insn,	4,	NONE,	0x5C,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 259 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtps2pi",	cvt_mm_xmm64_insn,	2,	NONE,	0x2D,	0,	0,	0,	CPU_SSE,	0,	0},
#line 730 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddw",	ssse3_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 393 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fucom",	fcom2_insn,	2,	NONE,	0xDD,	0xE0,	0,	0,	CPU_286,	CPU_FPU,	0},
#line 1079 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_usps",	ssecmp_128_insn,	3,	NONE,	0x14,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 632 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 1314 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vphsubw",	ssse3_insn,	3,	NONE,	0x05,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 490 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loopne",	loop_insn,	8,	NONE,	0x00,	0,	0,	0,	0,	0,	0},
#line 433 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jae",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 1441 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xsha1",	padlock_insn,	1,	NONE,	0xC8,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1069 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpltss",	ssecmp_32_insn,	4,	NONE,	0x01,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1040 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpge_oqsd",	ssecmp_64_insn,	4,	NONE,	0x1D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 256 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtps2dq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5B,	0,	0,	CPU_SSE2,	0,	0},
#line 99 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpless",	ssecmp_32_insn,	4,	NONE,	0x02,	0xF3,	0,	0,	CPU_SSE,	0,	0},
#line 233 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x0E,	0,	0,	CPU_SSE5,	0,	0},
#line 1241 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovupd",	movau_insn,	6,	NONE,	0x66,	0x10,	0x01,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 479 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lldt",	prot286_insn,	1,	NONE,	0x02,	0x00,	0,	0,	CPU_286,	CPU_Priv,	CPU_Prot},
#line 321 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fidiv",	fiarith_insn,	2,	NONE,	0x06,	0xDA,	0,	0,	CPU_FPU,	0,	0},
#line 1364 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsllq",	vpshift_insn,	4,	NONE,	0xF3,	0x73,	0x06,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1368 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsrld",	vpshift_insn,	4,	NONE,	0xD2,	0x72,	0x02,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 349 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fmsubss",	sse5arith32_insn,	8,	NONE,	0x0A,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 856 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubusw",	mmxsse2_insn,	2,	NONE,	0xD9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 558 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"o16",	NULL,	X86_OPERSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 1412 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vucomiss",	avx_xmm_xmm32_insn,	2,	NONE,	0x00,	0x2E,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 243 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunordsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 105 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpneqps",	ssecmp_128_insn,	3,	NONE,	0x04,	0,	0,	0,	CPU_SSE,	0,	0},
#line 828 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshld",	sse5psh_insn,	2,	NONE,	0x02,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 282 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"dppd",	sse4imm_insn,	2,	NONE,	0x41,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 497 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"maskmovdqu",	maskmovdqu_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 1267 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpaddd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xFE,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 550 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"mulpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x59,	0,	0,	CPU_SSE2,	0,	0},
#line 145 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comgesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 434 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jb",	jcc_insn,	9,	NONE,	0x02,	0,	0,	0,	0,	0,	0},
#line 1182 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmsubpd",	fma_128_256_insn,	4,	NONE,	0x6D,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 986 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sysret",	twobyte_insn,	1,	NONE,	0x0F,	0x07,	0,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 1110 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlt_uqpd",	ssecmp_128_insn,	3,	NONE,	0x15,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1199 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vinsertps",	insertps_insn,	4,	NONE,	0xC0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1256 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmxon",	vmxthreebytemem_insn,	1,	NONE,	0xF3,	0,	0,	0,	CPU_P4,	0,	0},
#line 317 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ffreep",	ffree_insn,	1,	NONE,	0xDF,	0,	0,	0,	CPU_686,	CPU_FPU,	CPU_Undoc},
#line 956 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"smi",	onebyte_insn,	1,	NONE,	0xF1,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 589 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pavgb",	mmxsse2_insn,	2,	NONE,	0xE0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1379 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 810 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"por",	mmxsse2_insn,	2,	NONE,	0xEB,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1146 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcomisd",	avx_xmm_xmm64_insn,	2,	NONE,	0x66,	0x2F,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1277 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpavgb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1238 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovshdup",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x16,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 214 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comultps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 657 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomltub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 1291 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpistri",	sse4pcmpstr_insn,	1,	NONE,	0x63,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 205 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugtpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1064 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplt_oqsd",	ssecmp_64_insn,	4,	NONE,	0x11,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 665 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneqb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1260 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpabsd",	avx_ssse3_2op_insn,	1,	NONE,	0x1E,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1090 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngepd",	ssecmp_128_insn,	3,	NONE,	0x09,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1081 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_usss",	ssecmp_32_insn,	4,	NONE,	0x14,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 513 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movd",	movd_insn,	8,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_MMX,	0},
#line 449 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnc",	jcc_insn,	9,	NONE,	0x03,	0,	0,	0,	0,	0,	0},
#line 437 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jcxz",	jcxz_insn,	2,	NONE,	0x10,	0,	0,	0,	0,	0,	0},
#line 992 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"umov",	umov_insn,	6,	NONE,	0,	0,	0,	0,	CPU_386,	CPU_Undoc,	0},
#line 1413 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vunpckhpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x15,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 306 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcomip",	fcom2_insn,	2,	NONE,	0xDF,	0xF0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 469 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ldmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_SSE,	0,	0},
#line 54 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"clc",	onebyte_insn,	1,	NONE,	0xF8,	0,	0,	0,	0,	0,	0},
#line 1052 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgtsd",	ssecmp_64_insn,	4,	NONE,	0x0E,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 746 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmachriw",	pmachriw_insn,	1,	NONE,	0,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 297 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcmovbe",	fcmovcc_insn,	1,	NONE,	0xDA,	0xD0,	0,	0,	CPU_686,	CPU_FPU,	0},
#line 452 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnge",	jcc_insn,	9,	NONE,	0x0C,	0,	0,	0,	0,	0,	0},
#line 1000 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x58,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1002 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vaddsubps",	xmm_xmm128_256_insn,	3,	NONE,	0xF2,	0xD0,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 456 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jnp",	jcc_insn,	9,	NONE,	0x0B,	0,	0,	0,	0,	0,	0},
#line 189 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"compd",	sse5com_insn,	1,	NONE,	0x2D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 755 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacswd",	sse5pmacs_insn,	1,	NONE,	0x96,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1335 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmovsxbq",	sse4m16_insn,	2,	NONE,	0x22,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 871 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushaw",	onebyte_insn,	1,	NONE,	0x60,	0x10,	0,	NOT_64,	CPU_186,	0,	0},
#line 109 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnleps",	ssecmp_128_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1148 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcvtdq2pd",	avx_cvt_xmm64_insn,	3,	NONE,	0xF3,	0xE6,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 114 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnltsd",	ssecmp_64_insn,	4,	NONE,	0x05,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 473 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"les",	ldes_insn,	2,	NONE,	0xC4,	0,	0,	NOT_64,	0,	0,	0},
#line 1236 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovq",	vmovq_insn,	5,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1088 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnge_uqsd",	ssecmp_64_insn,	4,	NONE,	0x19,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 677 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomnew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 11 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"a16",	NULL,	X86_ADDRSIZE>>8,	0x10,	0,	0,	0,	0,	0,	0,	0},
#line 915 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"seta",	setcc_insn,	1,	NONE,	0x07,	0,	0,	0,	CPU_386,	0,	0},
#line 742 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pinsrb",	pinsrb_insn,	4,	NONE,	0,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 625 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalseub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 1204 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmaskmovps",	vmaskmov_insn,	4,	NONE,	0x2C,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 172 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngess",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 493 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lsl",	bsfr_insn,	3,	NONE,	0x03,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 462 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jpo",	jcc_insn,	9,	NONE,	0x0B,	0,	0,	0,	0,	0,	0},
#line 255 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtpi2ps",	cvt_xmm_mm_ps_insn,	1,	NONE,	0x2A,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1018 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_uqpd",	ssecmp_128_insn,	3,	NONE,	0x08,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 876 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pxor",	mmxsse2_insn,	2,	NONE,	0xEF,	0,	0,	0,	CPU_MMX,	0,	0},
#line 101 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpltps",	ssecmp_128_insn,	3,	NONE,	0x01,	0,	0,	0,	CPU_SSE,	0,	0},
#line 1276 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpandn",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xDF,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 883 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rdshr",	rdwrshr_insn,	1,	NONE,	0x00,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 823 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshab",	sse5psh_insn,	2,	NONE,	0x04,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 926 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setnae",	setcc_insn,	1,	NONE,	0x02,	0,	0,	0,	CPU_386,	0,	0},
#line 1037 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalsess",	ssecmp_32_insn,	4,	NONE,	0x0B,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 34 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"andnps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x55,	0,	0,	CPU_SSE,	0,	0},
#line 428 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"iret",	onebyte_insn,	1,	NONE,	0xCF,	0,	0,	0,	0,	0,	0},
#line 735 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phsubd",	ssse3_insn,	3,	NONE,	0x06,	0,	0,	0,	CPU_SSSE3,	0,	0},
#line 1165 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdivps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5E,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 432 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"ja",	jcc_insn,	9,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 865 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"punpckldq",	mmxsse2_insn,	2,	NONE,	0x62,	0,	0,	0,	CPU_MMX,	0,	0},
#line 967 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sti",	onebyte_insn,	1,	NONE,	0xFB,	0,	0,	0,	0,	0,	0},
#line 854 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubsw",	mmxsse2_insn,	2,	NONE,	0xE9,	0,	0,	0,	CPU_MMX,	0,	0},
#line 641 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgtub",	sse5comcc_insn,	1,	NONE,	0x6C,	0x02,	0,	0,	CPU_SSE5,	0,	0},
#line 1073 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_oqss",	ssecmp_32_insn,	4,	NONE,	0x0C,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 162 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comneps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 509 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"montmul",	padlock_insn,	1,	NONE,	0xC0,	0xF3,	0xA6,	0,	CPU_PadLock,	0,	0},
#line 1284 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpeqw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x75,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 791 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmulhrwc",	cyrixmmx_insn,	1,	NONE,	0x59,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 79 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnl",	cmovcc_insn,	3,	NONE,	0x0D,	0,	0,	0,	CPU_686,	0,	0},
#line 803 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popad",	onebyte_insn,	1,	NONE,	0x61,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 996 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"unpcklps",	xmm_xmm128_insn,	2,	NONE,	0x00,	0x14,	0,	0,	CPU_SSE,	0,	0},
#line 1177 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vfmaddss",	fma_128_m32_insn,	3,	NONE,	0x6A,	0,	0,	ONLY_AVX,	CPU_FMA,	0,	0},
#line 595 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pclmulhqlqdq",	pclmulqdq_fixed_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_CLMUL,	0,	0},
#line 203 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comugesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 402 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fxsave",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0xAE,	0,	CPU_686,	CPU_FPU,	0},
#line 681 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueq",	sse5comcc_insn,	1,	NONE,	0x4F,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 26 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"aesdec",	aes_insn,	1,	NONE,	0x38,	0xDE,	0,	0,	CPU_AES,	0,	0},
#line 1404 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vstmxcsr",	ldstmxcsr_insn,	1,	NONE,	0x03,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1036 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalsesd",	ssecmp_64_insn,	4,	NONE,	0x0B,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 32 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"and",	arith_insn,	22,	NONE,	0x20,	0x04,	0,	0,	0,	0,	0},
#line 177 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnlepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 607 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpgtd",	mmxsse2_insn,	2,	NONE,	0x66,	0,	0,	0,	CPU_MMX,	0,	0},
#line 870 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pushad",	onebyte_insn,	1,	NONE,	0x60,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 635 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomgeuq",	sse5comcc_insn,	1,	NONE,	0x6F,	0x03,	0,	0,	CPU_SSE5,	0,	0},
#line 756 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacsww",	sse5pmacs_insn,	1,	NONE,	0x95,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 127 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpunordpd",	ssecmp_128_insn,	3,	NONE,	0x03,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 1406 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vsubps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x5C,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1320 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmaddwd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xF5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1290 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpgtw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x65,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 970 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"stosd",	onebyte_insn,	1,	NONE,	0xAB,	0x20,	0,	0,	CPU_386,	0,	0},
#line 1010 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vblendvps",	avx_sse4xmm0_insn,	2,	NONE,	0x4A,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1424 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"wrshr",	rdwrshr_insn,	1,	NONE,	0x01,	0,	0,	0,	CPU_686,	CPU_Cyrix,	CPU_SMM},
#line 74 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmovnbe",	cmovcc_insn,	3,	NONE,	0x07,	0,	0,	0,	CPU_686,	0,	0},
#line 171 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 1239 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovsldup",	avx_xmm_xmm128_insn,	2,	NONE,	0xF3,	0x12,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 708 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfmul",	now3d_insn,	1,	NONE,	0xB4,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 472 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"leave",	onebyte_insn,	1,	NONE,	0xC9,	0x00,	0x40,	0,	CPU_186,	0,	0},
#line 1019 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_uqps",	ssecmp_128_insn,	3,	NONE,	0x08,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1265 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpackuswb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x67,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 183 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnltsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 1281 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpeqb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x74,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 761 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmagw",	cyrixmmx_insn,	1,	NONE,	0x52,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 1375 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubsb",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE8,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 52 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cdq",	onebyte_insn,	1,	NONE,	0x99,	0x20,	0,	0,	CPU_386,	0,	0},
#line 909 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sar",	shift_insn,	16,	NONE,	0x07,	0,	0,	0,	0,	0,	0},
#line 489 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"loope",	loop_insn,	8,	NONE,	0x01,	0,	0,	0,	0,	0,	0},
#line 40 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"blendvpd",	sse4xmm0_insn,	2,	NONE,	0x15,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1092 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngesd",	ssecmp_64_insn,	4,	NONE,	0x09,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1251 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmulps",	xmm_xmm128_256_insn,	3,	NONE,	0x00,	0x59,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 22 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addsd",	xmm_xmm64_insn,	4,	NONE,	0xF2,	0x58,	0,	0,	CPU_SSE2,	0,	0},
#line 225 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comungepd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1198 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vinsertf128",	vinsertf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1042 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgepd",	ssecmp_128_insn,	3,	NONE,	0x0D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 110 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpnlesd",	ssecmp_64_insn,	4,	NONE,	0x06,	0xF2,	0,	0,	CPU_SSE2,	0,	0},
#line 266 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttpd2dq",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xE6,	0,	0,	CPU_SSE2,	0,	0},
#line 126 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpsw",	onebyte_insn,	1,	NONE,	0xA7,	0x10,	0,	0,	0,	0,	0},
#line 812 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetch",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x0D,	0,	CPU_3DNow,	0,	0},
#line 852 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubsb",	mmxsse2_insn,	2,	NONE,	0xE8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 574 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"packuswb",	mmxsse2_insn,	2,	NONE,	0x67,	0,	0,	0,	CPU_MMX,	0,	0},
#line 1011 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vbroadcastf128",	vbroadcastf128_insn,	1,	NONE,	0,	0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 807 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"popfd",	onebyte_insn,	1,	NONE,	0x9D,	0x20,	0,	NOT_64,	CPU_386,	0,	0},
#line 980 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"svldt",	cyrixsmm_insn,	1,	NONE,	0x7A,	0,	0,	0,	CPU_486,	CPU_Cyrix,	CPU_SMM},
#line 749 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacsdql",	sse5pmacs_insn,	1,	NONE,	0x97,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 703 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfcmpeq",	now3d_insn,	1,	NONE,	0xB0,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1168 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vdppd",	sse4imm_insn,	2,	NONE,	0x41,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1068 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpltsd",	ssecmp_64_insn,	4,	NONE,	0x01,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 716 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pfsub",	now3d_insn,	1,	NONE,	0x9A,	0,	0,	0,	CPU_3DNow,	0,	0},
#line 1196 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vhsubpd",	xmm_xmm128_256_insn,	3,	NONE,	0x66,	0x7D,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1017 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeq_osss",	ssecmp_32_insn,	4,	NONE,	0x10,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1246 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmread",	vmxmemrd_insn,	2,	NONE,	0,	0,	0,	0,	CPU_P4,	0,	0},
#line 1378 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpsubusw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD9,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 265 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvtss2si",	cvt_rx_xmm32_insn,	4,	NONE,	0xF3,	0x2D,	0,	0,	CPU_386,	CPU_SSE,	0},
#line 46 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bt",	bittest_insn,	6,	NONE,	0xA3,	0x04,	0,	0,	CPU_386,	0,	0},
#line 853 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubsiw",	cyrixmmx_insn,	1,	NONE,	0x55,	0,	0,	0,	CPU_Cyrix,	CPU_MMX,	0},
#line 104 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cmpneqpd",	ssecmp_128_insn,	3,	NONE,	0x04,	0x66,	0,	0,	CPU_SSE,	0,	0},
#line 223 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunesd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 269 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"cvttps2pi",	cvt_mm_xmm64_insn,	2,	NONE,	0x2C,	0,	0,	0,	CPU_SSE,	0,	0},
#line 518 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movhlps",	movhllhps_insn,	2,	NONE,	0x12,	0,	0,	0,	CPU_SSE,	0,	0},
#line 573 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"packusdw",	sse4_insn,	2,	NONE,	0x2B,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 220 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuneqps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 985 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"sysexit",	twobyte_insn,	1,	NONE,	0x0F,	0x35,	0,	NOT_64,	CPU_686,	CPU_Priv,	0},
#line 1299 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpermilmz2ps",	vpermil2_fixed_insn,	4,	NONE,	0x48,	0x03,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 168 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comness",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 504 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"minpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x5D,	0,	0,	CPU_SSE2,	0,	0},
#line 582 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"paddusw",	mmxsse2_insn,	2,	NONE,	0xDD,	0,	0,	0,	CPU_MMX,	0,	0},
#line 218 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuneps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 1099 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpngtps",	ssecmp_128_insn,	3,	NONE,	0x0A,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 646 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomleb",	sse5comcc_insn,	1,	NONE,	0x4C,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 1058 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplepd",	ssecmp_128_insn,	3,	NONE,	0x02,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 304 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fcom",	fcom_insn,	5,	NONE,	0xD0,	0x02,	0,	0,	CPU_FPU,	0,	0},
#line 1035 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalseps",	ssecmp_128_insn,	3,	NONE,	0x0B,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1390 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vrcpps",	avx_xmm_xmm128_insn,	2,	NONE,	0x00,	0x53,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 849 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psubb",	mmxsse2_insn,	2,	NONE,	0xF8,	0,	0,	0,	CPU_MMX,	0,	0},
#line 18 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"adc",	arith_insn,	22,	NONE,	0x10,	0x02,	0,	0,	0,	0,	0},
#line 888 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"repne",	NULL,	X86_LOCKREP>>8,	0xF2,	0,	0,	0,	0,	0,	0,	0},
#line 35 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"andpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x54,	0,	0,	CPU_SSE2,	0,	0},
#line 666 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomneqd",	sse5comcc_insn,	1,	NONE,	0x4E,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 341 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fldz",	twobyte_insn,	1,	NONE,	0xD9,	0xEE,	0,	0,	CPU_FPU,	0,	0},
#line 881 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rdmsr",	twobyte_insn,	1,	NONE,	0x0F,	0x32,	0,	0,	CPU_586,	CPU_Priv,	0},
#line 465 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jz",	jcc_insn,	9,	NONE,	0x04,	0,	0,	0,	0,	0,	0},
#line 611 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcmpistrm",	sse4pcmpstr_insn,	1,	NONE,	0x62,	0,	0,	0,	CPU_SSE42,	0,	0},
#line 1049 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgt_oqss",	ssecmp_32_insn,	4,	NONE,	0x1E,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 398 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"fwait",	onebyte_insn,	1,	NONE,	0x9B,	0,	0,	0,	CPU_FPU,	0,	0},
#line 698 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pextrw",	pextrw_insn,	7,	NONE,	0,	0,	0,	0,	CPU_MMX,	CPU_P3,	0},
#line 1288 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpcmpgtd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 276 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"dec",	incdec_insn,	6,	NONE,	0x48,	0x01,	0,	0,	0,	0,	0},
#line 485 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lodsd",	onebyte_insn,	1,	NONE,	0xAD,	0x20,	0,	0,	CPU_386,	0,	0},
#line 467 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"lar",	bsfr_insn,	3,	NONE,	0x02,	0,	0,	0,	CPU_286,	CPU_Prot,	0},
#line 653 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomlew",	sse5comcc_insn,	1,	NONE,	0x4D,	0x01,	0,	0,	CPU_SSE5,	0,	0},
#line 165 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comneqsd",	sse5comcc64_insn,	2,	NONE,	0x2F,	0x04,	0,	0,	CPU_SSE5,	0,	0},
#line 727 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"phaddudq",	sse5two_insn,	1,	NONE,	0x5B,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 1351 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vpmullw",	xmm_xmm128_insn,	2,	NONE,	0x66,	0xD5,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 832 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshufd",	xmm_xmm128_imm_insn,	1,	NONE,	0x66,	0x70,	0,	0,	CPU_SSE2,	0,	0},
#line 43 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"bsf",	bsfr_insn,	3,	NONE,	0xBC,	0,	0,	0,	CPU_386,	0,	0},
#line 825 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pshaq",	sse5psh_insn,	2,	NONE,	0x07,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 846 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"psrldq",	pslrldq_insn,	2,	NONE,	0x03,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 623 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomfalsed",	sse5comcc_insn,	1,	NONE,	0x4E,	0x06,	0,	0,	CPU_SSE5,	0,	0},
#line 885 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"rdtscp",	threebyte_insn,	1,	NONE,	0x0F,	0x01,	0xF9,	0,	CPU_686,	CPU_AMD,	CPU_Priv},
#line 931 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setng",	setcc_insn,	1,	NONE,	0x0E,	0,	0,	0,	CPU_386,	0,	0},
#line 957 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"smint",	twobyte_insn,	1,	NONE,	0x0F,	0x38,	0,	0,	CPU_686,	CPU_Cyrix,	0},
#line 918 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"setbe",	setcc_insn,	1,	NONE,	0x06,	0,	0,	0,	CPU_386,	0,	0},
#line 409 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"hsubpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x7D,	0,	0,	CPU_SSE3,	0,	0},
#line 1034 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpfalsepd",	ssecmp_128_insn,	3,	NONE,	0x0B,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 776 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmovsxbq",	sse4m16_insn,	2,	NONE,	0x22,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 1436 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"xorpd",	xmm_xmm128_insn,	2,	NONE,	0x66,	0x57,	0,	0,	CPU_SSE2,	0,	0},
#line 1227 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vmovlhps",	movhllhps_insn,	2,	NONE,	0x16,	0xC0,	0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1044 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpgesd",	ssecmp_64_insn,	4,	NONE,	0x0D,	0xF2,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 224 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuness",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 222 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comuneqss",	sse5comcc32_insn,	2,	NONE,	0x2E,	0x0C,	0,	0,	CPU_SSE5,	0,	0},
#line 748 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pmacsdqh",	sse5pmacs_insn,	1,	NONE,	0x9F,	0,	0,	0,	CPU_SSE5,	0,	0},
#line 461 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"jpe",	jcc_insn,	9,	NONE,	0x0A,	0,	0,	0,	0,	0,	0},
#line 1119 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpord_sps",	ssecmp_128_insn,	3,	NONE,	0x17,	0x00,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1102 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnle_uqpd",	ssecmp_128_insn,	3,	NONE,	0x16,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 744 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pinsrq",	pinsrq_insn,	2,	NONE,	0,	0,	0,	ONLY_64,	CPU_SSE41,	0,	0},
#line 911 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"scasb",	onebyte_insn,	1,	NONE,	0xAE,	0x00,	0,	0,	0,	0,	0},
#line 170 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comngeps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x09,	0,	0,	CPU_SSE5,	0,	0},
#line 950 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"shrd",	shlrd_insn,	9,	NONE,	0xAC,	0,	0,	0,	CPU_386,	0,	0},
#line 1029 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpeqss",	ssecmp_32_insn,	4,	NONE,	0x00,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1065 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmplt_oqss",	ssecmp_32_insn,	4,	NONE,	0x11,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 515 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"movdq2q",	movdq2q_insn,	1,	NONE,	0,	0,	0,	0,	CPU_SSE2,	0,	0},
#line 135 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comeqpd",	sse5comcc_insn,	1,	NONE,	0x2D,	0x00,	0,	0,	CPU_SSE5,	0,	0},
#line 813 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"prefetchnta",	twobytemem_insn,	1,	NONE,	0x00,	0x0F,	0x18,	0,	CPU_P3,	0,	0},
#line 685 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pcomtrueuw",	sse5comcc_insn,	1,	NONE,	0x6D,	0x07,	0,	0,	CPU_SSE5,	0,	0},
#line 1074 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpneq_ospd",	ssecmp_128_insn,	3,	NONE,	0x1C,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1038 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpge_oqpd",	ssecmp_128_insn,	3,	NONE,	0x1D,	0x66,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 1113 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"vcmpnlt_uqss",	ssecmp_32_insn,	4,	NONE,	0x15,	0xF3,	0xC0,	ONLY_AVX,	CPU_AVX,	0,	0},
#line 238 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comunltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x0D,	0,	0,	CPU_SSE5,	0,	0},
#line 592 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"pblendvb",	sse4xmm0_insn,	2,	NONE,	0x10,	0,	0,	0,	CPU_SSE41,	0,	0},
#line 182 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"comnltps",	sse5comcc_insn,	1,	NONE,	0x2C,	0x05,	0,	0,	CPU_SSE5,	0,	0},
#line 23 "/workspaces/sniper/benchmarks/parsec/parsec-2.1/./pkgs/tools/yasm/src/x86insn_nasm.gperf"
    {"addss",	xmm_xmm32_insn,	4,	NONE,	0xF3,	0x58,	0,	0,	CPU_SSE,	0,	0}
  };
  static const unsigned short tab[] = {
    1213,764,567,0,0,0,1095,1432,605,11,281,1000,1140,323,1044,0,
    0,427,0,281,702,11,83,83,0,323,702,427,323,0,281,764,
    1091,64,1140,702,764,1044,0,1042,0,630,988,1140,1140,1312,0,630,
    323,83,665,133,0,702,323,11,764,83,1312,197,665,1481,746,1140,
    0,11,702,508,0,323,764,864,864,0,665,281,0,517,0,1165,
    1140,1140,1312,1140,1481,702,1312,11,1432,764,988,721,0,665,702,0,
    1140,323,0,83,323,83,764,1481,0,665,1140,281,823,1189,1116,323,
    891,1312,1140,0,1074,0,665,358,288,83,0,605,829,1140,988,0,
    0,1042,1140,1312,574,11,764,0,1279,1042,1116,0,517,11,0,83,
    281,323,0,1109,197,83,0,665,1089,1140,605,323,764,1042,988,1213,
    1218,1140,1140,764,1481,517,630,1042,1034,0,764,0,1109,323,399,988,
    665,1109,1140,1218,159,348,746,1042,1042,781,323,764,1399,0,517,764,
    11,11,1140,281,83,1185,1027,0,1044,0,604,517,0,665,1042,517,
    0,1140,702,1044,909,1509,1042,323,333,1312,1042,764,11,528,1034,665,
    1140,1213,764,399,0,1481,323,1338,764,630,517,1109,111,1140,823,348,
    567,702,630,508,665,0,288,597,83,1109,427,64,864,440,702,1185,
    0,1140,630,281,1312,1212,0,764,864,1213,1399,281,1074,348,1312,665,
    0,1109,665,629,506,823,64,517,180,764,823,427,815,891,1116,281,
    764,605,733,988,829,0,630,702,427,94,1338,517,864,1140,0,323,
    517,508,1089,803,323,826,83,553,525,1109,1103,11,0,764,702,1044,
    1034,11,823,1105,323,338,517,281,1432,764,665,1213,197,764,11,517,
    894,0,1089,764,630,605,728,1044,656,702,864,665,665,1379,574,1399,
    0,702,159,924,403,793,762,1140,1203,0,702,1116,0,793,630,630,
    702,0,1204,793,1252,764,94,1295,179,1213,517,1044,333,1189,1050,605,
    281,793,1236,440,517,1140,271,1379,281,187,864,824,76,358,1338,0,
    1312,864,51,11,0,323,444,746,1095,323,1044,764,10,824,83,47,
    1481,0,0,764,0,702,764,0,1140,1312,1116,399,0,764,1212,574,
    403,109,764,1477,665,1195,629,857,399,1042,0,764,693,0,702,51,
    747,567,1312,843,937,0,1082,333,1119,1185,864,11,1263,1185,11,755,
    336,629,1159,629,799,83,764,597,1411,1312,900,0,799,829,0,1312,
    338,552,1162,0,933,1140,1223,1287,11,1043,232,1530,702,665,1105,1116,
    281,1140,0,793,197,0,1232,0,351,0,1140,1101,764,704,605,188,
  };

  const struct insnprefix_parse_data *ret;
  unsigned long rsl, val = phash_lookup(key, len, 0xbe1e08bbUL);
  rsl = ((val>>23)^tab[val&0x1ff]);
  if (rsl >= 1434) return NULL;
  ret = &pd[rsl];
  if (strcmp(key, ret->name) != 0) return NULL;
  return ret;
}

