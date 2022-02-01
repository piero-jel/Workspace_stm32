#ifndef drv_switch_projectEnable
#define drv_switch_projectEnable 1 /**<@brief enable/disable the project */
#endif
/*
* ******************************[source File]*************************************//**
* \addtogroup drv_switch drv_switch.h module
* @{ 
* @copyright
* 2017, Luccioni Jesús Emanuel. \n
* All rights reserved.\n
* This file is part of port module.\n
* Redistribution is not allowed on binary and source forms, with or without
* modification.\n
* Use is permitted with prior authorization by the copyright holder.\n
* \file drv_switch.h module
* \brief bloque de comenteario para documentacion para describir este archivo de
* cabecera o header file.
* \version v01.01
* \date date
* \note none
* \author JEL, Jesus Emanuel Luccioni
* \li piero.jel@gmail.com
*
* @} doxygen end group definition
************************************************************************************ */
/*
* -- Definimos el Nombre del modulo
*/
#ifndef __drv_switch_h__
#define __drv_switch_h__
#if(drv_switch_projectEnable == 1)
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
#include <chip.h>


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
* \def drv_switch_USE_LocalData
* \brief enable[1]/disable[0] the use Global Data 
* \note
* \warning
*/
#define drv_switch_USE_LocalData          1 
/**
*\def drv_switch_USE_LocalFunctions
*\brief enable[1]/disable[0] the use Gobal functions 
* \note
* \warning */
#define drv_switch_USE_LocalFunctions     0 
/**
* \def drv_switch_USE_LocalMacroApis
* \brief enable[1]/disable[0] the use Local macros functions 
* \note
* \warning */
#define drv_switch_USE_LocalMacroApis     1
/**
* \def drv_switch_USE_ISR
* \brief enable/disable the use ISR (rutinas para el servicio de interupciones)
* \note
* \warning */
#define drv_switch_USE_ISR                0  
/* -- global */
/**
* \def drv_switch_USE_GlobalMacro
* \brief enable/disable the use Global Macros/Labels 
* \note
* \warning */
#define drv_switch_USE_GlobalMacro        1  
/** 
* \def drv_switch_USE_GlobalTypedef
* \brief enable/disable the use Global Typedef 
* \note
* \warning */
#define drv_switch_USE_GlobalTypedef      1 
/**
* \def drv_switch_USE_GlobalData
* \brief enable/disable the use Global Data
* \note
* \warning */
#define drv_switch_USE_GlobalData         0 
/**
* \def drv_switch_USE_GlobalFunctions
* \brief enable/disable the use Gobal functions 
* \note
* \warning */
#define drv_switch_USE_GlobalFunctions    1 
/**
* \def drv_switch_USE_GlobalMacroApis
* \brief enable/disable the use Gobal macros functions 
* \note
* \warning  */
#define drv_switch_USE_GlobalMacroApis    1 

/**
* \def drv_switch_LOCAL_GPIO_MEM_PRG
* \brief enable/disable que las variable locales destinadas a
* la manipulacion de los GPIO, se almacenen en
* 	+ 1, en memoria de programa
* 	+ 0, en memoria RAM.
* \note
* \warning  */
#define drv_switch_LOCAL_GPIO_MEM_PRG	  1



#ifndef __drv_switch_version__
/**
* \def __drv_switch_version__ 
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
#define __drv_switch_version__   version_SetNumber(01v0d0) /**<@brief Definimos la Version que utilizaremos */
#endif /* #ifndef __drv_switch_version__ */

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
#if(drv_switch_USE_GlobalMacro == 1)
/*
* TODO : Macros/labels definition
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0)\
		|| version_QueryNumber(__drv_switch_version__,01v0d1))
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
 * \def drv_switch_DEBOUNCE
 * \brief establecemos el "debounce time" en mili segundos
 * \note nota
 * \warning mensaje de precaucion */
