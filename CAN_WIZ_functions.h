#ifndef CAN_WIZ_H_
#define CAN_WIZ_H_

#include "stm32f0xx_hal.h"
#include "stm32f0xx_hal_i2c.h"

extern struct SYS_Flags1 sys_flags;

struct SYS_Flags1
{
  uint32_t  FCABLE:1,      
            FDCMTR:1,      
            FTLOOP:1,      
            TOTERM:1,
            MSG_REC:1, 
            SYSF2_RSDV05:1,
            SYSF2_RSDV06:1,
            SYSF2_RSDV07:1,
            SYSF2_RSDV08:1,
            SYSF2_RSDV09:1,
            SYSF2_RSDV10:1,
            SYSF2_RSDV11:1,
            SYSF2_RSDV12:1,
            SYSF2_RSDV13:1,
            SYSF2_RSDV14:1,
            SYSF2_RSDV15:1,
            SYSF2_RSDV16:1,
            SYSF2_RSDV17:1,            
            SYSF2_RSDV18:1,
            SYSF2_RSDV19:1,
            SYSF2_RSDV20:1,
            SYSF2_RSDV21:1,
            SYSF2_RSDV22:1,
            SYSF2_RSDV23:1,
            SYSF2_RSDV24:1,
            SYSF2_RSDV25:1,
            SYSF2_RSDV26:1,
            SYSF2_RSDV27:1,            
            SYSF2_RSDV28:1,
            SYSF2_RSDV29:1,
            SYSF2_RSDV30:1,
            SYSF2_RSDV31:1;
};



#define FCABLE_M        (1U << 0)
#define FDCMTR_M        (1U << 1)
#define FTLOOP_M        (1U << 2)
#define TOTERM_M        (1U << 3)
#define MSG_REC_M       (1U << 4)
#define SYSF2_RSDV05_M  (1U << 5)
#define SYSF2_RSDV06_M  (1U << 6)
#define SYSF2_RSDV07_M  (1U << 7)

#define SYSF2_RSDV08_M  (1U << 8)
#define SYSF2_RSDV09_M  (1U << 9)
#define SYSF2_RSDV10_M  (1U << 10)
#define SYSF2_RSDV11_M  (1U << 11)
#define SYSF2_RSDV12_M  (1U << 12)
#define SYSF2_RSDV13_M  (1U << 13)
#define SYSF2_RSDV14_M  (1U << 14)
#define SYSF2_RSDV15_M  (1U << 15)

#define SYSF2_RSDV16_M  (1U << 16)
#define SYSF2_RSDV17_M  (1U << 17)
#define SYSF2_RSDV18_M  (1U << 18)
#define SYSF2_RSDV19_M  (1U << 19)
#define SYSF2_RSDV20_M  (1U << 20)
#define SYSF2_RSDV21_M  (1U << 21)
#define SYSF2_RSDV22_M  (1U << 22)
#define SYSF2_RSDV23_M  (1U << 23)

#define SYSF2_RSDV24_M  (1U << 24)
#define SYSF2_RSDV25_M  (1U << 25)
#define SYSF2_RSDV26_M  (1U << 26)
#define SYSF2_RSDV27_M  (1U << 27)
#define SYSF2_RSDV28_M  (1U << 28)
#define SYSF2_RSDV29_M  (1U << 29)
#define SYSF2_RSDV30_M  (1U << 30)
#define SYSF2_RSDV31_M  (1U << 31)


extern uint16_t tmr_1;

// #define FDCMTR          (1U << 9)
void dcmtr();

#endif /* CAN_WIZ_H_ */