#ifndef STM8S003_REG_DEFS
#define STM8S003_REG_DEFS

#include <stdint.h>

/* (C) 2016 Jason Li, usable in any form as long as this notice is retained */

/* Interrupt Vectors */
#define TLI_VECT 0
#define AWU_VECT 1
#define CLK_VECT 2
#define EXTI0_VECT 3
#define EXTI1_VECT 4
#define EXTI2_VECT 5
#define EXTI3_VECT 6
#define EXTI4_VECT 7
#define SPI_EOT_VECT 10
#define TIM1_UOUTB_VECT 11
#define TIM1_CC_VECT 12
#define TIM2_UO_VECT 13
#define TIM2_CC_VECT 14
#define TIM3_UO_VECT 15
#define TIM3_CC_VECT 16
#define UART1_TXC_VECT 17
#define UART1_RXC_VECT 18
#define I2C_VECT 19
#define UART2_TXC_VECT 20
#define UART2_RXC_VECT 21
#define ADC1_EOCWD_VECT 22
#define TIM4_UO_VECT 23
#define FLASH_EOP_VECT 24

/* GPIO */
#define PA_ODR (*(volatile uint8_t*)0x005000)
#define PA_IDR (*(volatile uint8_t*)0x005001)
#define PA_DDR (*(volatile uint8_t*)0x005002)
#define PA_CR1 (*(volatile uint8_t*)0x005003)
#define PA_CR2 (*(volatile uint8_t*)0x005004)

#define PB_ODR (*(volatile uint8_t*)0x005005)
#define PB_IDR (*(volatile uint8_t*)0x005006)
#define PB_DDR (*(volatile uint8_t*)0x005007)
#define PB_CR1 (*(volatile uint8_t*)0x005008)
#define PB_CR2 (*(volatile uint8_t*)0x005009)

#define PC_ODR (*(volatile uint8_t*)0x00500A)
#define PC_IDR (*(volatile uint8_t*)0x00500B)
#define PC_DDR (*(volatile uint8_t*)0x00500C)
#define PC_CR1 (*(volatile uint8_t*)0x00500D)
#define PC_CR2 (*(volatile uint8_t*)0x00500E)

#define PD_ODR (*(volatile uint8_t*)0x00500F)
#define PD_IDR (*(volatile uint8_t*)0x005010)
#define PD_DDR (*(volatile uint8_t*)0x005011)
#define PD_CR1 (*(volatile uint8_t*)0x005012)
#define PD_CR2 (*(volatile uint8_t*)0x005013)

#define PE_ODR (*(volatile uint8_t*)0x005014)
#define PE_IDR (*(volatile uint8_t*)0x005015)
#define PE_DDR (*(volatile uint8_t*)0x005016)
#define PE_CR1 (*(volatile uint8_t*)0x005017)
#define PE_CR2 (*(volatile uint8_t*)0x005018)

#define PF_ODR (*(volatile uint8_t*)0x005019)
#define PF_IDR (*(volatile uint8_t*)0x00501A)
#define PF_DDR (*(volatile uint8_t*)0x00501B)
#define PF_CR1 (*(volatile uint8_t*)0x00501C)
#define PF_CR2 (*(volatile uint8_t*)0x00501D)

/* Flash */
#define FLASH_CR1 (*(volatile uint8_t*)0x00505A)
#define FLASH_CR2 (*(volatile uint8_t*)0x00505B)
#define FLASH_NCR2 (*(volatile uint8_t*)0x00505C)
#define FLASH_FPR (*(volatile uint8_t*)0x00505D)
#define FLASH_NFPR (*(volatile uint8_t*)0x00505E)
#define FLASH_IAPSR (*(volatile uint8_t*)0x00505F)
#define FLASH_PUKR (*(volatile uint8_t*)0x005062)
#define FLASH_DUKR (*(volatile uint8_t*)0x005064)

/* External Interrupt */
#define EXTI_CR1 (*(volatile uint8_t*)0x0050A0)
#define EXTI_CR2 (*(volatile uint8_t*)0x0050A1)

/* Reset */
#define RST_SR (*(volatile uint8_t*)0x0050B3)

