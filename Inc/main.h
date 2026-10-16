/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l4xx_hal.h"

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
#define GPIO_I_EN_Pin GPIO_PIN_2
#define GPIO_I_EN_GPIO_Port GPIOE
#define GPIO_5V_EN_Pin GPIO_PIN_13
#define GPIO_5V_EN_GPIO_Port GPIOC
#define GPIO_INA_A_Pin GPIO_PIN_6
#define GPIO_INA_A_GPIO_Port GPIOF
#define GPIO_P_EN_Pin GPIO_PIN_2
#define GPIO_P_EN_GPIO_Port GPIOC
#define GPIO_OW_Pin GPIO_PIN_3
#define GPIO_OW_GPIO_Port GPIOC
#define GPIO_I_WK_O_Pin GPIO_PIN_0
#define GPIO_I_WK_O_GPIO_Port GPIOB
#define SPI1_CS_Pin GPIO_PIN_12
#define SPI1_CS_GPIO_Port GPIOE
#define EXTI_INT1_Pin GPIO_PIN_2
#define EXTI_INT1_GPIO_Port GPIOG
#define GPIO_I_BTD_Pin GPIO_PIN_3
#define GPIO_I_BTD_GPIO_Port GPIOG
#define GPIO_SD_Detect_Pin GPIO_PIN_6
#define GPIO_SD_Detect_GPIO_Port GPIOG
#define GPIO_I_WK_I_Pin GPIO_PIN_4
#define GPIO_I_WK_I_GPIO_Port GPIOD
#define GPIO__Pin GPIO_PIN_11
#define GPIO__GPIO_Port GPIOG
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
