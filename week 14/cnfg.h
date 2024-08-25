#ifndef CNFG_H_
#define CNFG_H_

#define    AHB_CLK     16000000U
#define    APB1_CLK    16000000U
#define    APB2_CLK    16000000U


#define    PRIGROUP_BITS       4U
#define    TOTAL_PRIORITIES    15U
/*@Priority_t*/
#if PRIGROUP_BITS<4
typedef enum
{
	GRP0_SUB0,
	GRP1_SUB0,
	GRP2_SUB0,
	GRP3_SUB0,
	GRP4_SUB0,
	GRP5_SUB0,
	GRP6_SUB0,
	GRP7_SUB0,
	GRP8_SUB0,
	GRP9_SUB0,
	GRP10_SUB0,
	GRP11_SUB0,
	GRP12_SUB0,
	GRP13_SUB0,
	GRP14_SUB0,
	GRP15_SUB0,
}Priority_t;
#elif PRIGROUP_BITS==4
typedef enum
{
	GRP0_SUB0=0,
	GRP0_SUB1,
	GRP1_SUB0,
	GRP1_SUB1,
	GRP2_SUB0,
	GRP2_SUB1,
	GRP3_SUB0,
	GRP3_SUB1,
	GRP4_SUB0,
	GRP4_SUB1,
	GRP5_SUB0,
	GRP5_SUB1,
	GRP6_SUB0,
	GRP6_SUB1,
	GRP7_SUB0,
	GRP7_SUB1,
}Priority_t;
#elif PRIGROUP_BITS==5
typedef enum
{
	GRP0_SUB0,
	GRP0_SUB1,
	GRP0_SUB2,
	GRP0_SUB3,
	GRP1_SUB0,
	GRP1_SUB1,
	GRP1_SUB2,
	GRP1_SUB3,
	GRP2_SUB0,
	GRP2_SUB1,
	GRP2_SUB2,
	GRP2_SUB3,
	GRP3_SUB0,
	GRP3_SUB1,
	GRP3_SUB2,
	GRP3_SUB3,
}Priority_t;
#elif PRIGROUP_BITS==6
typedef enum
{
	GRP0_SUB0,
	GRP0_SUB1,
	GRP0_SUB2,
	GRP0_SUB3,
	GRP0_SUB4,
	GRP0_SUB5,
	GRP0_SUB6,
	GRP0_SUB7,
	GRP1_SUB0,
	GRP1_SUB1,
	GRP1_SUB2,
	GRP1_SUB3,
	GRP1_SUB4,
	GRP1_SUB5,
	GRP1_SUB6,
	GRP1_SUB7,
}Priority_t;
#elif PRIGROUP_BITS==7
typedef enum
{
	GRP0_SUB0,
	GRP0_SUB1,
	GRP0_SUB2,
	GRP0_SUB3,
	GRP0_SUB4,
	GRP0_SUB5,
	GRP0_SUB6,
	GRP0_SUB7,
	GRP0_SUB8,
	GRP0_SUB9,
	GRP0_SUB10,
	GRP0_SUB11,
	GRP0_SUB12,
	GRP0_SUB13,
	GRP0_SUB14,
	GRP0_SUB15,
}Priority_t;
#endif

#endif /* CNFG_H_ */