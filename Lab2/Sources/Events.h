/* ###################################################################
**     Filename    : Events.h
**     Project     : Lab2
**     Processor   : MK20DX128VLH5
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-08-04, 11:53, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
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

#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MK20DX128EX5]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void);


/*
** ===================================================================
**     Event       :  CI2C1_OnReceiveData (module Events)
**
**     Component   :  CI2C1 [InternalI2C]
**     Description :
**         This event is invoked when I2C finishes the reception of the
**         data successfully. This event is not available for the SLAVE
**         mode and if both RecvChar and RecvBlock are disabled. This
**         event is enabled only if interrupts/events are enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void CI2C1_OnReceiveData(void);

/*
** ===================================================================
**     Event       :  CI2C1_OnTransmitData (module Events)
**
**     Component   :  CI2C1 [InternalI2C]
**     Description :
**         This event is invoked when I2C finishes the transmission of
**         the data successfully. This event is not available for the
**         SLAVE mode and if both SendChar and SendBlock are disabled.
**         This event is enabled only if interrupts/events are enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void CI2C1_OnTransmitData(void);

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
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
