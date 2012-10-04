/*-------------------------------------------------------------------------*
 * File:  Timer.h
 *-------------------------------------------------------------------------*
 * Description:
 *     RL78 Timer driver using CMT3 on channel 3.
 *-------------------------------------------------------------------------*/
#ifndef Timer_H_
#define Timer_H_

#include <ior5f104pj.h>

/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <stdint.h>

/*-------------------------------------------------------------------------*
 * Macro definitions (Register bit)
 *-------------------------------------------------------------------------*/
/* 
    Interval timer control register (ITMC)
*/
/* Interval timer operation enable/disable specification (RINTE) */
#define _IT_OPERATION_DISABLE    (0x0000U)
#define _IT_OPERATION_ENABLE     (0x8000U)
/* Interval timer compare value (ITMCMP11 - 0) */
#define _ITMCMP_VALUE            (0x0020U)

/*-------------------------------------------------------------------------*
 * Macros:
 *-------------------------------------------------------------------------*/
#define Timer_DisableIRQ()     ITMK = 1U
#define Timer_EnableIRQ()      ITMK = 0U

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/
void Timer_Start(void (*isr)(void));
void Timer_Stop(void);

#endif /* Timer_H_ */
/*-------------------------------------------------------------------------*
 * End of File:  Timer.h
 *-------------------------------------------------------------------------*/
