#ifndef drv_blink_projectEnable
#define drv_blink_projectEnable 1 /**<@brief enable/disable the project */
#endif
 /*
 * ******************************[source File]*************************************//**
 * \addtogroup drv_blink drv_blink.h module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file drv_blink.h module
 * \brief bloque de comenteario para documentacion para describir este archivo de
 * cabecera o header file.
 * \version v01.01
 * \date 25 feb. 2020
 * \note none
 * \author JEL, Jesus Emanuel Luccioni
 * \li piero.jel@gmail.com
 *
 * @} doxygen end group definition
 ************************************************************************************ */
/*
 * -- Definimos el Nombre del modulo
*/
#ifndef __drv_blink_h__
#define __drv_blink_h__
#if(drv_blink_projectEnable == 1)
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
#include <chip.h>
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
/**
 * \def drv_blink_USE_LocalData
 * \brief enable[1]/disable[0] the use Global Data
 * \note
 * \warning
 */
#define drv_blink_USE_LocalData          1
/**
 *\def drv_blink_USE_LocalFunctions
 *\brief enable[1]/disable[0] the use Gobal functions
 * \note
 * \warning */
#define drv_blink_USE_LocalFunctions     0
/**
 * \def drv_blink_USE_LocalMacroApis
 * \brief enable[1]/disable[0] the use Local macros functions
 * \note
 * \warning */
#define drv_blink_USE_LocalMacroApis     1
/**
 * \def drv_blink_USE_ISR
 * \brief enable/disable the use ISR (rutinas para el servicio de interupciones)
 * \note
 * \warning */
#define drv_blink_USE_ISR                0
/* -- global */
/**
 * \def drv_blink_USE_GlobalMacro
 * \brief enable/disable the use Global Macros/Labels
 * \note
 * \warning */
#define drv_blink_USE_GlobalMacro        1
/**
 * \def drv_blink_USE_GlobalTypedef
 * \brief enable/disable the use Global Typedef
 * \note
 * \warning */
#define drv_blink_USE_GlobalTypedef      1
/**
 * \def drv_blink_USE_GlobalData
 * \brief enable/disable the use Global Data
 * \note
 * \warning */
#define drv_blink_USE_GlobalData         0
/**
 * \def drv_blink_USE_GlobalFunctions
 * \brief enable/disable the use Gobal functions
 * \note
 * \warning */
#define drv_blink_USE_GlobalFunctions    1
/**
 * \def drv_blink_USE_GlobalMacroApis
 * \brief enable/disable the use Gobal macros functions
 * \note
 * \warning  */
#define drv_blink_USE_GlobalMacroApis    1
/**
 * \def drv_blink_USE_PortingForMCU
 * \brief establecemos el porting en funcion del micro controlador
 * 	+ 8		micro controladores de 8-Bits (hasta 8-pines por puerto)
 * 	+ 16	depende del fabricante
 * 	+ 32	Idem, al anterior
 * \note
 * \warning  */
#define drv_blink_USE_PortingForMCU    0

/**
* \def drv_switch_LOCAL_GPIO_MEM_PRG
* \brief enable/disable que las variable locales destinadas a
* la manipulacion de los GPIO, se almacenen en
* 	+ 1, en memoria de programa
* 	+ 0, en memoria RAM.
* \note
* \warning  */
#define drv_blink_LOCAL_GPIO_MEM_PRG	  0

#ifndef __drv_blink_version__
/**
 * \def __drv_blink_version__
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
#define __drv_blink_version__   version_SetNumber(01v0d0) /**<@brief Definimos la Version que utilizaremos */
#endif /* #ifndef __drv_blink_version__ */

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
#if(drv_blink_USE_GlobalMacro == 1)
/*
 * TODO : Macros/labels definition
 */
#if (version_QueryNumber(__drv_blink_version__,01v0d0) \
		|| version_QueryNumber(__drv_blink_version__,01v0d1))
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
/**
 * \def drv_blink_TIME_ON
 * \brief establecemos el time_on en mili sgundos
 * \note nota
 * \warning mensaje de precaucion */
/**
 * \def drv_blink_TIME_OFF
 * \brief establecemos el time_off en mili sgundos
 * \note nota
 * \warning mensaje de precaucion */
#define drv_blink_TIME_ON		200
#define drv_blink_TIME_OFF		600
#define drv_blink_PULL_UP		1
#define drv_blink_MAX_NBLINK	5
#define drv_blink_MIN_NBLINK	0

/**
 * \def drv_blink_NUMBER_PINS
 * \brief ETIQUETA PARA ESTABLECER LA CANTIDAD DE PINES QUE TENDREMOS.
 * \note nota
 * \warning mensaje de precaucion */
