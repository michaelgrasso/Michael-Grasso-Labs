/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : RealTimeLdd1.h
**     Project     : Lab2
**     Processor   : MK20DX128VLH5
**     Component   : RealTime_LDD
**     Version     : Component 01.007, Driver 01.01, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-08-05, 11:21, # CodeGen: 7
**     Abstract    :
**          This component "RealTime_LDD" implements a free running counter
**          for time measurement.
**          This RealTime component provides a high level API for unified
**          hardware access to various timer devices using the TimerUnit
**          component.
**     Settings    :
**          Component name                                 : RealTimeLdd1
**          Periodic interrupt source                      : FTM1_MOD
**          Counter                                        : FTM1_CNT
**          Interrupt service/event                        : Enabled
**            Interrupt                                    : INT_FTM1
**            Interrupt priority                           : medium priority
**          Resolution                                     : 25 ms
**          SW counter                                     : 32-bit
**          Maximum time of event                          : 107374182.4 sec
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Auto initialization                          : yes
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**          Referenced components                          : 
**            Linked TimerUnit                             : TU2
**     Contents    :
**         Init      - LDD_TDeviceData* RealTimeLdd1_Init(LDD_TUserData *UserDataPtr);
**         Reset     - LDD_TError RealTimeLdd1_Reset(LDD_TDeviceData *DeviceDataPtr);
**         GetTimeUS - LDD_TError RealTimeLdd1_GetTimeUS(LDD_TDeviceData *DeviceDataPtr, uint16_t...
**         GetTimeMS - LDD_TError RealTimeLdd1_GetTimeMS(LDD_TDeviceData *DeviceDataPtr, uint16_t...
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file RealTimeLdd1.h
** @version 01.01
** @brief
**          This component "RealTime_LDD" implements a free running counter
**          for time measurement.
**          This RealTime component provides a high level API for unified
**          hardware access to various timer devices using the TimerUnit
**          component.
*/         
/*!
**  @addtogroup RealTimeLdd1_module RealTimeLdd1 module documentation
**  @{
*/         

#ifndef __RealTimeLdd1_H
#define __RealTimeLdd1_H

/* MODULE RealTimeLdd1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "TU2.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define RealTimeLdd1_PRPH_BASE_ADDRESS  0x40039000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define RealTimeLdd1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_RealTimeLdd1_ID))

/* Methods configuration constants - generated for all enabled component's methods */
#define RealTimeLdd1_Init_METHOD_ENABLED /*!< Init method of the component RealTimeLdd1 is enabled (generated) */
#define RealTimeLdd1_Reset_METHOD_ENABLED /*!< Reset method of the component RealTimeLdd1 is enabled (generated) */
#define RealTimeLdd1_GetTimeUS_METHOD_ENABLED /*!< GetTimeUS method of the component RealTimeLdd1 is enabled (generated) */
#define RealTimeLdd1_GetTimeMS_METHOD_ENABLED /*!< GetTimeMS method of the component RealTimeLdd1 is enabled (generated) */



/*
** ===================================================================
**     Method      :  RealTimeLdd1_Init (component RealTime_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc. If the
**         property ["Enable in init. code"] is set to "yes" value then
**         the device is also enabled (see the description of the
**         [Enable] method). In this case the [Enable] method is not
**         necessary and needn't to be generated. This method can be
**         called only once. Before the second call of Init the [Deinit]
**         must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* RealTimeLdd1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  RealTimeLdd1_Reset (component RealTime_LDD)
*/
/*!
**     @brief
**         This method resets software counter.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
*/
/* ===================================================================*/
LDD_TError RealTimeLdd1_Reset(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  RealTimeLdd1_GetTimeUS (component RealTime_LDD)
*/
/*!
**     @brief
**         This method returns the time (as a 16-bit unsigned integer)
**         in microseconds since the last Reset method call.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         TimePtr         - A pointer to the returned 16-bit
**                           value in microseconds
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_OVERFLOW - Software counter overflow
**                           ERR_MATH - Overflow during evaluation
*/
/* ===================================================================*/
LDD_TError RealTimeLdd1_GetTimeUS(LDD_TDeviceData *DeviceDataPtr, uint16_t *TimePtr);

/*
** ===================================================================
**     Method      :  RealTimeLdd1_GetTimeMS (component RealTime_LDD)
*/
/*!
**     @brief
**         This method returns the time (as a 16-bit unsigned integer)
**         in milliseconds since the last Reset method call.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         TimePtr         - A pointer to the returned 16-bit
**                           value in milliseconds
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_OVERFLOW - Software counter overflow
**                           ERR_MATH - Overflow during evaluation
*/
/* ===================================================================*/
LDD_TError RealTimeLdd1_GetTimeMS(LDD_TDeviceData *DeviceDataPtr, uint16_t *TimePtr);

/*
** ===================================================================
**     Method      :  RealTimeLdd1_TU2_OnCounterRestart (component RealTime_LDD)
**
**     Description :
**         The method services the event of the linked component TU2.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void TU2_OnCounterRestart(LDD_TUserData *UserDataPtr);

/* END RealTimeLdd1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __RealTimeLdd1_H */
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
