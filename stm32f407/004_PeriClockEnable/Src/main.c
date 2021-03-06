/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

/*** Setting up required clock ***/
// RCC ABP2 peripheral clock enable register -- RCC_APB2ENR
#define RCC_BASE_ADDR			0x40023800UL
#define RCC_APB2_ENR_OFFSET		0x44UL
#define RCC_APB2_ENR_ADDR		(RCC_BASE_ADDR + RCC_APB2_ENR_OFFSET)

#define ADC_BASE_ADDR			0x40012000UL // Found in memory map in ref manual
#define ADC_CR1_REG_OFFSET		0x04UL
#define ADC_CR1_REG_ADDR		(ADC_BASE_ADDR + ADC_CR1_REG_OFFSET)

//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif

int main(void)
{
    uint32_t *pAdcCr1Reg = (uint32_t*) ADC_CR1_REG_ADDR;
    uint32_t *pRccApb2Enr = (uint32_t*) RCC_APB2_ENR_ADDR;

    // Enable the peripheral clock for ADC1
    *pRccApb2Enr |= (1 << 8);

    // Modify the ADC CR1 register
    *pAdcCr1Reg |= (1 << 8);

	for(;;);
}