#define drv_blink_NUMBER_PINS   1

#define drv_blink_PORT_0        2
#define drv_blink_PIN_0         13
#define drv_blink_PORT_1        1
#define drv_blink_PIN_1         1
#define drv_blink_PORT_2        1
#define drv_blink_PIN_2         1
#define drv_blink_PORT_3        1
#define drv_blink_PIN_3         1
#define drv_blink_PORT_4        1
#define drv_blink_PIN_4         1
#define drv_blink_PORT_5        1
#define drv_blink_PIN_5         1
#define drv_blink_PORT_6        1
#define drv_blink_PIN_6         1
#define drv_blink_PORT_7        1
#define drv_blink_PIN_7         1

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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_GlobalMacro == 1) */
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
#if(drv_blink_USE_GlobalTypedef == 1)
/*
 *  TODO: Global typedef
 */
#if (version_QueryNumber(__drv_blink_version__,01v0d0)\
		|| version_QueryNumber(__drv_blink_version__,01v0d1))
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

/**
 * \typedef drv_blink_hdl_sT ;
 * \brief handler para manejar una instancia de blinky.
 * \ref acu_ms
 * \ref status
 * \ref i
 * \ref pin
 * \note
 * \warning
 */
typedef struct
{
	tickms_t acu_ms ;  /**<@brief acumulador de mili segundos de la FSM */
	uint8_t status; /**<@brief variable que retendra el status de la FSM */
	uint8_t blink;    /**<@brief variable que retendra el numero de blink "parpadeo" */
	uint8_t i;  /**<@brief variable de respaldo para blink y status.*/
#if(drv_blink_NUMBER_PINS != 1)
	uint8_t pin;  /**<@brief variable que retiene el numero de pin.*/
#endif/* #if(drv_blink_NUMBER_PINS != 1) */

}drv_blink_hdl_sT ;
#if 0
/**
 * \typedef drv_blink_enum_example_t;
 * \brief example definition global enum
 * \ref drv_blink_e1
 * \ref drv_blink_e2
 * \note
 * \warning
 */
typedef enum
{
	 drv_blink_e1 = 0 ,  /**<@brief enumeracion del tipo "e1" */
	 drv_blink_e2 = 1 ,  /**<@brief enumeracion del tipo "e2" */
}drv_blink_enum_example_t;
/**
 * \typedef drv_blink_example_t;
 * \brief example de redefinicion de un tipo primitivo de dato */
typedef unsigned int drv_blink_example_t;
/**
 * \typedef uint_fx_uint_uint_t
 * \brief example de redifinicion puntero a funcion
 *  prototipo: unsigned int fx (unsigned int,unsigned int);
 */
typedef unsigned int (*uint_fx_uint_uint_t) (unsigned int,unsigned int);
#endif
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
 * \typedef drv_blink_hdl_sT ;
 * \brief handler para manejar una instancia de blinky.
 * \ref acu_ms
 * \ref status
 * \ref i
 * \note
 * \warning
 */
typedef struct
{
	tickms_t acu_ms,time_on,time_off ;  /**<@brief acumulador de mili segundos de la FSM */
	uint8_t status; /**<@brief variable que retendra el status de la FSM */
	uint8_t blink;    /**<@brief variable que retendra el numero de blink "parpadeo" */
	uint8_t i;  /**<@brief variable de respaldo para blink y status.*/
}drv_blink_hdl_sT ;

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
#elif (version_QueryNumber(__drv_blink_version__,01v0d2))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global typedef       version 01v0d2 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d2
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global typedef       version 01v0d2 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d3))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global typedef       version 01v0d3 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d3
*/

/**
 * \typedef drv_blink_str_example_t ;
 * \brief definimos el tipo de estructura
 * \ref vtchar
 * \ref vtint
 * \ref vtdouble
 * \note
 * \warning
 */
typedef struct
{
	char vtchar ;  /**<@brief valor del tipo char */
	int vtint ;    /**<@brief valor del tipo int */
	double vtdouble ;  /**<@brief valor del tipo double */
}drv_blink_str_example_t ;
/**
 * \typedef drv_blink_enum_example_t;
 * \brief example definition global enum
 * \ref drv_blink_e1
 * \ref drv_blink_e2
 * \note
 * \warning
 */
typedef enum
{
	 drv_blink_e1 = 0 ,  /**<@brief enumeracion del tipo "e1" */
	 drv_blink_e2 = 1 ,  /**<@brief enumeracion del tipo "e2" */
}drv_blink_enum_example_t;
/**
 * \typedef drv_blink_example_t;
 * \brief example de redefinicion de un tipo primitivo de dato */