/**
 * \def drv_switch_PULL_UP
 * \brief establecemos el tipo de pull (up[1]/down[0]) para el pin.
 * \note nota
 * \warning mensaje de precaucion */
#define drv_switch_DEBOUNCE		10
#define drv_switch_PULL_UP		1
#define drv_switch_ENABLE_CHIP_PULL_UP		0

/**
 * \def drv_blink_NUMBER_PINS
 * \brief ETIQUETA PARA ESTABLECER LA CANTIDAD DE PINES QUE TENDREMOS.
 * \note nota
 * \warning mensaje de precaucion */
#define drv_switch_NUMBER_PINS   2


#define drv_switch_PORT_0        1	/* PB7, PORT = 1, PIN 7 */
#define drv_switch_PIN_0         7
#define drv_switch_PORT_1        1	/* PB6, PORT = 1, PIN 6 */
#define drv_switch_PIN_1         6
#define drv_switch_PORT_2        1	/* PB5, PORT = 1, PIN 5 */
#define drv_switch_PIN_2         5
#define drv_switch_PORT_3        0	/* PA8, PORT = 0, PIN 8 */
#define drv_switch_PIN_3         8
#define drv_switch_PORT_4        1
#define drv_switch_PIN_4         1
#define drv_switch_PORT_5        1
#define drv_switch_PIN_5         1
#define drv_switch_PORT_6        1
#define drv_switch_PIN_6         1
#define drv_switch_PORT_7        1
#define drv_switch_PIN_7         1




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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d2))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d3))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d4))
/**
* 
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ Begin Global Macros/labels version 01v0d4 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d4
*/


/**
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ End   Global Macros/labels version 01v0d4 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_switch_version__,01v0d5))
/**
* 
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ Begin Global Macros/labels version 01v0d5 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d5
*/
/**
* \def drv_switch_MACRO_1 
* \brief example of macro definitions 
*  + value A
*  - value B
* \note nota
* \warning mensaje de precaucion */
#define drv_switch_MACRO_1        0
/**
* \def drv_switch_LABEL_A
* \brief example of macro definitions 
*  + value A
*  - value B
* \note nota
* \warning mensaje de precaucion */
#define drv_switch_LABEL_A        1 

/**
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ End   Global Macros/labels version 01v0d5 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_GlobalMacro == 1) */
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
#if(drv_switch_USE_GlobalTypedef == 1)
/*
*  TODO: Global typedef
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
* \typedef drv_switch_push_pF
* \brief redefinicion de puntero a funcion, la cual se ejecutara cuando se oprima 
* el switch.
* \note prototipo: void fx (void);
*/
typedef void (*drv_switch_push_pfT) (void);

/**
* \typedef drv_switch_hdl_sT ;
 * \brief handler para manejar una instancia de switch.
 * \ref acu_ms
 * \ref status
 * \ref pin
 * \ref pushFx
 * \note
 * \warning
* \note
* \warning
*/
typedef struct
{
	tickms_t acu_ms ;  /**<@brief acumulador de mili segundos de la FSM */
	uint8_t status; /**<@brief variable que retendra el status de la FSM */
#if(drv_switch_NUMBER_PINS != 1)
	uint8_t pin;  /**<@brief variable que retiene el numero de pin.*/
#endif/* #if(drv_blink_NUMBER_PINS != 1) */
    drv_switch_push_pfT pushFx ;  /**<@brief funcion que se llamara cuando 
    se presione el switch, cumpliendo la secuencia */
}drv_switch_hdl_sT ; 


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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
* \typedef drv_switch_push_pF
* \brief redefinicion de puntero a funcion, la cual se ejecutara cuando se oprima
* el switch.
* \note prototipo: void fx (void);
*/
typedef void (*drv_switch_push_pfT) (void*);

