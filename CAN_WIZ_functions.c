
#include "CAN_WIZ_functions.h"

uint16_t tmr_1;

struct SYS_Flags1 sys_flags;


void dcmtr(uint16_t (*j)){
   sys_flags.FDCMTR &= FDCMTR_M; //clear FDCMTR
  (*j)--;
   if (*j==0){
  sys_flags.FDCMTR |= FDCMTR_M; // Set FDCMTR Flag
   }
}