typedef unsigned int drv_blink_example_t;
/**
 * \typedef uint_fx_uint_uint_t
 * \brief example de redifinicion puntero a funcion
 *  prototipo: unsigned int fx (unsigned int,unsigned int);
 */
typedef unsigned int (*uint_fx_uint_uint_t) (unsigned int,unsigned int);

/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global typedef       version 01v0d3 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d4))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global typedef       version 01v0d4 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d4
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global typedef       version 01v0d4 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_GlobalTypedef == 1) */
/*
* *********************************************************************************************
*
* ====================================[End Global typedef]====================================
*
* ********************************************************************************************
*
*
*/
#ifdef __drv_blink_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin local declaration    version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   local declaration    version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin local declaration    version 01v0d1 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   local declaration    version 01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
/*
 *
 * *********************************************************************************************
 *
 * ==================================[ End local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#else /* ifdef __drv_blink_c__ */
/*
 *
 * *********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 **********************************************************************************************
 * SECTOR excluido de -> drv_blink.c, utlizar con cuidado
 *
 * TODO : Only external declaration
 */
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */

/*
 *
 * *********************************************************************************************
 *
 * ==============================[ End Only externa declaration ]=============================
 *
 **********************************************************************************************
 *
 */
 #endif /* ifdef __drv_blink_c__ */
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
#if(drv_blink_USE_GlobalData==1)
/*
 * TODO : Global data declaration
*/
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global data declaration ver  01v0d0 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/**
 * \var drv_blink_globalExample;
 * \brief variable global example, brief of data
 * \note
 * \warning
 */
extern unsigned int drv_blink_globalExample;


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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_GlobalData==1) */
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
#if(drv_blink_USE_GlobalFunctions == 1)
/*
 * TODO : Global functions declaration
*/

#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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

 /**
 *
 * ****************************************************************************//**
 * \fn void drv_blink_init(drv_blink_hdl_sT *pHdl);
 * \brief funcion para inicializar la FSM u¿y el hardware que acompaña.
 * \param pHdl : puntero al handler que contiene el contexto de la FSM.
 * \return nothing
 * \note
 * \warning
 * \par example :
  <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		// ... more code here
	}
}
  </pre>
 *********************************************************************************/
void drv_blink_init(drv_blink_hdl_sT *pHdl/*, pin, blink, time_on,time_off */);
/*
*
* ****************************************************************************//**
* \fn void drv_blink_update(drv_blink_hdl_sT *pHdl);
* \brief Funcion para actualizar la FSM.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_update(drv_blink_hdl_sT *pHdl);

/**
 *
 * ****************************************************************************//**
 * \fn void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink);
 * \brief Funcion global para establecer el blink de una FSM. Para mas 
 * informacion podemos ver 
 * \ref drv_blink_update()
 * \ref drv_blink_init()
 * \param pHdl : Puntero al handler que contiene el contexto de la FSM.
 * \param nblink :  Numero de Blink que le qeremos asignar a la FSM.
 * \return nothing
 * \note
 * \warning 
 * \par example :
  <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	drv_blink_SetBlink(&hdlBlk_01,2);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
  </pre>
 *********************************************************************************/
void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink);

/**
 *
 * ****************************************************************************//**
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_UpBlink(drv_blink_hdl_sT *pHdl);
/**
 *
 * **************************************************************************//**
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_DownBlink(drv_blink_hdl_sT *pHdl);
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
*
* ****************************************************************************//**
* \fn void drv_blink_init(drv_blink_hdl_sT *pHdl);
* \brief funcion para inicializar la FSM u¿y el hardware que acompaña.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_init(drv_blink_hdl_sT *pHdl);
/*
*
* ****************************************************************************//**
* \fn void drv_blink_update(drv_blink_hdl_sT *pHdl);
* \brief Funcion para actualizar la FSM.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*********************************************************************************/
void drv_blink_update(drv_blink_hdl_sT *pHdl);

/**
*
* ****************************************************************************//**
* \fn void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink);
* \brief Funcion global para establecer el blink de una FSM. Para mas
* informacion podemos ver
* \ref drv_blink_update()
* \ref drv_blink_init()
* \param pHdl : Puntero al handler que contiene el contexto de la FSM.
* \param nblink :  Numero de Blink que le qeremos asignar a la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	drv_blink_SetBlink(&hdlBlk_01,2);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink);
/**
 *
 * ****************************************************************************//**
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_UpBlink(drv_blink_hdl_sT *pHdl);
/**
 *
 * **************************************************************************//**
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_DownBlink(drv_blink_hdl_sT *pHdl);

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
#elif (version_QueryNumber(__drv_blink_version__,01v0d2))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d2 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d2
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ End   Global functions declaration ver 01v0d2 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d3))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d3 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d3
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ End   Global functions declaration ver 01v0d3 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ Begin Global functions declaration ver 01v0d4 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d4
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ──────────────────[ End   Global functions declaration ver 01v0d4 ]────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if( drv_blink_USE_GlobalFunctions == 1) */
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
 #if (drv_blink_USE_GlobalMacroApis == 1) 
