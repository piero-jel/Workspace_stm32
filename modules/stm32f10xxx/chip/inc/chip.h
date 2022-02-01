#ifndef chip_projectEnable
#define chip_projectEnable 1 /**<@brief enable/disable the project */
#endif
 /*
 * ******************************[source File]*************************************//**
 * \addtogroup chip chip.h module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file chip.h module
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
#ifndef __chip_h__
#define __chip_h__
#if(chip_projectEnable == 1)
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
#include <stdint.h> /* for typedef */
#include <version.h>


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
#define chip_USE_LocalData 0 /**<@brief enable/disable the use Global Data */
#define chip_USE_LocalFunctions 0 /**<@brief enable/disable the use Gobal functions */
#define chip_USE_LocalMacroApis 0 /**<@brief enable/disable the use Local macros functions */
/* -- global */
#define chip_USE_GlobalMacro 1  /**<@brief enable/disable the use Global Macros/Labels */
#define chip_USE_GlobalTypedef 1 /**<@brief enable/disable the use Global Typedef */
#define chip_USE_GlobalData 0 /**<@brief enable/disable the use Global Data */
#define chip_USE_GlobalFunctions 0 /**<@brief enable/disable the use Gobal functions */
#define chip_USE_GlobalMacroApis 1 /**<@brief enable/disable the use Gobal macros functions */

#ifndef __chip_version__
/**
 * \def __chip_version__
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
#define __chip_version__   version_SetNumber(01v0d0) /**<@brief Definimos la Version que utilizaremos */
#endif /* #ifndef __chip_version__ */

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
 * ==========================[ Begin Global Macros/labels definition]===========================
 *
 * ******************************************************************************************** **/
#if(chip_USE_GlobalMacro == 1)
/*
 * TODO : Macros/labels definition
 */
#if (version_QueryNumber(__chip_version__,01v0d0))
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

//#define chip_MACRO_1	0/**<@brief example of macro definitions  */
/*=====[ etiquetas para la seleccion de la referencia ]=====*/
#define chip_SETrefPINinput_EXTERN_PULL_DOWN		0x0904	/*0b0000 1001*/
#define chip_SETrefPINinput_EXTERN_PULL_UP			0x0A04	/*0b0000 1010*/
#define chip_SETrefPINinput_INTERN_PULL_DOWN		0x9018	/*0b1001 0000*/
#define chip_SETrefPINinput_INTERN_PULL_UP			0xA028	/*0b1010 0000*/

//#define chip_GETrefPINinput_0xA028					0x28	/*0b1010 0000*/

#define chip_QUERYrefPINinput_EXTERN_PULL_DOWN		0x0100	/*0b0000 0001*/
#define chip_QUERYrefPINinput_EXTERN_PULL_UP		0x0200	/*0b0000 0010*/
#define chip_QUERYrefPINinput_EXTERNAL      		0x0800	/*0b0000 1000*/
#define chip_QUERYrefPINinput_INTERN_PULL_DOWN		0x1000	/*0b1001 0000*/
#define chip_QUERYrefPINinput_INTERN_PULL_UP		0x2000	/*0b1010 0000*/
#define chip_QUERYrefPINinput_INTERNAL        		0x8000	/*0b1000 0000*/
#define chip_QUERYrefPINinput_PULL_UP      			0x2200	/*0b0010 0010*/
#define chip_QUERYrefPINinput_PULL_DOWN     		0x1100	/*0b0001 0001*/