/* Clock */
#define CLK_ICKR (*(volatile uint8_t*)0x0050C0)
#define CLK_ECKR (*(volatile uint8_t*)0x0050C1)
#define CLK_CMSR (*(volatile uint8_t*)0x0050C3)
#define CLK_SWR (*(volatile uint8_t*)0x0050C4)
#define CLK_SWCR (*(volatile uint8_t*)0x0050C5)
#define CLK_CKDIVR (*(volatile uint8_t*)0x0050C6)
#define CLK_PCKENR1 (*(volatile uint8_t*)0x0050C7)
#define CLK_CSSR (*(volatile uint8_t*)0x0050C8)
#define CLK_CCOR (*(volatile uint8_t*)0x0050C9)
#define CLK_PCKENR2 (*(volatile uint8_t*)0x0050CA)
#define CLK_HSITRIMR (*(volatile uint8_t*)0x0050CC)
#define CLK_SWIMCCR (*(volatile uint8_t*)0x0050CD)

/* Watchdog */
#define WWDG_CR (*(volatile uint8_t*)0x0050D1)
#define WWDG_WR (*(volatile uint8_t*)0x0050D2)
#define IWDG_KR (*(volatile uint8_t*)0x0050E0)
#define IWDG_PR (*(volatile uint8_t*)0x0050E1)
#define IWDG_RLR (*(volatile uint8_t*)0x0050E2)

/* AWU */
#define AWU_CSR1 (*(volatile uint8_t*)0x0050F0)
#define AWU_APR (*(volatile uint8_t*)0x0050F1)
#define AWU_TBR (*(volatile uint8_t*)0x0050F2)

/* BEEP */
#define BEEP_CSR (*(volatile uint8_t*)0x0050F3)

/* SPI */
#define SPI_CR1 (*(volatile uint8_t*)0x005200)
#define SPI_CR2 (*(volatile uint8_t*)0x005201)
#define SPI_ICR (*(volatile uint8_t*)0x005202)
#define SPI_SR (*(volatile uint8_t*)0x005203)
#define SPI_DR (*(volatile uint8_t*)0x005204)
#define SPI_CRCPR (*(volatile uint8_t*)0x005205)
#define SPI_RXCRCR (*(volatile uint8_t*)0x005206)
#define SPI_TXCRCR (*(volatile uint8_t*)0x005207)

/* I2C */
#define I2C_CR1 (*(volatile uint8_t*)0x005210)
#define I2C_CR2 (*(volatile uint8_t*)0x005211)
#define I2C_FREQR (*(volatile uint8_t*)0x005212)
#define I2C_OARL (*(volatile uint8_t*)0x005213)
#define I2C_OARH (*(volatile uint8_t*)0x005214)
#define I2C_DR (*(volatile uint8_t*)0x005216)
#define I2C_SR1 (*(volatile uint8_t*)0x005217)
#define I2C_SR2 (*(volatile uint8_t*)0x005218)
#define I2C_SR3 (*(volatile uint8_t*)0x005219)
#define I2C_ITR (*(volatile uint8_t*)0x00521A)
#define I2C_CCRL (*(volatile uint8_t*)0x00521B)
#define I2C_CCRH (*(volatile uint8_t*)0x00521C)
#define I2C_TRISER (*(volatile uint8_t*)0x00521D)
#define I2C_PECR (*(volatile uint8_t*)0x00521E)

/* UART */
#define UART1_SR (*(volatile uint8_t*)0x005230)
#define UART1_DR (*(volatile uint8_t*)0x005231)
#define UART1_BRR1 (*(volatile uint8_t*)0x005232)
#define UART1_BRR2 (*(volatile uint8_t*)0x005233)
#define UART1_CR1 (*(volatile uint8_t*)0x005234)
#define UART1_CR2 (*(volatile uint8_t*)0x005235)
#define UART1_CR3 (*(volatile uint8_t*)0x005236)
#define UART1_CR4 (*(volatile uint8_t*)0x005237)
#define UART1_CR5 (*(volatile uint8_t*)0x005238)
#define UART1_GTR (*(volatile uint8_t*)0x005239)
#define UART1_PSCR (*(volatile uint8_t*)0x00523A)