/**
* \typedef drv_switch_hdl_sT ;
 * \brief handler para manejar una instancia de switch.
 * \ref acu_ms
 * \ref status
 * \ref pin
 * \ref pushFx
 * \ref arg
 * \note
 * \warning
* \note
* \warning
*/
typedef struct
{
	tickms_t acu_ms ;  /**<@brief acumulador de mili segundos de la FSM */
	uint8_t status; /**<@brief variable que retendra el status de la FSM */
#if(drv_switch_NUMBER_PINS != 1)
	uint8_t pin;  /**<@brief variable que retiene el numero de pin.*/
#endif/* #if(drv_blink_NUMBER_PINS != 1) */
    drv_switch_push_pfT pushFx ;  /**<@brief funcion que se llamara cuando
    se presione el switch, cumpliendo la secuencia */
    void* arg; /**<@brief puntero del tipo void, que representa el
argumento que le pasaremos al la fucnion de callback  */
}drv_switch_hdl_sT ;

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
#elif (version_QueryNumber(__drv_switch_version__,01v0d2))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d3))
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
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ End   Global typedef       version 01v0d3 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d5))
/**
* 
┌───────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                       │  
│                                                                                       │  
│ ────────────────────[ Begin Global typedef       version 01v0d5 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d5
*/

/**
* \typedef drv_switch_str_example_t ;
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
}drv_switch_str_example_t ; 
/**
* \typedef drv_switch_enum_example_t;
* \brief example definition global enum 
* \ref drv_switch_e1
* \ref drv_switch_e2
* \note
* \warning
*/
typedef enum
{
    drv_switch_e1 = 0 ,  /**<@brief enumeracion del tipo "e1" */
    drv_switch_e2 = 1 ,  /**<@brief enumeracion del tipo "e2" */
}drv_switch_enum_example_t;
/**
* \typedef drv_switch_example_t;
* \brief example de redefinicion de un tipo primitivo de dato */
typedef unsigned int drv_switch_example_t;
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
│ ────────────────────[ End   Global typedef       version 01v0d5 ]──────────────────── │
│                                                                                       │
│                                                                                       │             
└───────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_GlobalTypedef == 1) */
/*
* *********************************************************************************************
*
* ====================================[End Global typedef]====================================
*
* ******************************************************************************************** 
* 
* 
*/
#ifdef __drv_switch_c__
/* **********************************************************************************************
*
* ==================================[ Begin local declaration ]=================================
*
********************************************************************************************** 
* 
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
/* 
* 
* *********************************************************************************************
*
* ==================================[ End local declaration ]=================================
*
********************************************************************************************** 
* 
*/
#else /* ifdef __drv_switch_c__ */
/*
* 
* *********************************************************************************************
*
* ==============================[ Begin Only externa declaration ]=============================
*
********************************************************************************************** 
* SECTOR excluido de -> drv_switch.c, utlizar con cuidado
* 
* TODO : Only external declaration
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */

/*
* 
* *********************************************************************************************
*
* ==============================[ End Only externa declaration ]=============================
*
**********************************************************************************************
* 
*/
#endif /* ifdef __drv_switch_c__ */
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
#if(drv_switch_USE_GlobalData==1)
/*
* TODO : Global data declaration
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
* \var drv_switch_globalExample;
* \brief variable global example, brief of data 
* \note
* \warning
*/
extern unsigned int drv_switch_globalExample;


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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_GlobalData==1) */
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
#if(drv_switch_USE_GlobalFunctions == 1)
/*
* TODO : Global functions declaration
*/

#if (version_QueryNumber(__drv_switch_version__,01v0d0) || \
    version_QueryNumber(__drv_switch_version__,01v0d1) )
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
* \fn void drv_switch_init(drv_switch_hdl_sT *pHdl);
* \brief funcion para inicializar el handler de una instancia de la FSM
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_init(drv_switch_hdl_sT *pHdl \
		/* ,pin , pFuncion , *arg */);