/*-- PORT A
PA0		PA1		PA2		PA3		PA4		PA5		PA6		PA7
PA8		PA9		PA10	PA11	PA12					PA15 */
#define chip_PORT_PA_0		0
#define chip_PORT_PA_1		0
#define chip_PORT_PA_2		0
#define chip_PORT_PA_3		0
#define chip_PORT_PA_4		0
#define chip_PORT_PA_5		0
#define chip_PORT_PA_6		0
#define chip_PORT_PA_7		0
#define chip_PORT_PA_8		0
#define chip_PORT_PA_9		0
#define chip_PORT_PA_10 	0
#define chip_PORT_PA_11		0
#define chip_PORT_PA_12		0
#define chip_PORT_PA_13		0
#define chip_PORT_PA_14		0
#define chip_PORT_PA_15		0
//
#define chip_PIN_PA_0		0
#define chip_PIN_PA_1		1
#define chip_PIN_PA_2		2
#define chip_PIN_PA_3		3
#define chip_PIN_PA_4		4
#define chip_PIN_PA_5		5
#define chip_PIN_PA_6		6
#define chip_PIN_PA_7		7
#define chip_PIN_PA_8		8
#define chip_PIN_PA_9		9
#define chip_PIN_PA_10		10
#define chip_PIN_PA_11		11
#define chip_PIN_PA_12		12
#define chip_PIN_PA_13		13
#define chip_PIN_PA_14		14
#define chip_PIN_PA_15		15
/*-- PORT B
	PB0		PB1		    		PB3		PB4		PB5		PB6		PB7
	PB8		PB9		PB10		PB11	PB12	PB13	PB14	PB15 	*/
#define chip_PORT_PB_0		1
#define chip_PORT_PB_1		1
#define chip_PORT_PB_3		1
#define chip_PORT_PB_4		1
#define chip_PORT_PB_5		1
#define chip_PORT_PB_6		1
#define chip_PORT_PB_7		1
#define chip_PORT_PB_8		1
#define chip_PORT_PB_9		1
#define chip_PORT_PB_10		1
#define chip_PORT_PB_11		1
#define chip_PORT_PB_12		1
#define chip_PORT_PB_13		1
#define chip_PORT_PB_14		1
#define chip_PORT_PB_15		1
//
#define chip_PIN_PB_0		0
#define chip_PIN_PB_1		1
#define chip_PIN_PB_3		3
#define chip_PIN_PB_4		4
#define chip_PIN_PB_5		5
#define chip_PIN_PB_6		6
#define chip_PIN_PB_7		7
#define chip_PIN_PB_8		8
#define chip_PIN_PB_9		9
#define chip_PIN_PB_10		10
#define chip_PIN_PB_11		11
#define chip_PIN_PB_12		12
#define chip_PIN_PB_13		13
#define chip_PIN_PB_14		14
#define chip_PIN_PB_15		15
/*-- PORT C
 * 	PC13		PC14		PC15 	*/
//
#define chip_PORT_PC_12		2 /* XXX: depende de la placa */
#define chip_PORT_PC_13		2
#define chip_PORT_PC_14		2
#define chip_PORT_PC_15		2
//
#define chip_PIN_PC_12		12 /* XXX: depende de la placa */
#define chip_PIN_PC_13		13
#define chip_PIN_PC_14		14
#define chip_PIN_PC_15		15


/**<@ Direccion Base del Bus periferico avanzado uno. Perifericos conectados a el:
 * DAC SPI3/I2S PWR SPI2/I2S IWDG BKP CAN1 WWDG CAN2 RTC I2C2 TIM7 I2C1 TIM6 UART5 TIM5 UART4 TIM4 USART3 TIM3 USART2 TIM2,*/
#define APB1_BASE_ADR		0x40000000
/**<@ Direccion Base del Bus periferico abanzado uno. Perifericos conectados a el:
 * GPIOC GPIOD GPIOE  GPIOA GPIOB ADC1 ADC2 EXTI AFI USART1 SPI1 TIM1 */
#define APB2_BASE_ADR		0x40010000

#define AHB_BASE_ADR		0x40020000
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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
#endif /* #if(chip_USE_GlobalMacro == 1) */
/*
 * *********************************************************************************************
 *
 * ==========================[ End Macros/labels Globals ]===========================
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
#if(chip_USE_GlobalTypedef == 1)
/*
 *  TODO: Global typedef
 */
#if (version_QueryNumber(__chip_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 0
*/
#if 0
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
	 chip_e1 = 0 ,  /**<@brief */
	 chip_e2 = 1 ,  /**<@brief */
}enum_example_t;
/**
 * @brief example de redefinicion de una variable/estructura/union/enumeracion */
typedef unsigned int v_example_t;
/**
 * @brief example de redifinicion puntero a funcion
 *  prototipo: unsigned int fx (unsigned int,unsigned int);
 */
typedef unsigned int (*uint_fx_uint_uint_t) (unsigned int,unsigned int);
#endif