/* Timers */
#define TIM1_CR1 (*(volatile uint8_t*)0x005250)
#define TIM1_CR2 (*(volatile uint8_t*)0x005251)
#define TIM1_SMCR (*(volatile uint8_t*)0x005252)
#define TIM1_ETR (*(volatile uint8_t*)0x005253)
#define TIM1_IER (*(volatile uint8_t*)0x005254)
#define TIM1_SR1 (*(volatile uint8_t*)0x005255)
#define TIM1_SR2 (*(volatile uint8_t*)0x005256)
#define TIM1_EGR (*(volatile uint8_t*)0x005257)
#define TIM1_CCMR1 (*(volatile uint8_t*)0x005258)
#define TIM1_CCMR2 (*(volatile uint8_t*)0x005259)
#define TIM1_CCMR3 (*(volatile uint8_t*)0x00525A)
#define TIM1_CCMR4 (*(volatile uint8_t*)0x00525B)
#define TIM1_CCER1 (*(volatile uint8_t*)0x00525C)
#define TIM1_CCER2 (*(volatile uint8_t*)0x00525D)
#define TIM1_CNTRH (*(volatile uint8_t*)0x00525E)
#define TIM1_CNTRL (*(volatile uint8_t*)0x00525F)
#define TIM1_PSCRH (*(volatile uint8_t*)0x005260)
#define TIM1_PSCRL (*(volatile uint8_t*)0x005261)
#define TIM1_ARRH (*(volatile uint8_t*)0x005262)
#define TIM1_ARRL (*(volatile uint8_t*)0x005263)
#define TIM1_RCR (*(volatile uint8_t*)0x005264)
#define TIM1_CCR1H (*(volatile uint8_t*)0x005265)
#define TIM1_CCR1L (*(volatile uint8_t*)0x005266)
#define TIM1_CCR2H (*(volatile uint8_t*)0x005267)
#define TIM1_CCR2L (*(volatile uint8_t*)0x005268)
#define TIM1_CCR3H (*(volatile uint8_t*)0x005269)
#define TIM1_CCR3L (*(volatile uint8_t*)0x00526A)
#define TIM1_CCR4H (*(volatile uint8_t*)0x00526B)
#define TIM1_CCR4L (*(volatile uint8_t*)0x00526C)
#define TIM1_BKR (*(volatile uint8_t*)0x00526D)
#define TIM1_DTR (*(volatile uint8_t*)0x00526E)
#define TIM1_OISR (*(volatile uint8_t*)0x00526F)
#define TIM2_CR1 (*(volatile uint8_t*)0x005300)
#define TIM2_IER (*(volatile uint8_t*)0x005303)
#define TIM2_SR1 (*(volatile uint8_t*)0x005304)
#define TIM2_SR2 (*(volatile uint8_t*)0x005305)
#define TIM2_EGR (*(volatile uint8_t*)0x005306)
#define TIM2_CCMR1 (*(volatile uint8_t*)0x005307)
#define TIM2_CCMR2 (*(volatile uint8_t*)0x005308)
#define TIM2_CCMR3 (*(volatile uint8_t*)0x005309)
#define TIM2_CCER1 (*(volatile uint8_t*)0x00530A)
#define TIM2_CCER2 (*(volatile uint8_t*)0x00530B)
#define TIM2_CNTRH (*(volatile uint8_t*)0x00530C)
#define TIM2_CNTRL (*(volatile uint8_t*)0x00530D)
#define TIM2_PSCR (*(volatile uint8_t*)0x00530E)
#define TIM2_ARRH (*(volatile uint8_t*)0x00530F)
#define TIM2_ARRL (*(volatile uint8_t*)0x005310)
#define TIM2_CCR1H (*(volatile uint8_t*)0x005311)
#define TIM2_CCR1L (*(volatile uint8_t*)0x005312)
#define TIM2_CCR2H (*(volatile uint8_t*)0x005313)
#define TIM2_CCR2L (*(volatile uint8_t*)0x005314)
#define TIM2_CCR3H (*(volatile uint8_t*)0x005315)
#define TIM2_CCR3L (*(volatile uint8_t*)0x005316)
#define TIM4_CR1 (*(volatile uint8_t*)0x005340)
#define TIM4_IER (*(volatile uint8_t*)0x005343)
#define TIM4_SR (*(volatile uint8_t*)0x005344)
#define TIM4_EGR (*(volatile uint8_t*)0x005345)
#define TIM4_CNTR (*(volatile uint8_t*)0x005346)
#define TIM4_PSCR (*(volatile uint8_t*)0x005347)
#define TIM4_ARR (*(volatile uint8_t*)0x005348)

