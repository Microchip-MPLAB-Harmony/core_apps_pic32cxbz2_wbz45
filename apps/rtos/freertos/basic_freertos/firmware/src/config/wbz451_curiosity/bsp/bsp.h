/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp.h

  Summary:
    Board Support Package Header File 

  Description:
    This file contains constants, macros, type definitions and function
    declarations 
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef _BSP_H
#define _BSP_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "device.h"

// *****************************************************************************
// *****************************************************************************
// Section: BSP Macros
// *****************************************************************************
// *****************************************************************************
/*** LED Macros for RGB_LED_RED ***/
#define RGB_LED_RED_Toggle() (GPIOB_REGS->GPIO_LATINV = (1<<0))
#define RGB_LED_RED_Get() ((GPIOB_REGS->GPIO_PORT >> 0) & 0x1)
#define RGB_LED_RED_On() (GPIOB_REGS->GPIO_LATSET = (1<<0))
#define RGB_LED_RED_Off() (GPIOB_REGS->GPIO_LATCLR = (1<<0))
/*** LED Macros for RGB_LED_GREEN ***/
#define RGB_LED_GREEN_Toggle() (GPIOB_REGS->GPIO_LATINV = (1<<3))
#define RGB_LED_GREEN_Get() ((GPIOB_REGS->GPIO_PORT >> 3) & 0x1)
#define RGB_LED_GREEN_On() (GPIOB_REGS->GPIO_LATSET = (1<<3))
#define RGB_LED_GREEN_Off() (GPIOB_REGS->GPIO_LATCLR = (1<<3))
/*** LED Macros for RGB_LED_BLUE ***/
#define RGB_LED_BLUE_Toggle() (GPIOB_REGS->GPIO_LATINV = (1<<5))
#define RGB_LED_BLUE_Get() ((GPIOB_REGS->GPIO_PORT >> 5) & 0x1)
#define RGB_LED_BLUE_On() (GPIOB_REGS->GPIO_LATSET = (1<<5))
#define RGB_LED_BLUE_Off() (GPIOB_REGS->GPIO_LATCLR = (1<<5))
/*** LED Macros for USER_LED ***/
#define USER_LED_Toggle() (GPIOB_REGS->GPIO_LATINV = (1<<7))
#define USER_LED_Get() ((GPIOB_REGS->GPIO_PORT >> 7) & 0x1)
#define USER_LED_On() (GPIOB_REGS->GPIO_LATSET = (1<<7))
#define USER_LED_Off() (GPIOB_REGS->GPIO_LATCLR = (1<<7))




// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

#endif // _BSP_H

/*******************************************************************************
 End of File
*/
