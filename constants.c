#if (0)
typedef void const * (fc_name)   (void);
#else
typedef void * (fc_name)   (void);
#endif /* (0) */



   fc_name *    ILON_SPECIAL_0  = (fc_name *)  0xBFC00000
 ; fc_name *    ILON_SPECIAL_1  = (fc_name *)  0xBc950000
 ; fc_name *    ILON_SPECIAL_2  = (fc_name *)  0xBc900000
 ; fc_name *    ILON_SPECIAL_3  = (fc_name *)  0xBc800000
 ; fc_name *    ILON_SPECIAL_4  = (fc_name *)  0xBc810000
 ; fc_name *    ILON_SPECIAL_5  = (fc_name *)  0xBc910000



 ; fc_name *    MEM_SDMODE0                 = (fc_name *)  0xB4000000
 ; fc_name *    MEM_SDMODE1                 = (fc_name *)  0xB4000004
 ; fc_name *    MEM_SDMODE2                 = (fc_name *)  0xB4000008

 ; fc_name *    MEM_SDADDR0                 = (fc_name *)  0xB400000C
 ; fc_name *    MEM_SDADDR1                 = (fc_name *)  0xB4000010
 ; fc_name *    MEM_SDADDR2                 = (fc_name *)  0xB4000014

 ; fc_name *    MEM_SDREFCFG                = (fc_name *)  0xB4000018
 ; fc_name *    MEM_SDPRECMD                = (fc_name *)  0xB400001C
 ; fc_name *    MEM_SDAUTOREF               = (fc_name *)  0xB4000020

 ; fc_name *    MEM_SDWRMD0                 = (fc_name *)  0xB4000024
 ; fc_name *    MEM_SDWRMD1                 = (fc_name *)  0xB4000028
 ; fc_name *    MEM_SDWRMD2                 = (fc_name *)  0xB400002C


 ; fc_name *    MEM_SDSLEEP                 = (fc_name *)  0xB4000030
 ; fc_name *    MEM_SDSMCKE                 = (fc_name *)  0xB4000034

/* Static Bus Controller */
 ; fc_name *    MEM_STCFG0                  = (fc_name *)  0xB4001000
 ; fc_name *    MEM_STTIME0                 = (fc_name *)  0xB4001004
 ; fc_name *    MEM_STADDR0                 = (fc_name *)  0xB4001008

 ; fc_name *    MEM_STCFG1                  = (fc_name *)  0xB4001010
 ; fc_name *    MEM_STTIME1                 = (fc_name *)  0xB4001014
 ; fc_name *    MEM_STADDR1                 = (fc_name *)  0xB4001018

 ; fc_name *    MEM_STCFG2                  = (fc_name *)  0xB4001020
 ; fc_name *    MEM_STTIME2                 = (fc_name *)  0xB4001024
 ; fc_name *    MEM_STADDR2                 = (fc_name *)  0xB4001028

 ; fc_name *    MEM_STCFG3                  = (fc_name *)  0xB4001030
 ; fc_name *    MEM_STTIME3                 = (fc_name *)  0xB4001034
 ; fc_name *    MEM_STADDR3                 = (fc_name *)  0xB4001038