/* ADC */
#define ADC_DBxR ((volatile uint8_t*)0x0053E0)
#define ADC_CSR (*(volatile uint8_t*)0x005400)
#define ADC_CR1 (*(volatile uint8_t*)0x005401)
#define ADC_CR2 (*(volatile uint8_t*)0x005402)
#define ADC_CR3 (*(volatile uint8_t*)0x005403)
#define ADC_DRH (*(volatile uint8_t*)0x005404)
#define ADC_DRL (*(volatile uint8_t*)0x005405)
#define ADC_TDRH (*(volatile uint8_t*)0x005406)
#define ADC_TDRL (*(volatile uint8_t*)0x005407)
#define ADC_HTRH (*(volatile uint8_t*)0x005408)
#define ADC_HTRL (*(volatile uint8_t*)0x005409)
#define ADC_LTRH (*(volatile uint8_t*)0x00540A)
#define ADC_LTRL (*(volatile uint8_t*)0x00540B)
#define ADC_AWSRH (*(volatile uint8_t*)0x00540C)
#define ADC_AWSRL (*(volatile uint8_t*)0x00540D)
#define ADC_AWCRH (*(volatile uint8_t*)0x00540E)
#define ADC_AWCRL (*(volatile uint8_t*)0x00540F)

/* CPU */
#define A (*(volatile uint8_t*)0x007F00)
#define PCE (*(volatile uint8_t*)0x007F01)
#define PCH (*(volatile uint8_t*)0x007F02)
#define PCL (*(volatile uint8_t*)0x007F03)
#define XH (*(volatile uint8_t*)0x007F04)
#define XL (*(volatile uint8_t*)0x007F05)
#define YH (*(volatile uint8_t*)0x007F06)
#define YL (*(volatile uint8_t*)0x007F07)
#define SPH (*(volatile uint8_t*)0x007F08)
#define SPL (*(volatile uint8_t*)0x007F09)
#define CCR (*(volatile uint8_t*)0x007F0A)
#define CFG_GCR (*(volatile uint8_t*)0x007F60)

/* ITC */
#define ITC_SPR1 (*(volatile uint8_t*)0x007F70)
#define ITC_SPR2 (*(volatile uint8_t*)0x007F71)
#define ITC_SPR3 (*(volatile uint8_t*)0x007F72)
#define ITC_SPR4 (*(volatile uint8_t*)0x007F73)
#define ITC_SPR5 (*(volatile uint8_t*)0x007F74)
#define ITC_SPR6 (*(volatile uint8_t*)0x007F75)
#define ITC_SPR7 (*(volatile uint8_t*)0x007F76)
#define ITC_SPR8 (*(volatile uint8_t*)0x007F77)

/* Debug */
#define SWIM_CSR (*(volatile uint8_t*)0x007F80)
#define DM_BK1RE (*(volatile uint8_t*)0x007F90)
#define DM_BK1RH (*(volatile uint8_t*)0x007F91)
#define DM_BK1RL (*(volatile uint8_t*)0x007F92)
#define DM_BK2RE (*(volatile uint8_t*)0x007F93)
#define DM_BK2RH (*(volatile uint8_t*)0x007F94)
#define DM_BK2RL (*(volatile uint8_t*)0x007F95)
#define DM_CR1 (*(volatile uint8_t*)0x007F96)
#define DM_CR2 (*(volatile uint8_t*)0x007F97)
#define DM_CSR1 (*(volatile uint8_t*)0x007F98)
#define DM_CSR2 (*(volatile uint8_t*)0x007F99)
#define DM_ENFCTR (*(volatile uint8_t*)0x007F9A)

#endif