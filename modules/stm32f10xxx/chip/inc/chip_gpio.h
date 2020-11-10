#ifndef chip_gpio_projectEnable
#define chip_gpio_projectEnable 1 /**<@brief enable/disable the project */
#endif
 /*
 * ******************************[source File]*************************************//**
 * \addtogroup chip_gpio chip_gpio.h module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file chip_gpio.h module
 * \brief bloque de comenteario para documentacion para describir este archivo de
 * cabecera o header file.
 * \version v01.01
 * \date   26 de feb. de 2017
 * \note none
 * \author JEL, Jesus Emanuel Luccioni
 * \li piero.jel@gmail.com
 *
 * @} doxygen end group definition
 ************************************************************************************ */
/*
 * -- Definimos el Nombre del modulo
*/
#ifndef __chip_gpio_h__
#define __chip_gpio_h__
#if(chip_gpio_projectEnable == 1)
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * =======================================[begin of project file]=======================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 */
/*
 *
 * ============================[Open, cplusplus]============================
 *
 */
#ifdef __cplusplus
extern "C" {
#endif
/*
 *
 *
 * *********************************************************************************************
 *
 * =================================[ Begin include header file ]================================
 *
 * ********************************************************************************************
 *
 * TODO: include header file sector, "only in case especific"
 *
 */
#include <version.h>
#include <stdio.h>


/*
 * *********************************************************************************************
 *
 * ==================================[ End include header file ]=================================
 *
 * ******************************************************************************************** *
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * ==========================[ Begin labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** *
 *
 * TODO: labels enable/disable functions
 *
 */
/* -- local */
#define chip_gpio_USE_LocalData 0 /**<@brief enable/disable the use Global Data */
#define chip_gpio_USE_LocalFunctions 0 /**<@brief enable/disable the use Gobal functions */
#define chip_gpio_USE_LocalMacroApis 0 /**<@brief enable/disable the use Local macros functions */
/* -- global */
#define chip_gpio_USE_GlobalMacro 1  /**<@brief enable/disable the use Global Macros/Labels */
#define chip_gpio_USE_GlobalTypedef 1 /**<@brief enable/disable the use Global Typedef */
#define chip_gpio_USE_GlobalData 0 /**<@brief enable/disable the use Global Data */
#define chip_gpio_USE_GlobalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define chip_gpio_USE_GlobalMacroApis 0 /**<@brief enable/disable the use Gobal macros functions */

#ifndef __chip_gpio_version__
/**
 * \def __chip_gpio_version__
 * \brief versiones :
 * Formato :
 *
 * \'<XX>v<Y>{d:e}<Z>\'
 *    |    |    |   |
 *    |    |    |    --> 1 ~ 9, indicamos los pasos, cambios pequeños locales
 *    |    |    --> d : provisoria, en estado de Depuracion "debbug"
 *    |    |        e : estable
 *    |    --> Cifra mas sisgnificativa del control de versionado 0~9, conforma el la subversion
 *    --> Cifra mas Significativa del control de versionado 1~9, conforma la parte alta de la version
 *    la cual especifica cambio radicales que inpactan en el uso de las mismas
 *    should be
 *      + 01v0d0    → Version inicial,
 *      + 01v0d1    → es la version 0 mas el ....
 *      + 01v0d2    → es la version 1 mas el agregado de
 * */
#define __chip_gpio_version__   version_SetNumber(01v0d0) /**<@brief Definimos la Version que utilizaremos */
#endif /* #ifndef __chip_gpio_version__ */

/*
 * *********************************************************************************************
 *
 * ==========================[ End labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** *
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * ====================================[Begin Global typedef]====================================
 *
 * ******************************************************************************************** */
#if(chip_gpio_USE_GlobalTypedef == 1)
/*
 *  TODO: Global typedef
 */
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global typedef       version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
typedef enum {INPUT = 0, OUTPUT = 1} gpio_mode_t;

/** @brief estructura de dato que representa los modulos GPIO, configuracion, estado y establecimiento */
typedef struct
{						/* offset		*/
  registerRW32_t CRL;/**<@brief Port configuration register low */ 	/*	 0x00		*/
  registerRW32_t CRH;/**<@brief Port configuration register high*/ 	/*	 0x04		*/
  registerRW32_t IDR;/**<@brief Port, Input Data Register */			/*	 0x08		*/
  registerRW32_t ODR;/**<@brief Port, Output Data Register */ 		/*	 0x0C		*/
  registerRW32_t BSRR;/**<@brief Port bit set[parte baja]/reset[parte alta] register*/ 		/*	 0x10		*/
  registerRW32_t BRR;/**<@brief Port bit reset register */ 				/*	 0x14		*/
  registerRW32_t LCKR;/**<@brief Port configuration lock register */ 	/*	 0x18		*/
} STM_GPIO_t;


/** @brief enumeracion para la seleccion del modo de operacion de un GPIO*/
typedef enum
{

	gpio_InputAnalog = 0x00  /**<@brief Input Analog mode */
	,gpio_InputFloating = 0x04  /**<@brief Input, Floating  (reset state) */
	,gpio_InputPullUp = 0x28  /**<@brief Input with pull-up  */
	,gpio_InputPullDown = 0x18  /**<@brief Input with pull-down */
	//-- 01: Output mode, max speed 10 MHz.
	,gpio_OutGP_PP_10Mhz = 0x01 /**<@brief General purpose output push-pull, max speed 10 MHz */
	,gpio_OutGP_OD_10Mhz = 0x05 /**<@brief General purpose output Open-drain, max speed 10 MHz */
	,gpio_OutAF_PP_10Mhz = 0x09 /**<@brief Alternate function output Push-pull, max speed 10 MHz */
	,gpio_OutAF_OD_10Mhz = 0x0D /**<@brief Alternate function output Open-drain, max speed 10 MHz */
	//-- 10: Output mode, max speed 2 MHz.
	,gpio_OutGP_PP_2Mhz = 0x02  /**<@brief General purpose output push-pull, max speed 2 MHz */
	,gpio_OutGP_OD_2Mhz = 0x06  /**<@brief General purpose output Open-drain, max speed 2 MHz */
	,gpio_OutAF_PP_2Mhz = 0x0A  /**<@brief Alternate function output Push-pull, max speed 2 MHz */
	,gpio_OutAF_OD_2Mhz = 0x0E  /**<@brief Alternate function output Open-drain, max speed 2 MHz */
	//-- 11: Output mode, max speed 50 MHz.
	,gpio_OutGP_PP_50Mhz = 0x03 /**<@brief General purpose output push-pull, max speed 50 MHz */
	,gpio_OutGP_OD_50Mhz = 0x07 /**<@brief General purpose output Open-drain, max speed 50 MHz */
	,gpio_OutAF_PP_50Mhz = 0x0B /**<@brief Alternate function output Push-pull, max speed 50 MHz */
	,gpio_OutAF_OD_50Mhz = 0x0F /**<@brief Alternate function output Open-drain, max speed 50 MHz */
}GPIOpinCfg_t;

typedef struct
{
	uint32_t sCRL;  /**<@brief for save the value port's Configuration Register Low 'CRL' */
	uint32_t sCRH;	/**<@brief for save the value port's Configuration Register High 'CRH'*/
}GPIOportCfg_t;

typedef enum
{
	pinLOW = 0,
	pinHIGH = 1,
	pinTOGGLE = 2
} pinAction_t;
typedef enum
{
	pinINPUT = 0,
	pinOUTPUT = 1,
	pinINPUT_PULL_UP = 2,
} pinMode_t;


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global typedef       version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global typedef       version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/

/**
 * @brief definimos el tipo de estructura  */
typedef struct
{
	char vtchar ;  /**<@brief */
	int vtint ;    /**<@brief */
	double vtdouble ;  /**<@brief */
}struct_example_t ;
/**
 * @brief example definition global enum, <brief> */
typedef enum
{
	 chip_gpio_e1 = 0 ,  /**<@brief */
	 chip_gpio_e2 = 1 ,  /**<@brief */
}enum_example_t;
/**
 * @brief example de redefinicion de una variable/estructura/union/enumeracion */
typedef unsigned int v_example_t;
/**
 * @brief example de redifinicion puntero a funcion
 *  prototipo: unsigned int fx (unsigned int,unsigned int);
 */
typedef unsigned int (*uint_fx_uint_uint_t) (unsigned int,unsigned int);

/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global typedef       version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_GlobalTypedef == 1) */
/*
* *********************************************************************************************
*
* ====================================[End Global typedef]====================================
*
* ********************************************************************************************
*
*
*/
/*
 *
 * *********************************************************************************************
 *
 * ==========================[ Begin Global Macros/labels definition]===========================
 *
 * ******************************************************************************************** **/
