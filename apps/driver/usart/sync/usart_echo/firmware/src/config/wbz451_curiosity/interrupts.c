/*******************************************************************************
 System Interrupts File

  Company:
    Microchip Technology Inc.

  File Name:
    interrupt.c

  Summary:
    Interrupt vectors mapping

  Description:
    This file maps all the interrupt vectors to their corresponding
    implementations. If a particular module interrupt is used, then its ISR
    definition can be found in corresponding PLIB source file. If a module
    interrupt is not used, then its ISR implementation is mapped to dummy
    handler.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "configuration.h"
#include "definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: System Interrupt Vector Functions
// *****************************************************************************
// *****************************************************************************

extern uint32_t _stack;

void Dummy_Handler(void);

/* Brief default interrupt handler for unused IRQs.*/
void __attribute__((optimize("-O1"),section(".text.Dummy_Handler"),long_call, noreturn))Dummy_Handler(void)
{
#if defined(__DEBUG) || defined(__DEBUG_D) && defined(__XC32)
    __builtin_software_breakpoint();
#endif
    while (1)
    {
    }
}
/* Device vectors list dummy definition*/
void Reset_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
void NonMaskableInt_Handler     ( void ) __attribute__((weak, alias("Dummy_Handler")));
void HardFault_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
void MemoryManagement_Handler   ( void ) __attribute__((weak, alias("Dummy_Handler")));
void BusFault_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
void UsageFault_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
void vPortSVCHandler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
void xPortPendSVHandler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
void xPortSysTickHandler        ( void ) __attribute__((weak, alias("Dummy_Handler")));
void RTC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void EIC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void FREQM_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
void FLASH_CONTROL_Handler      ( void ) __attribute__((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_A_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler")));
void CHANGE_NOTICE_B_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler")));
void DMAC_0_3_Handler           ( void ) __attribute__((weak, alias("Dummy_Handler")));
void DMAC_4_15_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
void EVSYS_0_3_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
void EVSYS_4_11_Handler         ( void ) __attribute__((weak, alias("Dummy_Handler")));
void PAC_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void RAMECC_Handler             ( void ) __attribute__((weak, alias("Dummy_Handler")));
void SERCOM0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void SERCOM1_USART_InterruptHandler ( void ) __attribute__((weak, alias("Dummy_Handler")));
void SERCOM2_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void SERCOM3_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TCC0_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TCC1_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TCC2_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TC0_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TC1_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TC2_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TC3_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ADCHS_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
void AC_Handler                 ( void ) __attribute__((weak, alias("Dummy_Handler")));
void AES_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void TRNG_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ICM_Handler                ( void ) __attribute__((weak, alias("Dummy_Handler")));
void PUKCC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
void QSPI_Handler               ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ZB_INT0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void BT_INT0_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void BT_INT1_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ARBITER_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ADC_FAULT_Handler          ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ADC_FCC_Handler            ( void ) __attribute__((weak, alias("Dummy_Handler")));
void ADC_BGVR_RDY_Handler       ( void ) __attribute__((weak, alias("Dummy_Handler")));
void CLKI_WAKEUP_NMI_Handler    ( void ) __attribute__((weak, alias("Dummy_Handler")));
void BT_LC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));
void BT_RC_Handler              ( void ) __attribute__((weak, alias("Dummy_Handler")));



/* Mutiple handlers for vector */