/*
 *
 * =============================================================================================
 *
 * ++++++++++++++++++++++++[ Begin Macros functions for Porting ]+++++++++++++++++++++++++++++++
 *
 *============================================================================================= */
  #if (version_QueryNumber(__drv_blink_version__,01v0d0)\
		  || version_QueryNumber(__drv_blink_version__,01v0d1))
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
/**
 * ******************************************************************//**
 * \def drv_blink_PIN_INIT(Port,Pin);
 * \brief macro funcion para establecer la API de inicializacion de
 * un pin de un GPIO.
 * \param Port : Numero que representa el puerto.
 * \param Pin : Numero que representa el pin.
 * \return  Nothing
 * \note
 * \warning
 *********************************************************************/
#define drv_blink_PIN_INIT(Port,Pin) \
		chip_gpio_InitPin(Port,Pin,gpio_OutGP_PP_50Mhz)
/**
 * ******************************************************************//**
 * \def drv_blink_PIN_HIGH(Port,Pin);
 * \brief macro funcion para establecer la API que pondra en estado 
 * alto la salida de un pin, correspondiente a un GPIO.
 * \param Port : Numero que representa el puerto.
 * \param Pin : Numero que representa el pin.
 * \return  Nothing
 * \note
 * \warning
 *********************************************************************/
#define drv_blink_PIN_HIGH(Port,Pin) \
		chip_gpio_SetPinHigh(Port,Pin)
/**
 * ******************************************************************//**
 * \def drv_blink_PIN_LOW(Port,Pin);
 * \brief macro funcion para establecer la API que pondra en estado 
 * bajo la salida de un pin, correspondiente a un GPIO.
 * \param Port : Numero que representa el puerto.
 * \param Pin : Numero que representa el pin.
 * \return  Nothing
 * \note
 * \warning
 *********************************************************************/
#define drv_blink_PIN_LOW(Port,Pin) \
		chip_gpio_SetPinHigh(Port,Pin)
/**
 * ******************************************************************//**
 * \def drv_blink_PIN_TOGGLE(Port,Pin);
 * \brief macro funcion para establecer la API que cambiara el estado 
 * de la salida de un pin, correspondiente a un GPIO.
 * \param Port : Numero que representa el puerto.
 * \param Pin : Numero que representa el pin.
 * \return  Nothing
 * \note
 * \warning
 *********************************************************************/
#define drv_blink_PIN_TOGGLE(Port,Pin) \
		chip_gpio_SetPinToggle(Port,Pin)
        
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */

/*
 * =============================================================================================
 *
 * ++++++++++++++++++++++++[ End   Macros functions for Porting ]+++++++++++++++++++++++++++++++
 *
 *============================================================================================= */
 
 /*
 *
 * =============================================================================================
 *
 * +++++++++++++++++++++++++++[ Begin Global Macros functions ]++++++++++++++++++++++++++++++++++
 *
 *============================================================================================= */
 
 
 #if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
 /**
 * ******************************************************************//**
 * \def drv_blink_mSetStr_Pin(Handler,Pin);
 * \brief macro funcion para establecer en una estructura del tipo 
 * \ref drv_blink_hdl_sT el campo pin. 
 * \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
 * \param Pin : Numero que representa el pin, debe corresponderse
 * con la cantidad de pines establecido en \ref drv_blink_NUMBER_PINS.
 * \return  Nothing
 * \note
 * \warning 
 * \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;	
	drv_blink_mSetStr_Pin(hdlBlk_01,0);
	drv_blink_mSetStr_Blink(hdlBlk_01,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
 *
 *********************************************************************/
#define drv_blink_mSetStr_Pin(Handler,Pin) \
{\
    Handler.pin = Pin;\
}
 /**
 * ******************************************************************//**
 * \def drv_blink_mSetStr_Blink(Handler,Blink);
 * \brief macro funcion para establecer en una estructura del tipo 
 * \ref drv_blink_hdl_sT el campo pin. Para mas informacion 
 * podemos ver 
 * \ref drv_blink_mSetStr_Pin()
 * \ref drv_blink_mSetStr_Init()
 * \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
 * \param Blink : Numero que representa el Blink, cantidad de
 * parpadeo.
 * \return  Nothing
 * \note
 * \warning 
 * \par example :
 <pre>
  int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;	
	drv_blink_mSetStr_Pin(hdlBlk_01,0);
	drv_blink_mSetStr_Blink(hdlBlk_01,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
 *
 *********************************************************************/