#if(chip_gpio_USE_GlobalMacro == 1)
/*
 * TODO : Macros/labels definition
 */
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/* XXX debemos incluir la definicion del dispositivo como por ejemplo STM32F103C8
 * la cual determinara la cantidad de GPIO disponibles para este dispositivos y
 * por ende el alcance de este modulo
 *
 * */


/*		{begin}		- {end}
* 		0x4001 0800 - 0x4001 0BFF		==>  GPIO port A, 0
* 		0x4001 0C00 - 0x4001 0FFF		==>  GPIO Port B, 1
* 		0x4001 1000 - 0x4001 13FF		==>  GPIO Port C, 2
* 		0x4001 1400 - 0x4001 17FF		==>  GPIO Port D, 3
* 		0x4001 1800 - 0x4001 1BFF		==>  GPIO Port E, 4
* 		0x4001 1C00 - 0x4001 1FFF		==>  GPIO Port F, 5
* 		0x4001 2000 - 0x4001 23FF		==>  GPIO Port G, 6
*/
#if 0
#define GPIO0_BASE_ADR		(APB2_BASE_ADR + 0x0800)
#define GPIO1_BASE_ADR		(APB2_BASE_ADR + 0x0C00)
#define GPIO2_BASE_ADR		(APB2_BASE_ADR + 0x1000)
#define GPIO3_BASE_ADR		(APB2_BASE_ADR + 0x1400)
#define GPIO4_BASE_ADR		(APB2_BASE_ADR + 0x1800)
#define GPIO5_BASE_ADR		(APB2_BASE_ADR + 0x1c00)
#define GPIO6_BASE_ADR		(APB2_BASE_ADR + 0x2000)
#else
#define GPIO0_BASE_ADR		(0x40010800UL)
#define GPIO1_BASE_ADR		(0x40010C00UL)
#define GPIO2_BASE_ADR		(0x40011000UL)
#define GPIO3_BASE_ADR		(0x40011400UL)
#define GPIO4_BASE_ADR		(0x40011800UL)
#define GPIO5_BASE_ADR		(0x40011C00UL)
#define GPIO6_BASE_ADR		(0x40012000UL)
#define GPIOn_DIFF_ADR		(0x0400) /* (GPIO0_BASE_ADR - GPIO1_BASE_ADR )*/
#endif

