#include "uart.h"

void uart1_init(void)
{
    GPIO_InitTypeDef            GPIO_InitStruct;

    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_USART1_CLK_ENABLE();

    GPIO_InitStruct.Pin =USART1_TX_PIN;
    GPIO_InitStruct.Mode =GPIO_MODE_AF_PP;
    GPIO_InitStruct.Speed =GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate =GPIO_AF4_USART1;

    HAL_GPIO_Init(GPIOA,&GPIO_InitStruct);
    GPIO_InitStruct.Pin =USART1_RX_PIN;
    HAL_GPIO_Init(GPIOA,&GPIO_InitStruct);

    


}