/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include <stdio.h>

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define JI1_Pin GPIO_PIN_13
#define JI1_GPIO_Port GPIOC
#define JI2_Pin GPIO_PIN_14
#define JI2_GPIO_Port GPIOC
#define JI3_Pin GPIO_PIN_15
#define JI3_GPIO_Port GPIOC
#define JI4_Pin GPIO_PIN_0
#define JI4_GPIO_Port GPIOC
#define JI5_Pin GPIO_PIN_1
#define JI5_GPIO_Port GPIOC
#define JI6_Pin GPIO_PIN_2
#define JI6_GPIO_Port GPIOC
#define JI7_Pin GPIO_PIN_3
#define JI7_GPIO_Port GPIOC
#define JI8_Pin GPIO_PIN_0
#define JI8_GPIO_Port GPIOA
#define JI9_Pin GPIO_PIN_1
#define JI9_GPIO_Port GPIOA
#define JI10_Pin GPIO_PIN_2
#define JI10_GPIO_Port GPIOA
#define JI11_Pin GPIO_PIN_3
#define JI11_GPIO_Port GPIOA
#define JI12_Pin GPIO_PIN_4
#define JI12_GPIO_Port GPIOA
#define JI13_Pin GPIO_PIN_5
#define JI13_GPIO_Port GPIOA
#define JI14_Pin GPIO_PIN_6
#define JI14_GPIO_Port GPIOA
#define JI15_Pin GPIO_PIN_7
#define JI15_GPIO_Port GPIOA
#define JI16_Pin GPIO_PIN_4
#define JI16_GPIO_Port GPIOC
#define JI17_Pin GPIO_PIN_5
#define JI17_GPIO_Port GPIOC
#define JI18_Pin GPIO_PIN_0
#define JI18_GPIO_Port GPIOB
#define JI19_Pin GPIO_PIN_1
#define JI19_GPIO_Port GPIOB
#define JI20_Pin GPIO_PIN_2
#define JI20_GPIO_Port GPIOB
#define JI21_Pin GPIO_PIN_10
#define JI21_GPIO_Port GPIOB
#define JI22_Pin GPIO_PIN_11
#define JI22_GPIO_Port GPIOB
#define JO1_Pin GPIO_PIN_12
#define JO1_GPIO_Port GPIOB
#define JO2_Pin GPIO_PIN_13
#define JO2_GPIO_Port GPIOB
#define JO3_Pin GPIO_PIN_14
#define JO3_GPIO_Port GPIOB
#define JO4_Pin GPIO_PIN_15
#define JO4_GPIO_Port GPIOB
#define JO5_Pin GPIO_PIN_6
#define JO5_GPIO_Port GPIOC
#define JO6_Pin GPIO_PIN_7
#define JO6_GPIO_Port GPIOC
#define JO7_Pin GPIO_PIN_8
#define JO7_GPIO_Port GPIOC
#define JO8_Pin GPIO_PIN_9
#define JO8_GPIO_Port GPIOC
#define JO9_Pin GPIO_PIN_8
#define JO9_GPIO_Port GPIOA
#define JO10_Pin GPIO_PIN_11
#define JO10_GPIO_Port GPIOA
#define JO11_Pin GPIO_PIN_12
#define JO11_GPIO_Port GPIOA
#define JO12_Pin GPIO_PIN_15
#define JO12_GPIO_Port GPIOA
#define JO13_Pin GPIO_PIN_10
#define JO13_GPIO_Port GPIOC
#define JO14_Pin GPIO_PIN_11
#define JO14_GPIO_Port GPIOC
#define JO15_Pin GPIO_PIN_12
#define JO15_GPIO_Port GPIOC
#define JO16_Pin GPIO_PIN_2
#define JO16_GPIO_Port GPIOD
#define JO17_Pin GPIO_PIN_3
#define JO17_GPIO_Port GPIOB
#define JO18_Pin GPIO_PIN_4
#define JO18_GPIO_Port GPIOB
#define JO19_Pin GPIO_PIN_5
#define JO19_GPIO_Port GPIOB
#define JO20_Pin GPIO_PIN_6
#define JO20_GPIO_Port GPIOB
#define JO21_Pin GPIO_PIN_7
#define JO21_GPIO_Port GPIOB
#define JO22_Pin GPIO_PIN_8
#define JO22_GPIO_Port GPIOB
#define JO23_Pin GPIO_PIN_9
#define JO23_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#ifdef __GNUC__
	#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)//重写putchar函数在GCC编译器中不可�?,�?以cubeide只能重新__io_putchar
#else
	#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)//只�?�用于keil5
#endif

//#define USER_MAIN_DEBUG
#ifdef USER_MAIN_DEBUG
	#define user_main_printf(format, ...) printf( format "\r\n",##__VA_ARGS__)
	#define user_main_info(format, ...) printf("【main】info:" format "\r\n",##__VA_ARGS__)
	#define user_main_debug(format, ...) printf("【main】debug:" format "\r\n",##__VA_ARGS__)
	#define user_main_error(format, ...) printf("【main】error:" format "\r\n",##__VA_ARGS__)
#else
	#define user_main_printf(format, ...)
	#define user_main_info(format, ...)
	#define user_main_debug(format, ...)
	#define user_main_error(format, ...)
#endif

#define printf(format, ...) printf( format "\r\n",##__VA_ARGS__)

#define JO23RESET HAL_GPIO_WritePin(JO23_GPIO_Port, JO23_Pin, GPIO_PIN_RESET)
#define JO23SET HAL_GPIO_WritePin(JO23_GPIO_Port, JO23_Pin, GPIO_PIN_SET)
#define JO16RESET HAL_GPIO_WritePin(JO16_GPIO_Port, JO16_Pin, GPIO_PIN_RESET)
#define JO16SET HAL_GPIO_WritePin(JO16_GPIO_Port, JO16_Pin, GPIO_PIN_SET)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