/*
*
* ****************************************************************************//**
* \fn void drv_switch_update(drv_switch_hdl_sT *pHdl);
* \brief Funcion que se encarga de actualizar una instancia de la FSM switch.
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_update(drv_switch_hdl_sT *pHdl);

#if (version_QueryNumber(__drv_switch_version__,01v0d0))
/*
*
* ****************************************************************************//**
* \fn void drv_switch_SetFunction(drv_switch_hdl_sT *pHdl, drv_switch_push_pfT push_fun);
* \brief Funcion para establecer el parametro de callback de la instancia correspondiente
* a la FSM. El tipo del callback \ref drv_switch_push_pfT
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \param push_fun :  callback correspondiente a la instancia de la FSM, el cual
* deseamos establecer.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_SetFunction(drv_switch_hdl_sT *pHdl,\
		drv_switch_push_pfT push_fun /*, *arg*/);
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
/*
*
* ****************************************************************************//**
* \fn void drv_switch_SetFunction(drv_switch_hdl_sT *pHdl, drv_switch_push_pfT push_fun);
* \brief Funcion para establecer el parametro de callback de la instancia correspondiente
* a la FSM. El tipo del callback \ref drv_switch_push_pfT
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \param push_fun :  callback correspondiente a la instancia de la FSM, el cual
* deseamos establecer.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_SetFunction(drv_switch_hdl_sT *pHdl,\
		drv_switch_push_pfT push_fun, void * arg_fun);

#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d1)) */


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
#elif (version_QueryNumber(__drv_switch_version__,01v0d2))
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
*
* ****************************************************************************//**
* \fn void drv_switch_init(drv_switch_hdl_sT *pHdl);
* \brief funcion para inicializar el handler de una instancia de la FSM
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_init(drv_switch_hdl_sT *pHdl \
		/* ,pin , pFuncion , *arg */);
/*
*
* ****************************************************************************//**
* \fn void drv_switch_update(drv_switch_hdl_sT *pHdl);
* \brief Funcion que se encarga de actualizar una instancia de la FSM switch.
* \param pHdl : puntero al handler, del tipo \ref drv_switch_hdl_sT.
* \return nothing.
* \note
* \warning
* \par example :
<pre>
a = drv_switch_test_01(1,"hola");
</pre>
*********************************************************************************/
void drv_switch_update(drv_switch_hdl_sT *pHdl);






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
#elif (version_QueryNumber(__drv_switch_version__,01v0d3))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d4))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if( drv_switch_USE_GlobalFunctions == 1) */
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
#if (drv_switch_USE_GlobalMacroApis == 1) 
/*
*
* =============================================================================================
*
* ++++++++++++++++++++++++[ Begin Macros functions for Porting ]+++++++++++++++++++++++++++++++
*
*============================================================================================= */
#if (version_QueryNumber(__drv_switch_version__,01v0d0)\
		|| version_QueryNumber(__drv_switch_version__,01v0d1))
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
* \def drv_switch_PIN_INIT(Port,Pin);
* \brief macro funcion para establecer la API de inicializacion de
* un pin de un GPIO.
* \param Port : Numero que representa el puerto.
* \param Pin : Numero que representa el pin.
* \return  Nothing
* \note
* \warning
*********************************************************************/
#if((drv_switch_ENABLE_CHIP_PULL_UP == 1)&&(drv_switch_PULL_UP == 1 ))
#define drv_switch_PIN_INIT(Port,Pin) \
    chip_gpio_InitPin(Port,Pin,gpio_InputPullUp)
#else /* #if(drv_switch_ENABLE_CHIP_PULL_UP == 1)*/
#define drv_switch_PIN_INIT(Port,Pin) \
	chip_gpio_InitPin(Port,Pin,gpio_InputFloating)
#endif /* #if(drv_switch_ENABLE_CHIP_PULL_UP == 1) */
/**
* ******************************************************************//**
* \def drv_switch_PIN_HIGH(Port,Pin);
* \brief macro funcion para establecer la API que pondra en estado 
* alto la salida de un pin, correspondiente a un GPIO.
* \param Port : Numero que representa el puerto.
* \param Pin : Numero que representa el pin.
* \return  Nothing
* \note
* \warning
*********************************************************************/
#define drv_switch_GET_STATUS(Port,Pin) \
	chip_gpio_GetPinStatus(Port,Pin)