#if 1
#define Newline 		"\n"
#define HorizontalTab	"\t"
#define VerticalTab	 	"\v"
#define CarriReturn		"\r"
#define FormFeed		"\f"
#define ESC				"\e"
#define BlackSpace		"\b"
#define AudibleAlert	"\a"

#else

#define Newline 		'\n'
#define HorizontalTab	'\t'
#define VerticalTab	 	'\v'
#define CarriReturn		'\r'
#define FormFeed		'\f'
#define ESC				'\e'
#define BlackSpace		'\b'
#define AudibleAlert	'\a'

#endif




#ifndef NULL
#define NULL ((void*) 0)
#endif

#ifndef __I
  #define   __I     volatile const       /**<@brief Defines 'read only' permissions */
#endif//#ifndef __I
#ifndef __O
#define     __O     volatile             /**<@brief Defines 'write only' permissions */
#endif//#ifndef __O
#ifndef __IO
#define     __IO    volatile             /**<@brief Defines 'read / write' permissions */
#endif//#ifndef __IO

/*=====[ definicion de Tipos de Variables para registros 32-Bits]=====*/
typedef volatile const uint32_t registerRO32_t ; /**<@brief Defines register 32-Bits 'read only' permissions */
typedef volatile uint32_t registerWO32_t ; /**<@brief Defines register 32-Bits 'write only' permissions */
typedef volatile uint32_t registerRW32_t ; /**<@brief Defines register 32-Bits 'read only' permissions */
/*=====[ definicion de Tipos de Variables para registros 16-Bits]=====*/
typedef volatile const uint16_t registerRO16_t ; /**<@brief Defines register 16-Bits 'read only' permissions */
typedef volatile uint16_t registerWO16_t ; /**<@brief Defines register 16-Bits 'write only' permissions */
typedef volatile uint16_t registerRW16_t ; /**<@brief Defines register 16-Bits 'read only' permissions */
/*=====[ definicion de Tipos de Variables para registros 8-Bits]=====*/
typedef volatile const uint8_t registerRO8_t ; /**<@brief Defines register 16-Bits 'read only' permissions */
typedef volatile uint8_t registerWO8_t ; /**<@brief Defines register 16-Bits 'write only' permissions */
typedef volatile uint8_t registerRW8_t ; /**<@brief Defines register 16-Bits 'read only' permissions */


/** @brief Enumeracion del tipo Bool  */
typedef enum
{
	FALSE=0x00, /**<@brief Falso, Cero */
	TRUE = ~FALSE,/**<@brief Verdadero, Distinto de Cero*/
}bool_t;
//
//
#if 1
/** @brief Flag Status and Interrupt Flag Status type definition  */
typedef enum {eRESET = 0, eSET = !eRESET} flagStatus_t, intStatus_t;
//
//
/** @brief Flag Status and Interrupt Flag Status type definition  */
typedef enum {LOW = 0, HIGH = !LOW} setState_t,getState_t,action_t;
//
//
/** @brief Functional State Definition */
typedef enum {eDISABLE = 0, eENABLE = !eDISABLE} functionalState_t;
//
//
/** @brief Enumeracion del tipo status  */
typedef enum {eERROR = 0, eSUCCESS = !eERROR} status_t;

#endif
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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
#endif /* #if(chip_USE_GlobalTypedef == 1) */
/*
* *********************************************************************************************
*
* ====================================[End Global typedef]====================================
*
* ********************************************************************************************
*
*
*/
#ifdef __chip_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#if (version_QueryNumber(__chip_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 0
*/


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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
/*
 *
 * *********************************************************************************************
 *
 * ==================================[ End local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#else /* ifdef __chip_c__ */
/*
 *
 * *********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 **********************************************************************************************
 * SECTOR excluido de -> chip.c, utlizar con cuidado
 *
 * TODO : Only external declaration
 */
#if (version_QueryNumber(__chip_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */

/*
 *
 * *********************************************************************************************
 *
 * ==============================[ End Only externa declaration ]=============================
 *
 **********************************************************************************************
 *
 */
 #endif /* ifdef __chip_c__ */
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
#if(chip_USE_GlobalData==1)
/*
 * TODO : Global data declaration
*/
#if (version_QueryNumber(__chip_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
#endif /* #if(chip_USE_GlobalData==1) */
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
#if(chip_USE_GlobalFunctions == 1)
/*
 * TODO : Global functions declaration
*/

