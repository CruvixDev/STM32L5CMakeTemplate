/**
  ******************************************************************************
  * @file           : app_version.h
  * @brief          : Handle the software version in source code
  * @author         : <date>
  * @date           : <yyyy/MM/dd>
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LIB_VERSION_H
#define __LIB_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

/* Private includes ----------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
#define cu8LIB_VERSION_PROJECT_NAME_MAX_LENGTH (uint8_t)32
#define cu8LIB_VERSION_COMPILE_DATE_MAX_LENGTH (uint8_t)32
#define cu8LIB_VERSION_COMPILE_TIME_MAX_LENGTH (uint8_t)32
#define cu8LIB_VERSION_GIT_HASH_MAX_LENGTH     (uint8_t)9

#define csLIB_VERSION_PROJECT_NAME "Template_STM32_CMake_Project"

#define cu8LIB_VERSION_MAJOR (uint8_t)1
#define cu8LIB_VERSION_MINOR (uint8_t)0
#define cu8LIB_VERSION_PATCH (uint8_t)0

#define csLIB_VERSION_GIT_HASH ""

#define csLIB_VERSION_COMPILE_DATE __DATE__
#define csLIB_VERSION_COMPILE_TIME __TIME__

/* Exported types ------------------------------------------------------------*/
typedef struct
{
  char sProjectName[cu8LIB_VERSION_PROJECT_NAME_MAX_LENGTH];
  char sCompileDate[cu8LIB_VERSION_COMPILE_DATE_MAX_LENGTH];
  char sCompileTime[cu8LIB_VERSION_COMPILE_TIME_MAX_LENGTH];
  uint8_t u8VersionMajor;
  uint8_t u8VersionMinor;
  uint8_t u8VersionPatch;
  char sGitHash[cu8LIB_VERSION_GIT_HASH_MAX_LENGTH];
} sSoftwareMetadata_t;

/* Exported macro ------------------------------------------------------------*/

/* Exported functions prototypes ---------------------------------------------*/

/* Private defines -----------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* __LIB_VERSION_H */