/**
 * ******************************************************************//**
 * \def drv_switch_GET_TICKS();
 * \brief macro funcion para establecer la API que nos permitira obtener
 *  los tick del sistema.
 * \return Numero de Ticks actual del sistema.
 * \note
 * \warning
 * \par example :
 <pre>
 	 tick_t a;
 	 a = drv_switch_GET_STATUS();
 </pre>
 *
 *********************************************************************/
#define drv_switch_GET_TICKS() \
	chip_systick_GetTicks()

/**
 * ******************************************************************//**
 * \def drv_switch_TIME_OUT(pACU,litTIME);
 * \brief macro funcion para establecer la API que nos permitira determinar
 * si se agoto el tiempo/ticks determinados.
 * \param pACU : Puntero al acumulador local de ticks.
 * \param litTIME : Literal o valor de tiempo que deseamos chekear.
 * \return  valor del tipo bool_t
 * 	+ 0, no se agoto el tiempo \ref litTIME, el acumulador \ref pACU no se actualiza.
 * 	+ 1, se agoto el tiempo \ref litTIME, el acumulador \ref pACU se actualiza
 * \note
 * \warning
 * \par example :
 <pre>
 	 tick_t a;
 	 a = drv_switch_GET_STATUS();
 	 // .. more code
 	 if(drv_switch_TIME_OUT(&a,1000))
 	 {
 	 	 //... more code
 	 }
 </pre>
 *
 *********************************************************************/
#define drv_switch_TIME_OUT(pACU,litTIME) \
		chip_systick_TimeOut(pACU,litTIME)



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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */

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
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
* \def drv_switch_mSetStr_Pin(Handler,Pin);
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
    drv_switch_hdl_sT hdlBlk_01;	
    drv_switch_mSetStr_Pin(hdlBlk_01,0);
    drv_switch_mSetStr_Blink(hdlBlk_01,2);
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#if(drv_switch_NUMBER_PINS != 1)
#define drv_switch_mSetStr_Pin(Handler,Pin) \
    Handler.pin = Pin
#else /* #if(drv_switch_NUMBER_PINS != 1) */
#define drv_switch_mSetStr_Pin(Handler,Pin)
#endif/* #if(drv_blink_NUMBER_PINS != 1) */

/**
* ******************************************************************//**
* \def drv_switch_mSetStr_Blink(Handler,Blink);
* \brief macro funcion para establecer en una estructura del tipo 
* \ref drv_switch_hdl_sT el campo pin. Para mas informacion 
* podemos ver 
* \ref drv_switch_mSetStr_Pin()
* \ref drv_switch_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_switch_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning 
* \par example :
<pre>
int main(void)
{
    drv_switch_hdl_sT hdlBlk_01;	
    drv_switch_mSetStr_Pin(hdlBlk_01,0);
    drv_switch_mSetStr_Blink(hdlBlk_01,2);
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#define drv_switch_mSetStr_Callback(Handler,CallbakPush) \
{\
    Handler.pushFx = CallbakPush, Handler.status = 0;\
}
/**
* ******************************************************************//**
* \def drv_switch_mSetStr_Init(Handler,Pin,Blink);
* \brief macro funcion para establecer en una estructura del tipo 
* \ref drv_switch_hdl_sT el campo pin. Para mas informacion 
* podemos ver 
* \ref drv_switch_mSetStr_Pin()
* \ref drv_switch_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_switch_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning 
* \par example :
<pre>
int main(void)
{
    drv_switch_hdl_sT hdlBlk_01;	
    drv_switch_mSetStr_Init(hdlBlk_01,0,2);	
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#if(drv_switch_NUMBER_PINS != 1)
#define drv_switch_mSetStr_Init(Handler,Pin,CallbakPush) \
{\
    Handler.pin = Pin;\
    Handler.pushFx = CallbakPush, Handler.status = 0;\
}
#else /* #if(drv_switch_NUMBER_PINS != 1) */
#define drv_switch_mSetStr_Init(Handler,Pin,CallbakPush) \
{\
    Handler.pushFx = CallbakPush, Handler.status = 0;\
}
#endif /* #if(drv_switch_NUMBER_PINS != 1) */
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
* \def drv_switch_mSetStr_Pin(Handler,Pin);
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
    drv_switch_hdl_sT hdlBlk_01;
    drv_switch_mSetStr_Pin(hdlBlk_01,0);
    drv_switch_mSetStr_Blink(hdlBlk_01,2);
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#if(drv_switch_NUMBER_PINS != 1)
#define drv_switch_mSetStr_Pin(Handler,Pin) \
    Handler.pin = Pin
