                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 2.9.0 #5416 (Mar 22 2009) (MINGW32)
                              4 ; This file was generated Mon Sep 17 17:45:48 2018
                              5 ;--------------------------------------------------------
                              6 	.module test_led
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _second_animation
                             14 	.globl _first_animation
                             15 	.globl _delay
                             16 	.globl _SPR0
                             17 	.globl _SPR1
                             18 	.globl _CPHA
                             19 	.globl _CPOL
                             20 	.globl _SPIM
                             21 	.globl _SPE
                             22 	.globl _WCOL
                             23 	.globl _ISPI
                             24 	.globl _I2CI
                             25 	.globl _I2CTX
                             26 	.globl _I2CRS
                             27 	.globl _I2CM
                             28 	.globl _MDI
                             29 	.globl _MCO
                             30 	.globl _MDE
                             31 	.globl _MDO
                             32 	.globl _CS0
                             33 	.globl _CS1
                             34 	.globl _CS2
                             35 	.globl _CS3
                             36 	.globl _SCONV
                             37 	.globl _CCONV
                             38 	.globl _DMA
                             39 	.globl _ADCI
                             40 	.globl _P
                             41 	.globl _F1
                             42 	.globl _OV
                             43 	.globl _RS0
                             44 	.globl _RS1
                             45 	.globl _F0
                             46 	.globl _AC
                             47 	.globl _CY
                             48 	.globl _CAP2
                             49 	.globl _CNT2
                             50 	.globl _TR2
                             51 	.globl _XEN
                             52 	.globl _TCLK
                             53 	.globl _RCLK
                             54 	.globl _EXF2
                             55 	.globl _TF2
                             56 	.globl _WDE
                             57 	.globl _WDS
                             58 	.globl _WDR2
                             59 	.globl _WDR1
                             60 	.globl _PRE0
                             61 	.globl _PRE1
                             62 	.globl _PRE2
                             63 	.globl _PX0
                             64 	.globl _PT0
                             65 	.globl _PX1
                             66 	.globl _PT1
                             67 	.globl _PS
                             68 	.globl _PT2
                             69 	.globl _PADC
                             70 	.globl _PSI
                             71 	.globl _RXD
                             72 	.globl _TXD
                             73 	.globl _INT0
                             74 	.globl _INT1
                             75 	.globl _T0
                             76 	.globl _T1
                             77 	.globl _WR
                             78 	.globl _RD
                             79 	.globl _EX0
                             80 	.globl _ET0
                             81 	.globl _EX1
                             82 	.globl _ET1
                             83 	.globl _ES
                             84 	.globl _ET2
                             85 	.globl _EADC
                             86 	.globl _EA
                             87 	.globl _RI
                             88 	.globl _TI
                             89 	.globl _RB8
                             90 	.globl _TB8
                             91 	.globl _REN
                             92 	.globl _SM2
                             93 	.globl _SM1
                             94 	.globl _SM0
                             95 	.globl _T2
                             96 	.globl _T2EX
                             97 	.globl _IT0
                             98 	.globl _IE0
                             99 	.globl _IT1
                            100 	.globl _IE1
                            101 	.globl _TR0
                            102 	.globl _TF0
                            103 	.globl _TR1
                            104 	.globl _TF1
                            105 	.globl _DACCON
                            106 	.globl _DAC1H
                            107 	.globl _DAC1L
                            108 	.globl _DAC0H
                            109 	.globl _DAC0L
                            110 	.globl _SPICON
                            111 	.globl _SPIDAT
                            112 	.globl _ADCCON3
                            113 	.globl _ADCGAINH
                            114 	.globl _ADCGAINL
                            115 	.globl _ADCOFSH
                            116 	.globl _ADCOFSL
                            117 	.globl _B
                            118 	.globl _ADCCON1
                            119 	.globl _I2CCON
                            120 	.globl _ACC
                            121 	.globl _PSMCON
                            122 	.globl _ADCDATAH
                            123 	.globl _ADCDATAL
                            124 	.globl _ADCCON2
                            125 	.globl _DMAP
                            126 	.globl _DMAH
                            127 	.globl _DMAL
                            128 	.globl _PSW
                            129 	.globl _TH2
                            130 	.globl _TL2
                            131 	.globl _RCAP2H
                            132 	.globl _RCAP2L
                            133 	.globl _T2CON
                            134 	.globl _EADRL
                            135 	.globl _WDCON
                            136 	.globl _EDATA4
                            137 	.globl _EDATA3
                            138 	.globl _EDATA2
                            139 	.globl _EDATA1
                            140 	.globl _ETIM3
                            141 	.globl _ETIM2
                            142 	.globl _ETIM1
                            143 	.globl _ECON
                            144 	.globl _IP
                            145 	.globl _P3
                            146 	.globl _IE2
                            147 	.globl _IE
                            148 	.globl _P2
                            149 	.globl _I2CADD
                            150 	.globl _I2CDAT
                            151 	.globl _SBUF
                            152 	.globl _SCON
                            153 	.globl _P1
                            154 	.globl _TH1
                            155 	.globl _TH0
                            156 	.globl _TL1
                            157 	.globl _TL0
                            158 	.globl _TMOD
                            159 	.globl _TCON
                            160 	.globl _PCON
                            161 	.globl _DPP
                            162 	.globl _DPH
                            163 	.globl _DPL
                            164 	.globl _SP
                            165 	.globl _P0
                            166 ;--------------------------------------------------------
                            167 ; special function registers
                            168 ;--------------------------------------------------------
                            169 	.area RSEG    (DATA)
                    0080    170 _P0	=	0x0080
                    0081    171 _SP	=	0x0081
                    0082    172 _DPL	=	0x0082
                    0083    173 _DPH	=	0x0083
                    0084    174 _DPP	=	0x0084
                    0087    175 _PCON	=	0x0087
                    0088    176 _TCON	=	0x0088
                    0089    177 _TMOD	=	0x0089
                    008A    178 _TL0	=	0x008a
                    008B    179 _TL1	=	0x008b
                    008C    180 _TH0	=	0x008c
                    008D    181 _TH1	=	0x008d
                    0090    182 _P1	=	0x0090
                    0098    183 _SCON	=	0x0098
                    0099    184 _SBUF	=	0x0099
                    009A    185 _I2CDAT	=	0x009a
                    009B    186 _I2CADD	=	0x009b
                    00A0    187 _P2	=	0x00a0
                    00A8    188 _IE	=	0x00a8
                    00A9    189 _IE2	=	0x00a9
                    00B0    190 _P3	=	0x00b0
                    00B8    191 _IP	=	0x00b8
                    00B9    192 _ECON	=	0x00b9
                    00BA    193 _ETIM1	=	0x00ba
                    00BB    194 _ETIM2	=	0x00bb
                    00C4    195 _ETIM3	=	0x00c4
                    00BC    196 _EDATA1	=	0x00bc
                    00BD    197 _EDATA2	=	0x00bd
                    00BE    198 _EDATA3	=	0x00be
                    00BF    199 _EDATA4	=	0x00bf
                    00C0    200 _WDCON	=	0x00c0
                    00C6    201 _EADRL	=	0x00c6
                    00C8    202 _T2CON	=	0x00c8
                    00CA    203 _RCAP2L	=	0x00ca
                    00CB    204 _RCAP2H	=	0x00cb
                    00CC    205 _TL2	=	0x00cc
                    00CD    206 _TH2	=	0x00cd
                    00D0    207 _PSW	=	0x00d0
                    00D2    208 _DMAL	=	0x00d2
                    00D3    209 _DMAH	=	0x00d3
                    00D4    210 _DMAP	=	0x00d4
                    00D8    211 _ADCCON2	=	0x00d8
                    00D9    212 _ADCDATAL	=	0x00d9
                    00DA    213 _ADCDATAH	=	0x00da
                    00DF    214 _PSMCON	=	0x00df
                    00E0    215 _ACC	=	0x00e0
                    00E8    216 _I2CCON	=	0x00e8
                    00EF    217 _ADCCON1	=	0x00ef
                    00F0    218 _B	=	0x00f0
                    00F1    219 _ADCOFSL	=	0x00f1
                    00F2    220 _ADCOFSH	=	0x00f2
                    00F3    221 _ADCGAINL	=	0x00f3
                    00F4    222 _ADCGAINH	=	0x00f4
                    00F5    223 _ADCCON3	=	0x00f5
                    00F7    224 _SPIDAT	=	0x00f7
                    00F8    225 _SPICON	=	0x00f8
                    00F9    226 _DAC0L	=	0x00f9
                    00FA    227 _DAC0H	=	0x00fa
                    00FB    228 _DAC1L	=	0x00fb
                    00FC    229 _DAC1H	=	0x00fc
                    00FD    230 _DACCON	=	0x00fd
                            231 ;--------------------------------------------------------
                            232 ; special function bits
                            233 ;--------------------------------------------------------
                            234 	.area RSEG    (DATA)
                    008F    235 _TF1	=	0x008f
                    008E    236 _TR1	=	0x008e
                    008D    237 _TF0	=	0x008d
                    008C    238 _TR0	=	0x008c
                    008B    239 _IE1	=	0x008b
                    008A    240 _IT1	=	0x008a
                    0089    241 _IE0	=	0x0089
                    0088    242 _IT0	=	0x0088
                    0091    243 _T2EX	=	0x0091
                    0090    244 _T2	=	0x0090
                    009F    245 _SM0	=	0x009f
                    009E    246 _SM1	=	0x009e
                    009D    247 _SM2	=	0x009d
                    009C    248 _REN	=	0x009c
                    009B    249 _TB8	=	0x009b
                    009A    250 _RB8	=	0x009a
                    0099    251 _TI	=	0x0099
                    0098    252 _RI	=	0x0098
                    00AF    253 _EA	=	0x00af
                    00AE    254 _EADC	=	0x00ae
                    00AD    255 _ET2	=	0x00ad
                    00AC    256 _ES	=	0x00ac
                    00AB    257 _ET1	=	0x00ab
                    00AA    258 _EX1	=	0x00aa
                    00A9    259 _ET0	=	0x00a9
                    00A8    260 _EX0	=	0x00a8
                    00B7    261 _RD	=	0x00b7
                    00B6    262 _WR	=	0x00b6
                    00B5    263 _T1	=	0x00b5
                    00B4    264 _T0	=	0x00b4
                    00B3    265 _INT1	=	0x00b3
                    00B2    266 _INT0	=	0x00b2
                    00B1    267 _TXD	=	0x00b1
                    00B0    268 _RXD	=	0x00b0
                    00BF    269 _PSI	=	0x00bf
                    00BE    270 _PADC	=	0x00be
                    00BD    271 _PT2	=	0x00bd
                    00BC    272 _PS	=	0x00bc
                    00BB    273 _PT1	=	0x00bb
                    00BA    274 _PX1	=	0x00ba
                    00B9    275 _PT0	=	0x00b9
                    00B8    276 _PX0	=	0x00b8
                    00C7    277 _PRE2	=	0x00c7
                    00C6    278 _PRE1	=	0x00c6
                    00C5    279 _PRE0	=	0x00c5
                    00C3    280 _WDR1	=	0x00c3
                    00C2    281 _WDR2	=	0x00c2
                    00C1    282 _WDS	=	0x00c1
                    00C0    283 _WDE	=	0x00c0
                    00CF    284 _TF2	=	0x00cf
                    00CE    285 _EXF2	=	0x00ce
                    00CD    286 _RCLK	=	0x00cd
                    00CC    287 _TCLK	=	0x00cc
                    00CB    288 _XEN	=	0x00cb
                    00CA    289 _TR2	=	0x00ca
                    00C9    290 _CNT2	=	0x00c9
                    00C8    291 _CAP2	=	0x00c8
                    00D7    292 _CY	=	0x00d7
                    00D6    293 _AC	=	0x00d6
                    00D5    294 _F0	=	0x00d5
                    00D4    295 _RS1	=	0x00d4
                    00D3    296 _RS0	=	0x00d3
                    00D2    297 _OV	=	0x00d2
                    00D1    298 _F1	=	0x00d1
                    00D0    299 _P	=	0x00d0
                    00DF    300 _ADCI	=	0x00df
                    00DE    301 _DMA	=	0x00de
                    00DD    302 _CCONV	=	0x00dd
                    00DC    303 _SCONV	=	0x00dc
                    00DB    304 _CS3	=	0x00db
                    00DA    305 _CS2	=	0x00da
                    00D9    306 _CS1	=	0x00d9
                    00D8    307 _CS0	=	0x00d8
                    00EF    308 _MDO	=	0x00ef
                    00EE    309 _MDE	=	0x00ee
                    00ED    310 _MCO	=	0x00ed
                    00EC    311 _MDI	=	0x00ec
                    00EB    312 _I2CM	=	0x00eb
                    00EA    313 _I2CRS	=	0x00ea
                    00E9    314 _I2CTX	=	0x00e9
                    00E8    315 _I2CI	=	0x00e8
                    00FF    316 _ISPI	=	0x00ff
                    00FE    317 _WCOL	=	0x00fe
                    00FD    318 _SPE	=	0x00fd
                    00FC    319 _SPIM	=	0x00fc
                    00FB    320 _CPOL	=	0x00fb
                    00FA    321 _CPHA	=	0x00fa
                    00F9    322 _SPR1	=	0x00f9
                    00F8    323 _SPR0	=	0x00f8
                            324 ;--------------------------------------------------------
                            325 ; overlayable register banks
                            326 ;--------------------------------------------------------
                            327 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     328 	.ds 8
                            329 ;--------------------------------------------------------
                            330 ; internal ram data
                            331 ;--------------------------------------------------------
                            332 	.area DSEG    (DATA)
                            333 ;--------------------------------------------------------
                            334 ; overlayable items in internal ram 
                            335 ;--------------------------------------------------------
                            336 	.area OSEG    (OVR,DATA)
                            337 ;--------------------------------------------------------
                            338 ; Stack segment in internal ram 
                            339 ;--------------------------------------------------------
                            340 	.area	SSEG	(DATA)
   000A                     341 __start__stack:
   000A                     342 	.ds	1
                            343 
                            344 ;--------------------------------------------------------
                            345 ; indirectly addressable internal ram data
                            346 ;--------------------------------------------------------
                            347 	.area ISEG    (DATA)
                            348 ;--------------------------------------------------------
                            349 ; absolute internal ram data
                            350 ;--------------------------------------------------------
                            351 	.area IABS    (ABS,DATA)
                            352 	.area IABS    (ABS,DATA)
                            353 ;--------------------------------------------------------
                            354 ; bit data
                            355 ;--------------------------------------------------------
                            356 	.area BSEG    (BIT)
                            357 ;--------------------------------------------------------
                            358 ; paged external ram data
                            359 ;--------------------------------------------------------
                            360 	.area PSEG    (PAG,XDATA)
                            361 ;--------------------------------------------------------
                            362 ; external ram data
                            363 ;--------------------------------------------------------
                            364 	.area XSEG    (XDATA)
                            365 ;--------------------------------------------------------
                            366 ; absolute external ram data
                            367 ;--------------------------------------------------------
                            368 	.area XABS    (ABS,XDATA)
                            369 ;--------------------------------------------------------
                            370 ; external initialized ram data
                            371 ;--------------------------------------------------------
                            372 	.area XISEG   (XDATA)
                            373 	.area HOME    (CODE)
                            374 	.area GSINIT0 (CODE)
                            375 	.area GSINIT1 (CODE)
                            376 	.area GSINIT2 (CODE)
                            377 	.area GSINIT3 (CODE)
                            378 	.area GSINIT4 (CODE)
                            379 	.area GSINIT5 (CODE)
                            380 	.area GSINIT  (CODE)
                            381 	.area GSFINAL (CODE)
                            382 	.area CSEG    (CODE)
                            383 ;--------------------------------------------------------
                            384 ; interrupt vector 
                            385 ;--------------------------------------------------------
                            386 	.area HOME    (CODE)
   2100                     387 __interrupt_vect:
   2100 02 21 08            388 	ljmp	__sdcc_gsinit_startup
                            389 ;--------------------------------------------------------
                            390 ; global & static initialisations
                            391 ;--------------------------------------------------------
                            392 	.area HOME    (CODE)
                            393 	.area GSINIT  (CODE)
                            394 	.area GSFINAL (CODE)
                            395 	.area GSINIT  (CODE)
                            396 	.globl __sdcc_gsinit_startup
                            397 	.globl __sdcc_program_startup
                            398 	.globl __start__stack
                            399 	.globl __mcs51_genXINIT
                            400 	.globl __mcs51_genXRAMCLEAR
                            401 	.globl __mcs51_genRAMCLEAR
                            402 	.area GSFINAL (CODE)
   2164 02 21 03            403 	ljmp	__sdcc_program_startup
                            404 ;--------------------------------------------------------
                            405 ; Home
                            406 ;--------------------------------------------------------
                            407 	.area HOME    (CODE)
                            408 	.area HOME    (CODE)
   2103                     409 __sdcc_program_startup:
   2103 12 23 67            410 	lcall	_main
                            411 ;	return from main will lock up
   2106 80 FE               412 	sjmp .
                            413 ;--------------------------------------------------------
                            414 ; code
                            415 ;--------------------------------------------------------
                            416 	.area CSEG    (CODE)
                            417 ;------------------------------------------------------------
                            418 ;Allocation info for local variables in function 'delay'
                            419 ;------------------------------------------------------------
                            420 ;ms                        Allocated to registers r2 r3 r4 r5 
                            421 ;i                         Allocated to stack - offset 1
                            422 ;j                         Allocated to stack - offset 5
                            423 ;------------------------------------------------------------
                            424 ;	SRC/test_led.c:34: void delay ( unsigned long ms )
                            425 ;	-----------------------------------------
                            426 ;	 function delay
                            427 ;	-----------------------------------------
   21DF                     428 _delay:
                    0002    429 	ar2 = 0x02
                    0003    430 	ar3 = 0x03
                    0004    431 	ar4 = 0x04
                    0005    432 	ar5 = 0x05
                    0006    433 	ar6 = 0x06
                    0007    434 	ar7 = 0x07
                    0000    435 	ar0 = 0x00
                    0001    436 	ar1 = 0x01
   21DF C0 09               437 	push	_bp
   21E1 85 81 09            438 	mov	_bp,sp
   21E4 AA 82               439 	mov	r2,dpl
   21E6 AB 83               440 	mov	r3,dph
   21E8 AC F0               441 	mov	r4,b
   21EA FD                  442 	mov	r5,a
   21EB E5 81               443 	mov	a,sp
   21ED 24 08               444 	add	a,#0x08
   21EF F5 81               445 	mov	sp,a
                            446 ;	SRC/test_led.c:38: for( j = 0; j < ms; j++ )
   21F1 E5 09               447 	mov	a,_bp
   21F3 24 05               448 	add	a,#0x05
   21F5 F8                  449 	mov	r0,a
   21F6 E4                  450 	clr	a
   21F7 F6                  451 	mov	@r0,a
   21F8 08                  452 	inc	r0
   21F9 F6                  453 	mov	@r0,a
   21FA 08                  454 	inc	r0
   21FB F6                  455 	mov	@r0,a
   21FC 08                  456 	inc	r0
   21FD F6                  457 	mov	@r0,a
   21FE                     458 00105$:
   21FE E5 09               459 	mov	a,_bp
   2200 24 05               460 	add	a,#0x05
   2202 F8                  461 	mov	r0,a
   2203 C3                  462 	clr	c
   2204 E6                  463 	mov	a,@r0
   2205 9A                  464 	subb	a,r2
   2206 08                  465 	inc	r0
   2207 E6                  466 	mov	a,@r0
   2208 9B                  467 	subb	a,r3
   2209 08                  468 	inc	r0
   220A E6                  469 	mov	a,@r0
   220B 9C                  470 	subb	a,r4
   220C 08                  471 	inc	r0
   220D E6                  472 	mov	a,@r0
   220E 9D                  473 	subb	a,r5
   220F 50 4C               474 	jnc	00109$
                            475 ;	SRC/test_led.c:40: for( i = 0; i < 50; i++ );
   2211 A8 09               476 	mov	r0,_bp
   2213 08                  477 	inc	r0
   2214 E4                  478 	clr	a
   2215 F6                  479 	mov	@r0,a
   2216 08                  480 	inc	r0
   2217 F6                  481 	mov	@r0,a
   2218 08                  482 	inc	r0
   2219 F6                  483 	mov	@r0,a
   221A 08                  484 	inc	r0
   221B F6                  485 	mov	@r0,a
   221C                     486 00101$:
   221C A8 09               487 	mov	r0,_bp
   221E 08                  488 	inc	r0
   221F C3                  489 	clr	c
   2220 E6                  490 	mov	a,@r0
   2221 94 32               491 	subb	a,#0x32
   2223 08                  492 	inc	r0
   2224 E6                  493 	mov	a,@r0
   2225 94 00               494 	subb	a,#0x00
   2227 08                  495 	inc	r0
   2228 E6                  496 	mov	a,@r0
   2229 94 00               497 	subb	a,#0x00
   222B 08                  498 	inc	r0
   222C E6                  499 	mov	a,@r0
   222D 94 00               500 	subb	a,#0x00
   222F 50 15               501 	jnc	00107$
   2231 A8 09               502 	mov	r0,_bp
   2233 08                  503 	inc	r0
   2234 74 01               504 	mov	a,#0x01
   2236 26                  505 	add	a,@r0
   2237 F6                  506 	mov	@r0,a
   2238 E4                  507 	clr	a
   2239 08                  508 	inc	r0
   223A 36                  509 	addc	a,@r0
   223B F6                  510 	mov	@r0,a
   223C E4                  511 	clr	a
   223D 08                  512 	inc	r0
   223E 36                  513 	addc	a,@r0
   223F F6                  514 	mov	@r0,a
   2240 E4                  515 	clr	a
   2241 08                  516 	inc	r0
   2242 36                  517 	addc	a,@r0
   2243 F6                  518 	mov	@r0,a
   2244 80 D6               519 	sjmp	00101$
   2246                     520 00107$:
                            521 ;	SRC/test_led.c:38: for( j = 0; j < ms; j++ )
   2246 E5 09               522 	mov	a,_bp
   2248 24 05               523 	add	a,#0x05
   224A F8                  524 	mov	r0,a
   224B 74 01               525 	mov	a,#0x01
   224D 26                  526 	add	a,@r0
   224E F6                  527 	mov	@r0,a
   224F E4                  528 	clr	a
   2250 08                  529 	inc	r0
   2251 36                  530 	addc	a,@r0
   2252 F6                  531 	mov	@r0,a
   2253 E4                  532 	clr	a
   2254 08                  533 	inc	r0
   2255 36                  534 	addc	a,@r0
   2256 F6                  535 	mov	@r0,a
   2257 E4                  536 	clr	a
   2258 08                  537 	inc	r0
   2259 36                  538 	addc	a,@r0
   225A F6                  539 	mov	@r0,a
   225B 80 A1               540 	sjmp	00105$
   225D                     541 00109$:
   225D 85 09 81            542 	mov	sp,_bp
   2260 D0 09               543 	pop	_bp
   2262 22                  544 	ret
                            545 ;------------------------------------------------------------
                            546 ;Allocation info for local variables in function 'first_animation'
                            547 ;------------------------------------------------------------
                            548 ;i                         Allocated to registers r2 r3 
                            549 ;leds_reg                  Allocated to registers r4 
                            550 ;------------------------------------------------------------
                            551 ;	SRC/test_led.c:44: void first_animation(){
                            552 ;	-----------------------------------------
                            553 ;	 function first_animation
                            554 ;	-----------------------------------------
   2263                     555 _first_animation:
                            556 ;	SRC/test_led.c:45: int i = 0;
   2263 7A 00               557 	mov	r2,#0x00
   2265 7B 00               558 	mov	r3,#0x00
                            559 ;	SRC/test_led.c:46: unsigned char leds_reg = 0xC0;
   2267 7C C0               560 	mov	r4,#0xC0
                            561 ;	SRC/test_led.c:47: while(1){
   2269                     562 00113$:
                            563 ;	SRC/test_led.c:48: if(read_max(EXT_LO) != 0x33){
   2269 90 00 02            564 	mov	dptr,#0x0002
   226C C0 02               565 	push	ar2
   226E C0 03               566 	push	ar3
   2270 C0 04               567 	push	ar4
   2272 12 21 D3            568 	lcall	_read_max
   2275 AD 82               569 	mov	r5,dpl
   2277 D0 04               570 	pop	ar4
   2279 D0 03               571 	pop	ar3
   227B D0 02               572 	pop	ar2
                            573 ;	SRC/test_led.c:49: return;
   227D BD 33 69            574 	cjne	r5,#0x33,00115$
                            575 ;	SRC/test_led.c:51: leds(leds_reg);
   2280 8C 82               576 	mov	dpl,r4
   2282 C0 02               577 	push	ar2
   2284 C0 03               578 	push	ar3
   2286 C0 04               579 	push	ar4
   2288 12 21 AA            580 	lcall	_leds
   228B D0 04               581 	pop	ar4
   228D D0 03               582 	pop	ar3
   228F D0 02               583 	pop	ar2
                            584 ;	SRC/test_led.c:52: if(i < 6){
   2291 C3                  585 	clr	c
   2292 EA                  586 	mov	a,r2
   2293 94 06               587 	subb	a,#0x06
   2295 EB                  588 	mov	a,r3
   2296 64 80               589 	xrl	a,#0x80
   2298 94 80               590 	subb	a,#0x80
   229A 50 0B               591 	jnc	00107$
                            592 ;	SRC/test_led.c:53: leds_reg >>= 1;
   229C EC                  593 	mov	a,r4
   229D C3                  594 	clr	c
   229E 13                  595 	rrc	a
   229F FC                  596 	mov	r4,a
                            597 ;	SRC/test_led.c:54: i++;
   22A0 0A                  598 	inc	r2
   22A1 BA 00 2D            599 	cjne	r2,#0x00,00108$
   22A4 0B                  600 	inc	r3
   22A5 80 2A               601 	sjmp	00108$
   22A7                     602 00107$:
                            603 ;	SRC/test_led.c:55: }else if(i < 13){
   22A7 C3                  604 	clr	c
   22A8 EA                  605 	mov	a,r2
   22A9 94 0D               606 	subb	a,#0x0D
   22AB EB                  607 	mov	a,r3
   22AC 64 80               608 	xrl	a,#0x80
   22AE 94 80               609 	subb	a,#0x80
   22B0 50 0A               610 	jnc	00104$
                            611 ;	SRC/test_led.c:56: leds_reg <<= 1;
   22B2 EC                  612 	mov	a,r4
   22B3 2C                  613 	add	a,r4
   22B4 FC                  614 	mov	r4,a
                            615 ;	SRC/test_led.c:57: i++;
   22B5 0A                  616 	inc	r2
   22B6 BA 00 18            617 	cjne	r2,#0x00,00108$
   22B9 0B                  618 	inc	r3
   22BA 80 15               619 	sjmp	00108$
   22BC                     620 00104$:
                            621 ;	SRC/test_led.c:58: }else if (i > 13){
   22BC C3                  622 	clr	c
   22BD 74 0D               623 	mov	a,#0x0D
   22BF 9A                  624 	subb	a,r2
   22C0 74 80               625 	mov	a,#(0x00 ^ 0x80)
   22C2 8B F0               626 	mov	b,r3
   22C4 63 F0 80            627 	xrl	b,#0x80
   22C7 95 F0               628 	subb	a,b
   22C9 50 06               629 	jnc	00108$
                            630 ;	SRC/test_led.c:59: i = 0;
   22CB 7A 00               631 	mov	r2,#0x00
   22CD 7B 00               632 	mov	r3,#0x00
                            633 ;	SRC/test_led.c:60: leds_reg = 0xC0;
   22CF 7C C0               634 	mov	r4,#0xC0
   22D1                     635 00108$:
                            636 ;	SRC/test_led.c:62: delay(300);
   22D1 90 01 2C            637 	mov	dptr,#0x012C
   22D4 E4                  638 	clr	a
   22D5 F5 F0               639 	mov	b,a
   22D7 C0 02               640 	push	ar2
   22D9 C0 03               641 	push	ar3
   22DB C0 04               642 	push	ar4
   22DD 12 21 DF            643 	lcall	_delay
   22E0 D0 04               644 	pop	ar4
   22E2 D0 03               645 	pop	ar3
   22E4 D0 02               646 	pop	ar2
   22E6 02 22 69            647 	ljmp	00113$
   22E9                     648 00115$:
   22E9 22                  649 	ret
                            650 ;------------------------------------------------------------
                            651 ;Allocation info for local variables in function 'second_animation'
                            652 ;------------------------------------------------------------
                            653 ;i                         Allocated to registers r2 r3 
                            654 ;leds_reg                  Allocated to registers r4 
                            655 ;------------------------------------------------------------
                            656 ;	SRC/test_led.c:66: void second_animation(){
                            657 ;	-----------------------------------------
                            658 ;	 function second_animation
                            659 ;	-----------------------------------------
   22EA                     660 _second_animation:
                            661 ;	SRC/test_led.c:67: int i = 0;
   22EA 7A 00               662 	mov	r2,#0x00
   22EC 7B 00               663 	mov	r3,#0x00
                            664 ;	SRC/test_led.c:68: unsigned char leds_reg = 0x01;
   22EE 7C 01               665 	mov	r4,#0x01
                            666 ;	SRC/test_led.c:69: while(1){
   22F0                     667 00113$:
                            668 ;	SRC/test_led.c:70: if(read_max(EXT_LO) != 0xCC){
   22F0 90 00 02            669 	mov	dptr,#0x0002
   22F3 C0 02               670 	push	ar2
   22F5 C0 03               671 	push	ar3
   22F7 C0 04               672 	push	ar4
   22F9 12 21 D3            673 	lcall	_read_max
   22FC AD 82               674 	mov	r5,dpl
   22FE D0 04               675 	pop	ar4
   2300 D0 03               676 	pop	ar3
   2302 D0 02               677 	pop	ar2
                            678 ;	SRC/test_led.c:71: return;
   2304 BD CC 5F            679 	cjne	r5,#0xCC,00115$
                            680 ;	SRC/test_led.c:73: leds(leds_reg);
   2307 8C 82               681 	mov	dpl,r4
   2309 C0 02               682 	push	ar2
   230B C0 03               683 	push	ar3
   230D C0 04               684 	push	ar4
   230F 12 21 AA            685 	lcall	_leds
   2312 D0 04               686 	pop	ar4
   2314 D0 03               687 	pop	ar3
   2316 D0 02               688 	pop	ar2
                            689 ;	SRC/test_led.c:74: if(i < 7){
   2318 C3                  690 	clr	c
   2319 EA                  691 	mov	a,r2
   231A 94 07               692 	subb	a,#0x07
   231C EB                  693 	mov	a,r3
   231D 64 80               694 	xrl	a,#0x80
   231F 94 80               695 	subb	a,#0x80
   2321 50 06               696 	jnc	00107$
                            697 ;	SRC/test_led.c:75: leds_reg >>= 1;
   2323 EC                  698 	mov	a,r4
   2324 C3                  699 	clr	c
   2325 13                  700 	rrc	a
   2326 FC                  701 	mov	r4,a
   2327 80 25               702 	sjmp	00108$
   2329                     703 00107$:
                            704 ;	SRC/test_led.c:76: }else if (i < 13){
   2329 C3                  705 	clr	c
   232A EA                  706 	mov	a,r2
   232B 94 0D               707 	subb	a,#0x0D
   232D EB                  708 	mov	a,r3
   232E 64 80               709 	xrl	a,#0x80
   2330 94 80               710 	subb	a,#0x80
   2332 50 05               711 	jnc	00104$
                            712 ;	SRC/test_led.c:77: leds_reg <<= 1;
   2334 EC                  713 	mov	a,r4
   2335 2C                  714 	add	a,r4
   2336 FC                  715 	mov	r4,a
   2337 80 15               716 	sjmp	00108$
   2339                     717 00104$:
                            718 ;	SRC/test_led.c:78: }else if(i > 13){
   2339 C3                  719 	clr	c
   233A 74 0D               720 	mov	a,#0x0D
   233C 9A                  721 	subb	a,r2
   233D 74 80               722 	mov	a,#(0x00 ^ 0x80)
   233F 8B F0               723 	mov	b,r3
   2341 63 F0 80            724 	xrl	b,#0x80
   2344 95 F0               725 	subb	a,b
   2346 50 06               726 	jnc	00108$
                            727 ;	SRC/test_led.c:79: i = 0;
   2348 7A 00               728 	mov	r2,#0x00
   234A 7B 00               729 	mov	r3,#0x00
                            730 ;	SRC/test_led.c:80: leds_reg = 0x01;
   234C 7C 01               731 	mov	r4,#0x01
   234E                     732 00108$:
                            733 ;	SRC/test_led.c:82: delay(300);
   234E 90 01 2C            734 	mov	dptr,#0x012C
   2351 E4                  735 	clr	a
   2352 F5 F0               736 	mov	b,a
   2354 C0 02               737 	push	ar2
   2356 C0 03               738 	push	ar3
   2358 C0 04               739 	push	ar4
   235A 12 21 DF            740 	lcall	_delay
   235D D0 04               741 	pop	ar4
   235F D0 03               742 	pop	ar3
   2361 D0 02               743 	pop	ar2
   2363 02 22 F0            744 	ljmp	00113$
   2366                     745 00115$:
   2366 22                  746 	ret
                            747 ;------------------------------------------------------------
                            748 ;Allocation info for local variables in function 'main'
                            749 ;------------------------------------------------------------
                            750 ;dip_reg                   Allocated to registers r2 
                            751 ;------------------------------------------------------------
                            752 ;	SRC/test_led.c:87: void main( void ){
                            753 ;	-----------------------------------------
                            754 ;	 function main
                            755 ;	-----------------------------------------
   2367                     756 _main:
                            757 ;	SRC/test_led.c:89: while(1){
   2367                     758 00108$:
                            759 ;	SRC/test_led.c:90: dip_reg = read_max(EXT_LO);
   2367 90 00 02            760 	mov	dptr,#0x0002
   236A 12 21 D3            761 	lcall	_read_max
   236D AA 82               762 	mov	r2,dpl
                            763 ;	SRC/test_led.c:91: if(dip_reg == 0x33){
   236F BA 33 05            764 	cjne	r2,#0x33,00105$
                            765 ;	SRC/test_led.c:92: first_animation();
   2372 12 22 63            766 	lcall	_first_animation
   2375 80 F0               767 	sjmp	00108$
   2377                     768 00105$:
                            769 ;	SRC/test_led.c:93: }else if(dip_reg == 0xCC){
   2377 BA CC 05            770 	cjne	r2,#0xCC,00102$
                            771 ;	SRC/test_led.c:94: second_animation();
   237A 12 22 EA            772 	lcall	_second_animation
   237D 80 E8               773 	sjmp	00108$
   237F                     774 00102$:
                            775 ;	SRC/test_led.c:96: leds(dip_reg);
   237F 8A 82               776 	mov	dpl,r2
   2381 12 21 AA            777 	lcall	_leds
   2384 80 E1               778 	sjmp	00108$
                            779 	.area CSEG    (CODE)
                            780 	.area CONST   (CODE)
                            781 	.area XINIT   (CODE)
                            782 	.area CABS    (ABS,CODE)