#define STM_GPIOA               ((STM_GPIO_t *) GPIO0_BASE_ADR)
#define STM_GPIOB               ((STM_GPIO_t *) GPIO1_BASE_ADR)
#define STM_GPIOC               ((STM_GPIO_t *) GPIO2_BASE_ADR)
#define STM_GPIOD               ((STM_GPIO_t *) GPIO3_BASE_ADR)
#define STM_GPIOE               ((STM_GPIO_t *) GPIO4_BASE_ADR)
#define STM_GPIOF               ((STM_GPIO_t *) GPIO5_BASE_ADR)
#define STM_GPIOG               ((STM_GPIO_t *) GPIO6_BASE_ADR)
#define STM_GPIO0               ((STM_GPIO_t *) GPIO0_BASE_ADR)
#define STM_GPIO1               ((STM_GPIO_t *) GPIO1_BASE_ADR)
#define STM_GPIO2               ((STM_GPIO_t *) GPIO2_BASE_ADR)
#define STM_GPIO3               ((STM_GPIO_t *) GPIO3_BASE_ADR)
#define STM_GPIO4               ((STM_GPIO_t *) GPIO4_BASE_ADR)
#define STM_GPIO5               ((STM_GPIO_t *) GPIO5_BASE_ADR)
#define STM_GPIO6               ((STM_GPIO_t *) GPIO6_BASE_ADR)


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/

#define chip_gpio_MACRO_1	0/**<@brief example of macro definitions  */
#define chip_gpio_LABEL_A 	 /**<@brief example of Labels Definitions */


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_GlobalMacro == 1) */
/*
 * *********************************************************************************************
 *
 * ==========================[ End Macros/labels Globals ]===========================
 *
 * ******************************************************************************************** *
 *
 */
#ifdef __chip_gpio_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin Local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Local declaration    version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Local declaration    version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Local declaration    version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Local declaration    version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
/*
 *
 * *********************************************************************************************
 *
 * ==================================[ End local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#else /* ifdef __chip_gpio_c__ */
/*
 *
 * *********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 **********************************************************************************************
 * SECTOR excluido de -> chip_gpio.c, utlizar con cuidado
 *
 * TODO : Only external declaration
 */
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin external declaration version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   external declaration version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin external declaration version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   external declaration version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */

/*
 *
 * *********************************************************************************************
 *
 * ==============================[ End Only externa declaration ]=============================
 *
 **********************************************************************************************
 *
 */
 #endif /* ifdef __chip_gpio_c__ */
