/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
#define SEG_G_Pin GPIO_PIN_0
#define SEG_G_GPIO_Port GPIOC
#define SEG_D_Pin GPIO_PIN_1
#define SEG_D_GPIO_Port GPIOC
#define SEG_E_Pin GPIO_PIN_2
#define SEG_E_GPIO_Port GPIOC
#define SEG_C_Pin GPIO_PIN_3
#define SEG_C_GPIO_Port GPIOC
#define PHOTORESISTOR_Pin GPIO_PIN_1
#define PHOTORESISTOR_GPIO_Port GPIOA
#define SEG_B_Pin GPIO_PIN_4
#define SEG_B_GPIO_Port GPIOC
#define SEG_F_Pin GPIO_PIN_5
#define SEG_F_GPIO_Port GPIOC
#define SEG_A_Pin GPIO_PIN_6
#define SEG_A_GPIO_Port GPIOC
#define SEG_DP_Pin GPIO_PIN_7
#define SEG_DP_GPIO_Port GPIOC
#define COM4_Pin GPIO_PIN_8
#define COM4_GPIO_Port GPIOC
#define COM3_Pin GPIO_PIN_9
#define COM3_GPIO_Port GPIOC
#define COM2_Pin GPIO_PIN_10
#define COM2_GPIO_Port GPIOC
#define COM1_Pin GPIO_PIN_11
#define COM1_GPIO_Port GPIOC
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/