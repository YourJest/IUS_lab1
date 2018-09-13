                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 2.9.0 #5416 (Mar 22 2009) (MINGW32)
                              4 ; This file was generated Tue Sep 11 15:55:30 2018
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
   2103 12 23 03            410 	lcall	_main
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
                            549 ;leds_reg                  Allocated to registers 
                            550 ;------------------------------------------------------------
                            551 ;	SRC/test_led.c:44: void first_animation(){
                            552 ;	-----------------------------------------
                            553 ;	 function first_animation
                            554 ;	-----------------------------------------
   2263                     555 _first_animation:
                            556 ;	SRC/test_led.c:47: for(i = 0; i <= 10; i++){
   2263 7A 00               557 	mov	r2,#0x00
   2265 7B 00               558 	mov	r3,#0x00
   2267                     559 00107$:
   2267 C3                  560 	clr	c
   2268 74 0A               561 	mov	a,#0x0A
   226A 9A                  562 	subb	a,r2
   226B 74 80               563 	mov	a,#(0x00 ^ 0x80)
   226D 8B F0               564 	mov	b,r3
   226F 63 F0 80            565 	xrl	b,#0x80
   2272 95 F0               566 	subb	a,b
   2274 40 3C               567 	jc	00111$
                            568 ;	SRC/test_led.c:48: if(read_max(EXT_LO) != 0x33){
   2276 90 00 02            569 	mov	dptr,#0x0002
   2279 C0 02               570 	push	ar2
   227B C0 03               571 	push	ar3
   227D 12 21 D3            572 	lcall	_read_max
   2280 AC 82               573 	mov	r4,dpl
   2282 D0 03               574 	pop	ar3
   2284 D0 02               575 	pop	ar2
                            576 ;	SRC/test_led.c:49: return;
   2286 BC 33 29            577 	cjne	r4,#0x33,00111$
                            578 ;	SRC/test_led.c:51: leds(leds_reg); delay(300);
   2289 75 82 03            579 	mov	dpl,#0x03
   228C C0 02               580 	push	ar2
   228E C0 03               581 	push	ar3
   2290 12 21 AA            582 	lcall	_leds
   2293 90 01 2C            583 	mov	dptr,#0x012C
   2296 E4                  584 	clr	a
   2297 F5 F0               585 	mov	b,a
   2299 12 21 DF            586 	lcall	_delay
   229C D0 03               587 	pop	ar3
   229E D0 02               588 	pop	ar2
                            589 ;	SRC/test_led.c:52: if(i < 7){
   22A0 C3                  590 	clr	c
   22A1 EA                  591 	mov	a,r2
   22A2 94 07               592 	subb	a,#0x07
   22A4 EB                  593 	mov	a,r3
   22A5 64 80               594 	xrl	a,#0x80
   22A7 94 80               595 	subb	a,#0x80
   22A9 E4                  596 	clr	a
   22AA 33                  597 	rlc	a
                            598 ;	SRC/test_led.c:47: for(i = 0; i <= 10; i++){
   22AB 0A                  599 	inc	r2
   22AC BA 00 B8            600 	cjne	r2,#0x00,00107$
   22AF 0B                  601 	inc	r3
   22B0 80 B5               602 	sjmp	00107$
   22B2                     603 00111$:
   22B2 22                  604 	ret
                            605 ;------------------------------------------------------------
                            606 ;Allocation info for local variables in function 'second_animation'
                            607 ;------------------------------------------------------------
                            608 ;i                         Allocated to registers r2 r3 
                            609 ;leds_reg                  Allocated to registers 
                            610 ;------------------------------------------------------------
                            611 ;	SRC/test_led.c:60: void second_animation(){
                            612 ;	-----------------------------------------
                            613 ;	 function second_animation
                            614 ;	-----------------------------------------
   22B3                     615 _second_animation:
                            616 ;	SRC/test_led.c:63: for(i = 0; i <= 10; i++){
   22B3 7A 00               617 	mov	r2,#0x00
   22B5 7B 00               618 	mov	r3,#0x00
   22B7                     619 00107$:
   22B7 C3                  620 	clr	c
   22B8 74 0A               621 	mov	a,#0x0A
   22BA 9A                  622 	subb	a,r2
   22BB 74 80               623 	mov	a,#(0x00 ^ 0x80)
   22BD 8B F0               624 	mov	b,r3
   22BF 63 F0 80            625 	xrl	b,#0x80
   22C2 95 F0               626 	subb	a,b
   22C4 40 3C               627 	jc	00111$
                            628 ;	SRC/test_led.c:64: if(read_max(EXT_LO) != 0xCC){
   22C6 90 00 02            629 	mov	dptr,#0x0002
   22C9 C0 02               630 	push	ar2
   22CB C0 03               631 	push	ar3
   22CD 12 21 D3            632 	lcall	_read_max
   22D0 AC 82               633 	mov	r4,dpl
   22D2 D0 03               634 	pop	ar3
   22D4 D0 02               635 	pop	ar2
                            636 ;	SRC/test_led.c:65: return;
   22D6 BC CC 29            637 	cjne	r4,#0xCC,00111$
                            638 ;	SRC/test_led.c:67: leds(leds_reg); delay(300);
   22D9 75 82 80            639 	mov	dpl,#0x80
   22DC C0 02               640 	push	ar2
   22DE C0 03               641 	push	ar3
   22E0 12 21 AA            642 	lcall	_leds
   22E3 90 01 2C            643 	mov	dptr,#0x012C
   22E6 E4                  644 	clr	a
   22E7 F5 F0               645 	mov	b,a
   22E9 12 21 DF            646 	lcall	_delay
   22EC D0 03               647 	pop	ar3
   22EE D0 02               648 	pop	ar2
                            649 ;	SRC/test_led.c:68: if(i < 8){
   22F0 C3                  650 	clr	c
   22F1 EA                  651 	mov	a,r2
   22F2 94 08               652 	subb	a,#0x08
   22F4 EB                  653 	mov	a,r3
   22F5 64 80               654 	xrl	a,#0x80
   22F7 94 80               655 	subb	a,#0x80
   22F9 E4                  656 	clr	a
   22FA 33                  657 	rlc	a
                            658 ;	SRC/test_led.c:63: for(i = 0; i <= 10; i++){
   22FB 0A                  659 	inc	r2
   22FC BA 00 B8            660 	cjne	r2,#0x00,00107$
   22FF 0B                  661 	inc	r3
   2300 80 B5               662 	sjmp	00107$
   2302                     663 00111$:
   2302 22                  664 	ret
                            665 ;------------------------------------------------------------
                            666 ;Allocation info for local variables in function 'main'
                            667 ;------------------------------------------------------------
                            668 ;dip_reg                   Allocated to registers r2 
                            669 ;------------------------------------------------------------
                            670 ;	SRC/test_led.c:77: void main( void ){
                            671 ;	-----------------------------------------
                            672 ;	 function main
                            673 ;	-----------------------------------------
   2303                     674 _main:
                            675 ;	SRC/test_led.c:79: while(1){
   2303                     676 00108$:
                            677 ;	SRC/test_led.c:80: dip_reg = read_max(EXT_LO);
   2303 90 00 02            678 	mov	dptr,#0x0002
   2306 12 21 D3            679 	lcall	_read_max
   2309 AA 82               680 	mov	r2,dpl
                            681 ;	SRC/test_led.c:81: if(dip_reg == 0x33){
   230B BA 33 05            682 	cjne	r2,#0x33,00105$
                            683 ;	SRC/test_led.c:82: first_animation();
   230E 12 22 63            684 	lcall	_first_animation
   2311 80 F0               685 	sjmp	00108$
   2313                     686 00105$:
                            687 ;	SRC/test_led.c:83: }else if(dip_reg == 0xCC){
   2313 BA CC 05            688 	cjne	r2,#0xCC,00102$
                            689 ;	SRC/test_led.c:84: second_animation();
   2316 12 22 B3            690 	lcall	_second_animation
   2319 80 E8               691 	sjmp	00108$
   231B                     692 00102$:
                            693 ;	SRC/test_led.c:86: leds(dip_reg);
   231B 8A 82               694 	mov	dpl,r2
   231D 12 21 AA            695 	lcall	_leds
   2320 80 E1               696 	sjmp	00108$
                            697 	.area CSEG    (CODE)
                            698 	.area CONST   (CODE)
                            699 	.area XINIT   (CODE)
                            700 	.area CABS    (ABS,CODE)
