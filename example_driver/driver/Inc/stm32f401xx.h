#ifndef INC_STM32F401XX_H_
#define INC_STM32F401XX_H_

#include <stdint.h>

#define FLASH_BASE_ADDR				0x08000000U
#define SRAM_BASE_ADDR				0x20000000U
#define ROM_BASE_ADDR				0x1FFF0000U //reference manual implies that this area actaually main memory.


#define PERIPHERAL_BASE_ADDR		0x40000000U //it can be found on datasheet in part of memory mapping
#define APB1_BASE_ADDR				PERIPHERAL_BASE_ADDR //it can be found on datasheet in part of memory mapping
#define APB2_BASE_ADDR				0x40010000U //it can be found on datasheet in part of memory mapping
#define AHB1_BASE_ADDR				0x40020000U //it can be found on datasheet in part of memory mapping
#define AHB2_BASE_ADDR				0x50000000U //it can be found on datasheet in part of memory mapping

#define GPIOA_BASE_ADDR				(AHB1_BASE_ADDR + 0x0000)
#define GPIOB_BASE_ADDR				(AHB1_BASE_ADDR + 0x0400)
#define GPIOC_BASE_ADDR				(AHB1_BASE_ADDR + 0x0800)
#define GPIOD_BASE_ADDR				(AHB1_BASE_ADDR + 0x0C00)
#define GPIOE_BASE_ADDR				(AHB1_BASE_ADDR + 0x1000)
#define GPIOH_BASE_ADDR				(AHB1_BASE_ADDR + 0x1C00)

/*ABP1 BUS*/
#define I2C1_BASE_ADDR				(APB1_BASE_ADDR + 0x5400)
#define I2C2_BASE_ADDR				(APB1_BASE_ADDR + 0x5800)
#define I2C3_BASE_ADDR				(APB1_BASE_ADDR + 0x5C00)

#define SPI2_BASE_ADDR				(APB1_BASE_ADDR + 0x3800)
#define SPI3_BASE_ADDR				(APB1_BASE_ADDR + 0x3C00)

#define USART2_BASE_ADDR			(APB1_BASE_ADDR + 0x4400)
//There isn't uart

/*ABP2 BUS*/
#define SPI1_BASE_ADDR				(APB2_BASE_ADDR + 0x3000)

#define USART1_BASE_ADDR			(APB2_BASE_ADDR + 0x1000)
#define USART6_BASE_ADDR			(APB2_BASE_ADDR + 0x1400)

#define EXTI_BASE_ADDR				(APB2_BASE_ADDR + 0x3C00)

#define SYSCFG_BASE_ADDR			(APB2_BASE_ADDR + 0x3800)

typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFR[2]; //AFRL AFRH

}GPIO_RegDef_t; //this can be found at gpio register map

#define get_gpio_port_register(X) (GPIO_RegDef_t*)(X ## _BASE_ADDR)



#endif /* INC_STM32F401XX_H_ */
