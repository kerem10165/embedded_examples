#include <stdint.h>
#include "stm32f401xx.h"



int main(void)
{
	GPIO_RegDef_t* p = get_gpio_port_register(GPIOA);
    /* Loop forever */
	for(;;);
}