#define drv_blink_mSetStr_Blink(Handler,Blink) \
{\
    Handler.blink = (Blink<<1), Handler.status = 0;\
}
 /**
 * ******************************************************************//**
 * \def drv_blink_mSetStr_Init(Handler,Pin,Blink);
 * \brief macro funcion para establecer en una estructura del tipo 
 * \ref drv_blink_hdl_sT el campo pin. Para mas informacion 
 * podemos ver 
 * \ref drv_blink_mSetStr_Pin()
 * \ref drv_blink_mSetStr_Init()
 * \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
 * \param Blink : Numero que representa el Blink, cantidad de
 * parpadeo.
 * \return  Nothing
 * \note
 * \warning 
 * \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Init(hdlBlk_01,0,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
 *
 *********************************************************************/
#if(drv_blink_NUMBER_PINS != 1)
#define drv_blink_mSetStr_Init(Handler,Pin,Blink) \
{\
    Handler.pin = Pin;\
    Handler.blink = (Blink<<1), Handler.status = 0;\
}
#else
#define drv_blink_mSetStr_Init(Handler,Pin,Blink) \
{\
    Handler.blink = (Blink<<1), Handler.status = 0;\
}
#endif
/**
* ******************************************************************//**
* \def drv_blink_mGetStr_Blink(Handler,Pin,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_blink_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_blink_mSetStr_Pin()
* \ref drv_blink_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Init(hdlBlk_01,0,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*
*********************************************************************/
#define drv_blink_mGetStr_Blink(Handler) (Handler.blink>>1)
        
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
* ******************************************************************//**
* \def drv_blink_mSetStr_Pin(Handler,Pin);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_blink_hdl_sT el campo pin.
* \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
* \param Pin : Numero que representa el pin, debe corresponderse
* con la cantidad de pines establecido en \ref drv_blink_NUMBER_PINS.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Pin(hdlBlk_01,0);
	drv_blink_mSetStr_Blink(hdlBlk_01,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*
*********************************************************************/
#define drv_blink_mSetStr_Pin(Handler,Pin) \
{\
   Handler.pin = Pin;\
}
/**
* ******************************************************************//**
* \def drv_blink_mSetStr_Blink(Handler,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_blink_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_blink_mSetStr_Pin()
* \ref drv_blink_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
 int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Pin(hdlBlk_01,0);
	drv_blink_mSetStr_Blink(hdlBlk_01,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*
*********************************************************************/
#define drv_blink_mSetStr_Blink(Handler,Blink) \
{\
   Handler.blink = (Blink<<1), Handler.status = 0;\
}
/**
* ******************************************************************//**
* \def drv_blink_mSetStr_Init(Handler,Pin,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_blink_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_blink_mSetStr_Pin()
* \ref drv_blink_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Init(hdlBlk_01,0,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*
*********************************************************************/
#define drv_blink_mSetStr_Init(Handler,Pin,Blink) \
{\
   Handler.pin = Pin;\
   Handler.blink = (Blink<<1), Handler.status = 0;\
}
/**
* ******************************************************************//**
* \def drv_blink_mGetStr_Blink(Handler,Pin,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_blink_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_blink_mSetStr_Pin()
* \ref drv_blink_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_blink_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_mSetStr_Init(hdlBlk_01,0,2);
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
</pre>
*
*********************************************************************/
#define drv_blink_mGetStr_Blink(Handler) (Handler.blink>>1)


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
#elif (version_QueryNumber(__drv_blink_version__,01v0d2))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d2 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d2
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d2 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d3))
/**
*
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ Begin Global Macros/labels version 01v0d3 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d3
*/



/**
┌───────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                       │
│                                                                                       │
│ ────────────────────[ End   Global Macros/labels version 01v0d3 ]──────────────────── │
│                                                                                       │
│                                                                                       │
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
 /*
 *
 * =============================================================================================
 *
 * +++++++++++++++++++++++++++[ End   Global Macros functions ]++++++++++++++++++++++++++++++++++
 *
 *============================================================================================= */
#endif /* #if(drv_blink_USE_GlobalMacroApis == 1) */
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
#endif /* #ifndef __drv_blink_h__ */
/*
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(drv_blink_projectEnable == 1) */
