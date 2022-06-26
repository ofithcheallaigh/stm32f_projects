
#include <stdint.h>

/*** Setting up required clock ***/
// RCC ABP2 peripheral clock enable register -- RCC_APB2ENR
#define RCC_BASE_ADDR			0x40023800UL
// #define RCC_APB2_ENR_OFFSET		0x44UL
#define RCC_CFGR_REG_OFFSET		0x08UL
#define RCC_APB2_ENR_ADDR		(RCC_BASE_ADDR + RCC_CFGR_REG_OFFSET)



//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif

int main(void)
{

	// 1. Configure the RCC_CFGR register - RCC CLock Configuration Register
	// MCO1 is bits 21 and 22

	for(;;);
}