/*
 *
 *
 * *********************************************************************************************
 *
 * ==================================[ Begin Global declaration ]=================================
 *
 **********************************************************************************************
 *
 *
 */
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin Global data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
#if(chip_gpio_USE_GlobalData==1)
/*
 * TODO : Global data declaration
*/
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global data declaration ver  01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 0
*/
extern unsigned int globalExample; /**<@brief variable global example, brief of data */


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global data declaration ver  01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global data declaration ver  01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global data declaration ver  01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_GlobalData==1) */
/* ---------------------------------------------------------------------------------
 *
 * ==================[End Global data declaration]==============================
 *
 * ---------------------------------------------------------------------------------
 *
 */
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin Global functions declaration]=========================
 *
 * --------------------------------------------------------------------------------*/
#if(chip_gpio_USE_GlobalFunctions == 1)
/*
 * TODO : Global functions declaration
*/

#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d0 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/

 /*
  * maskPin : mascara para seleccionar lo pines, para poder modificar uno o varios pines en el mismo llamado
  * */
 void chip_gpio_digitalWrite(uint8_t pin, action_t pinAction);
 bool_t chip_gpio_digitalRead(uint8_t pin);

 //void chip_gpio_pinMode(uint8_t pin, INPUT);
 void chip_gpio_InitPin(uint32_t port,uint32_t pin, GPIOpinCfg_t mode);
 void chip_gpio_SetPinLow(uint32_t port,uint32_t pin);
 void chip_gpio_SetPinHigh(uint32_t port,uint32_t pin);
 void chip_gpio_SetPinToggle(uint32_t port,uint32_t pin);
 bool_t chip_gpio_GetPinStatus(uint32_t port,uint32_t pin);
 //fixme falta definir las siguetnes funciones
 /*
  *	=====[  ]=====
  * */
 void chip_gpio_DeInit(uint32_t port);
 void chip_gpio_InitPort(uint32_t port,uint32_t maskPin, GPIOpinCfg_t mode);
 void chip_gpio_SetDefaultMode(void * mode);
 void chip_gpio_GetConfigPin(uint32_t port,uint32_t pin,void * mode);
 void chip_gpio_GetConfigPort(uint32_t port,uint32_t pin,void * mode);


 /* lee el pin desde el registro de entrada del puerto */
 uint32_t chip_gpio_GetInputRegister(uint8_t port, uint32_t mask);
 /* lee el registro de entrada del puerto */
 uint32_t chip_gpio_GetOutputRegister(uint8_t port, uint32_t mask);
 uint32_t chip_gpio_GetPortValue(uint32_t port,uint32_t mask);
 uint32_t chip_gpio_SetPortValue(uint32_t port,uint32_t mask);

/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ End   Global functions declaration ver 01v0d0 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d1 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


 /*
 *
 * ****************************************************************************//**
 * \fn int chip_gpio_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \par example :
  <pre>
  a = chip_gpio_test_01(1,"hola");
  </pre>
 *********************************************************************************/
int chip_gpio_test_01(unsigned int a,const char* name);
/*
*
* ****************************************************************************//**
* \fn int chip_gpio_test_01(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
 <pre>
 a = chip_gpio_test_01(1,"hola");
 </pre>
*********************************************************************************/
int chip_gpio_test_02(unsigned int a,const char* name);

/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ End   Global functions declaration ver 01v0d1 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if( chip_gpio_USE_GlobalFunctions == 1) */
/* ---------------------------------------------------------------------------------
 *
 * ==================[End Global functions declaration]=========================
 *
 * --------------------------------------------------------------------------------
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * ===========================[ Begin Global Macros functions ]==================================
 *
 ********************************************************************************************** */
 #if (chip_gpio_USE_GlobalMacroApis == 1)
 #if (version_QueryNumber(__chip_gpio_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/*
 *
 * ******************************************************************//**
 * @brief Bit Clear File
 * @param file : register file
 * @param posBit : position bit in the register file
 * @return	Nothing
 *********************************************************************/
#define chip_gpio_BITcLEARfILE(file,posBit)\
(file &=(~(0x01UL<<posBit)))
/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_GlobalMacroApis == 1) */
/* **********************************************************************************************
 *
 * ===========================[ End Global Macros functions ]==================================
 *
 **********************************************************************************************
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * ==================================[ END GLOBAL declaration ]=================================
 *
 ********************************************************************************************** */
/*
 *============================[close, cplusplus]============================
 */
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/*==============================[end of file]==============================*/
#endif /* #ifndef __chip_gpio_h__ */
/*
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(chip_gpio_projectEnable == 1) */
