/* ###################################################################
 **     Filename    : main.c
 **     Project     : Lab2
 **     Processor   : MK20DX128VLH5
 **     Version     : Driver 01.01
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2015-08-04, 11:53, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file main.c
 ** @version 01.01
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup main_module main module documentation
 **  @{
 */
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "CI2C1.h"
#include "IntI2cLdd1.h"
#include "PWM1.h"
#include "PwmLdd1.h"
#include "PWM2.h"
#include "PwmLdd2.h"
#include "TU1.h"
#include "PWM3.h"
#include "PwmLdd3.h"
#include "Term1.h"
#include "Inhr1.h"
#include "ASerialLdd1.h"
#include "FC321.h"
#include "RealTimeLdd1.h"
#include "TU2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
	/* Write your local variable definition here */

	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/
	/* Write your code here */
	/* For example: for(;;) { } */
	word ret;
	char buf [2];
	buf[0] = 0x2A;
	buf[1] = 0b1;
	CI2C1_SendBlock(buf,2,&ret);
	short int Data [3];
	int time;

	for(;;){

		FC321_GetTimeMS(&time);

		CI2C1_RecvBlock(&Data,6,&ret);
		short int x = Data[0];
		short int y = Data[1];
		short int z = Data[2];

		if (time > 100){
			Term1_MoveTo(1,1);
			Term1_Cls();
			Term1_SendNum(x);
			Term1_MoveTo(1,2);
			Term1_SendNum(y);
			Term1_MoveTo(1,3);
			Term1_SendNum(z);
			Term1_MoveTo(1,4);
			PWM1_SetRatio16(abs(x));
			PWM2_SetRatio16(abs(y));
			PWM3_SetRatio16(abs(z));
			FC321_Reset();
		}





	}




	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
	/*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
#ifdef PEX_RTOS_START
	PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
#endif
	/*** End of RTOS startup code.  ***/
	/*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
	for(;;){}
	/*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
 ** @}
 */
/*
 ** ###################################################################
 **
 **     This file was created by Processor Expert 10.5 [05.21]
 **     for the Freescale Kinetis series of microcontrollers.
 **
 ** ###################################################################
 */