__attribute__ ((section(".vectors")))
const DeviceVectors exception_table=
{
    /* Configure Initial Stack Pointer, using linker-generated symbols */
    .pvStack = (void*) (&_stack),

    .pfnReset_Handler              = ( void * ) Reset_Handler,
    .pfnNonMaskableInt_Handler     = ( void * ) NonMaskableInt_Handler,
    .pfnHardFault_Handler          = ( void * ) HardFault_Handler,
    .pfnMemoryManagement_Handler   = ( void * ) MemoryManagement_Handler,
    .pfnBusFault_Handler           = ( void * ) BusFault_Handler,
    .pfnUsageFault_Handler         = ( void * ) UsageFault_Handler,
    .pfnSVCall_Handler             = ( void * ) vPortSVCHandler,
    .pfnDebugMonitor_Handler       = ( void * ) DebugMonitor_Handler,
    .pfnPendSV_Handler             = ( void * ) xPortPendSVHandler,
    .pfnSysTick_Handler            = ( void * ) xPortSysTickHandler,
    .pfnRTC_Handler                = ( void * ) RTC_Handler,
    .pfnEIC_Handler                = ( void * ) EIC_Handler,
    .pfnFREQM_Handler              = ( void * ) FREQM_Handler,
    .pfnFLASH_CONTROL_Handler      = ( void * ) FLASH_CONTROL_Handler,
    .pfnCHANGE_NOTICE_A_Handler    = ( void * ) CHANGE_NOTICE_A_Handler,
    .pfnCHANGE_NOTICE_B_Handler    = ( void * ) CHANGE_NOTICE_B_Handler,
    .pfnDMAC_0_3_Handler           = ( void * ) DMAC_0_3_Handler,
    .pfnDMAC_4_15_Handler          = ( void * ) DMAC_4_15_Handler,
    .pfnEVSYS_0_3_Handler          = ( void * ) EVSYS_0_3_Handler,
    .pfnEVSYS_4_11_Handler         = ( void * ) EVSYS_4_11_Handler,
    .pfnPAC_Handler                = ( void * ) PAC_Handler,
    .pfnRAMECC_Handler             = ( void * ) RAMECC_Handler,
    .pfnSERCOM0_Handler            = ( void * ) SERCOM0_Handler,
    .pfnSERCOM1_Handler            = ( void * ) SERCOM1_USART_InterruptHandler,
    .pfnSERCOM2_Handler            = ( void * ) SERCOM2_Handler,
    .pfnSERCOM3_Handler            = ( void * ) SERCOM3_Handler,
    .pfnTCC0_Handler               = ( void * ) TCC0_Handler,
    .pfnTCC1_Handler               = ( void * ) TCC1_Handler,
    .pfnTCC2_Handler               = ( void * ) TCC2_Handler,
    .pfnTC0_Handler                = ( void * ) TC0_Handler,
    .pfnTC1_Handler                = ( void * ) TC1_Handler,
    .pfnTC2_Handler                = ( void * ) TC2_Handler,
    .pfnTC3_Handler                = ( void * ) TC3_Handler,
    .pfnADCHS_Handler              = ( void * ) ADCHS_Handler,
    .pfnAC_Handler                 = ( void * ) AC_Handler,
    .pfnAES_Handler                = ( void * ) AES_Handler,
    .pfnTRNG_Handler               = ( void * ) TRNG_Handler,
    .pfnICM_Handler                = ( void * ) ICM_Handler,
    .pfnPUKCC_Handler              = ( void * ) PUKCC_Handler,
    .pfnQSPI_Handler               = ( void * ) QSPI_Handler,
    .pfnZB_INT0_Handler            = ( void * ) ZB_INT0_Handler,
    .pfnBT_INT0_Handler            = ( void * ) BT_INT0_Handler,
    .pfnBT_INT1_Handler            = ( void * ) BT_INT1_Handler,
    .pfnARBITER_Handler            = ( void * ) ARBITER_Handler,
    .pfnADC_FAULT_Handler          = ( void * ) ADC_FAULT_Handler,
    .pfnADC_FCC_Handler            = ( void * ) ADC_FCC_Handler,
    .pfnADC_BGVR_RDY_Handler       = ( void * ) ADC_BGVR_RDY_Handler,
    .pfnCLKI_WAKEUP_NMI_Handler    = ( void * ) CLKI_WAKEUP_NMI_Handler,
    .pfnBT_LC_Handler              = ( void * ) BT_LC_Handler,
    .pfnBT_RC_Handler              = ( void * ) BT_RC_Handler,


};

/*******************************************************************************
 End of File
*/