#if (version_QueryNumber(__chip_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d0 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 0
*/

 /*
 *
 * ****************************************************************************//**
 * \fn int chip_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \par example :
  <pre>
  a = chip_test_01(1,"hola");
  </pre>
 *********************************************************************************/
int chip_test_01(unsigned int a,const char* name);
/*
*
* ****************************************************************************//**
* \fn int chip_test_01(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
 <pre>
 a = chip_test_01(1,"hola");
 </pre>
*********************************************************************************/
int chip_test_02(unsigned int a,const char* name);


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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
#endif /* #if( chip_USE_GlobalFunctions == 1) */
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
 #if (chip_USE_GlobalMacroApis == 1)
 #if (version_QueryNumber(__chip_version__,01v0d0))
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

#define chip_GET_PIN(label) chip_PIN_##label
#define chip_GET_PORT(label) chip_PORT_##label
//
//
/*
 	gpio_InputAnalog = 0x00
	,gpio_InputFloating = 0x04
	,gpio_InputPullUp = 0x28
	,gpio_InputPullDown = 0x18
 */




//
//
/*********************************************************************
 * @brief	Macro funcion para establecer la referencia de un pin
 * de entrada de un Pin digital
 * @param refType: Tipo de referencia
 * should be :
 * 		+ EXTERN_PULL_DOWN
 * 		+ EXTERN_PULL_UP
 * 		+ INTERN_PULL_DOWN
 * 		+ INTERN_PULL_DOWN
 * @return nothing
 * @note
 * @par example :
 <pre>
 a = chip_nombreAPI_1(Arg);
 </pre>
 *********************************************************************/
#define chip_SETrefPINinput(refType) \
		(chip_SETrefPINinput_##refType)

#define chip_GETrefPINinput(label) (label & 0x00FF)
//#define chip_GETrefPINinput(label) 	#label
//
//
/*********************************************************************
 * @brief	Macro para consultar la referencia almacenada en una etiqueta
 * @param label:
 * @param refType: Tipo de referencia
 * should be :
 * 		+ EXTERN_PULL_DOWN
 * 		+ EXTERN_PULL_UP
 * 		+ INTERN_PULL_DOWN
 * 		+ INTERN_PULL_UP
 * 		+ INTERNAL
 * 		+ EXTERNAL
 * 		+ PULL_UP
 * 		+ PULL_DOWN
 * @return
 * 	+ true
 * 	+ false
 * @note
 * @par example :
 <pre>
 a = chip_nombreAPI_1(Arg);
 </pre>
 *********************************************************************/
#define chip_QUERYrefPINinput(label,refType)\
	((label & chip_QUERYrefPINinput_##refType) != 0)


#define chip_SLEEP() __WFI()
#define chip_wfi()	 __WFI()


#if ((chip_DEBUG_ENABLE==1 ) && defined(__dev_stdio_h__))
//#define chip_debug(str,...)		dev_printf(str,...)
#define chip_debug(...)	dev_printf(__VA_ARGS__)
#elif((chip_DEBUG_ENABLE==1 ) && defined(__print_other_h__))
#else//#if (chip_DEBUG_ENABLE==1 )
#define chip_debug(...)
#endif//#if (chip_DEBUG_ENABLE==1 )


#define exit_EXIT_SUCCESS return 0
#define exit_EXIT_FAILURE return 1
#define exit(ExitStatus) exit_##ExitStatus
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
#elif (version_QueryNumber(__chip_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_version__,01v0d0)) */
#endif /* #if(chip_USE_GlobalMacroApis == 1) */
/* **********************************************************************************************
 *
 * ===========================[ End Global Macros functions ]==================================
 *
 **********************************************************************************************
 *
 */

/*add header file del modulo chip */
#include "stm32f10x.h"
#include "chip_gpio.h"
#include "chip_systick.h"
#include "chip_semihost.h"






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
#endif /* #ifndef __chip_h__ */
/*
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(chip_projectEnable == 1) */