#else
#define drv_switch_mSetStr_Pin(Handler,Pin)
#endif/* #if(drv_blink_NUMBER_PINS != 1) */



/**
* ******************************************************************//**
* \def drv_switch_mSetStr_Blink(Handler,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_switch_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_switch_mSetStr_Pin()
* \ref drv_switch_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_switch_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
    drv_switch_hdl_sT hdlBlk_01;
    drv_switch_mSetStr_Pin(hdlBlk_01,0);
    drv_switch_mSetStr_Blink(hdlBlk_01,2);
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#define drv_switch_mSetStr_Callback(Handler,CallbakPush,ArgFun) \
{\
    Handler.pushFx = CallbakPush;\
    Handler.arg = ArgFun;\
	Handler.status = 0;\
}
/**
* ******************************************************************//**
* \def drv_switch_mSetStr_Init(Handler,Pin,Blink);
* \brief macro funcion para establecer en una estructura del tipo
* \ref drv_switch_hdl_sT el campo pin. Para mas informacion
* podemos ver
* \ref drv_switch_mSetStr_Pin()
* \ref drv_switch_mSetStr_Init()
* \param Handler : Hadler del tipo \ref drv_switch_hdl_sT.
* \param Blink : Numero que representa el Blink, cantidad de
* parpadeo.
* \return  Nothing
* \note
* \warning
* \par example :
<pre>
int main(void)
{
    drv_switch_hdl_sT hdlBlk_01;
    drv_switch_mSetStr_Init(hdlBlk_01,0,2);
    drv_switch_init(&hdlBlk_01);
    while(1)
    {
        drv_switch_update(&hdlBlk_01);
        // ... more code here
    }
}
</pre>
*
*********************************************************************/
#if(drv_switch_NUMBER_PINS != 1)
#define drv_switch_mSetStr_Init(Handler,Pin,CallbakPush,ArgFun) \
{\
    Handler.pin = Pin;\
    Handler.pushFx = (drv_switch_push_pfT) (CallbakPush);/*CallbakPush;\*/\
	Handler.arg = ArgFun;\
    Handler.status = 0;\
}
#else
#define drv_switch_mSetStr_Init(Handler,Pin,CallbakPush,ArgFun) \
{\
    Handler.pushFx = (drv_switch_push_pfT) (CallbakPush);/*CallbakPush;\*/\
	Handler.arg = ArgFun;\
    Handler.status = 0;\
}
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d2))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d3))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
/*
* =============================================================================================
*
* +++++++++++++++++++++++++++[ End   Global Macros functions ]++++++++++++++++++++++++++++++++++
*
*============================================================================================= 
* 
*/ 
#endif /* #if(drv_switch_USE_GlobalMacroApis == 1) */
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
#endif /* #ifndef __drv_switch_h__ */
/*
*
* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*
* ========================================[end of project file]========================================
*
* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(drv_switch_projectEnable == 1) */
