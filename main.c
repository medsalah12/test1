/**
  ******************************************************************************
  * @file    main.c
  * @author  Alaya Yozbachi Mohamed Salah
  * @brief   Gpio driver
  * @version V1.0.0
  * @date    17-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "LED.h"
/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{
GPIO_Clock_Enable(GPIOD);
GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL, LOW_SPEED);
GPIO_Write_Pin(GPIOD,PIN12,SET);
GPIO_Write_Pin(GPIOD,PIN12,RESET);
GPIO_Config(GPIOD,PIN10,INPUT,OUTPUT_PUSH_PULL,LOW_SPEED);

uint8_t ReadPinTest = GPIO_Read_Pin(GPIOD,PIN10);


  /*Configure GPIO pin Output Level */
 // HAL_GPIO_WritePin(GPIOE, CS_I2C_SPI_Pin|GPIO_PIN_8, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  //HAL_GPIO_WritePin(OTG_FS_PowerSwitchOn_GPIO_Port, OTG_FS_PowerSwitchOn_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin Output Level */
  //HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);

  















  while(1)
  {
  
  }
}

/**************************************END OF FILE**************************************/