/* Interrupt Controller 0 */
 ; fc_name *    IC0_CFG0RD                  = (fc_name *)  0xB0400040
 ; fc_name *    IC0_CFG0SET                 = (fc_name *)  0xB0400040
 ; fc_name *    IC0_CFG0CLR                 = (fc_name *)  0xB0400044

 ; fc_name *    IC0_CFG1RD                  = (fc_name *)  0xB0400048
 ; fc_name *    IC0_CFG1SET                 = (fc_name *)  0xB0400048
 ; fc_name *    IC0_CFG1CLR                 = (fc_name *)  0xB040004C

 ; fc_name *    IC0_CFG2RD                  = (fc_name *)  0xB0400050
 ; fc_name *    IC0_CFG2SET                 = (fc_name *)  0xB0400050
 ; fc_name *    IC0_CFG2CLR                 = (fc_name *)  0xB0400054

 ; fc_name *    IC0_REQ0INT                 = (fc_name *)  0xB0400054
 ; fc_name *    IC0_SRCRD                   = (fc_name *)  0xB0400058
 ; fc_name *    IC0_SRCSET                  = (fc_name *)  0xB0400058
 ; fc_name *    IC0_SRCCLR                  = (fc_name *)  0xB040005C
 ; fc_name *    IC0_REQ1INT                 = (fc_name *)  0xB040005C

 ; fc_name *    IC0_ASSIGNRD                = (fc_name *)  0xB0400060
 ; fc_name *    IC0_ASSIGNSET               = (fc_name *)  0xB0400060
 ; fc_name *    IC0_ASSIGNCLR               = (fc_name *)  0xB0400064

 ; fc_name *    IC0_WAKERD                  = (fc_name *)  0xB0400068
 ; fc_name *    IC0_WAKESET                 = (fc_name *)  0xB0400068
 ; fc_name *    IC0_WAKECLR                 = (fc_name *)  0xB040006C

 ; fc_name *    IC0_MASKRD                  = (fc_name *)  0xB0400070
 ; fc_name *    IC0_MASKSET                 = (fc_name *)  0xB0400070
 ; fc_name *    IC0_MASKCLR                 = (fc_name *)  0xB0400074

 ; fc_name *    IC0_RISINGRD                = (fc_name *)  0xB0400078
 ; fc_name *    IC0_RISINGCLR               = (fc_name *)  0xB0400078
 ; fc_name *    IC0_FALLINGRD               = (fc_name *)  0xB040007C
 ; fc_name *    IC0_FALLINGCLR              = (fc_name *)  0xB040007C

 ; fc_name *    IC0_TESTBIT                 = (fc_name *)  0xB0400080

/* Interrupt Controller 1 */
 ; fc_name *    IC1_CFG0RD                  = (fc_name *)  0xB1800040
 ; fc_name *    IC1_CFG0SET                 = (fc_name *)  0xB1800040
 ; fc_name *    IC1_CFG0CLR                 = (fc_name *)  0xB1800044

 ; fc_name *    IC1_CFG1RD                  = (fc_name *)  0xB1800048
 ; fc_name *    IC1_CFG1SET                 = (fc_name *)  0xB1800048
 ; fc_name *    IC1_CFG1CLR                 = (fc_name *)  0xB180004C

 ; fc_name *    IC1_CFG2RD                  = (fc_name *)  0xB1800050
 ; fc_name *    IC1_CFG2SET                 = (fc_name *)  0xB1800050
 ; fc_name *    IC1_CFG2CLR                 = (fc_name *)  0xB1800054

 ; fc_name *    IC1_REQ0INT                 = (fc_name *)  0xB1800054
 ; fc_name *    IC1_SRCRD                   = (fc_name *)  0xB1800058
 ; fc_name *    IC1_SRCSET                  = (fc_name *)  0xB1800058
 ; fc_name *    IC1_SRCCLR                  = (fc_name *)  0xB180005C
 ; fc_name *    IC1_REQ1INT                 = (fc_name *)  0xB180005C

 ; fc_name *    IC1_ASSIGNRD                = (fc_name *)  0xB1800060
 ; fc_name *    IC1_ASSIGNSET               = (fc_name *)  0xB1800060
 ; fc_name *    IC1_ASSIGNCLR               = (fc_name *)  0xB1800064

 ; fc_name *    IC1_WAKERD                  = (fc_name *)  0xB1800068
 ; fc_name *    IC1_WAKESET                 = (fc_name *)  0xB1800068
 ; fc_name *    IC1_WAKECLR                 = (fc_name *)  0xB180006C

 ; fc_name *    IC1_MASKRD                  = (fc_name *)  0xB1800070
 ; fc_name *    IC1_MASKSET                 = (fc_name *)  0xB1800070
 ; fc_name *    IC1_MASKCLR                 = (fc_name *)  0xB1800074

 ; fc_name *    IC1_RISINGRD                = (fc_name *)  0xB1800078
 ; fc_name *    IC1_RISINGCLR               = (fc_name *)  0xB1800078
 ; fc_name *    IC1_FALLINGRD               = (fc_name *)  0xB180007C
 ; fc_name *    IC1_FALLINGCLR              = (fc_name *)  0xB180007C

 ; fc_name *    IC1_TESTBIT                 = (fc_name *)  0xB1800080 ; 


