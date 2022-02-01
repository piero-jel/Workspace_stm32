#if defined(__freertos_enable__)
	#define chip_systick_projectEnable 0 /**<@brief Deshabilitamos el modulo systick */
#else
	#define chip_systick_projectEnable 1 /**<@brief Habilitamos el modulo systick */
#endif
/*
 * ******************************[source File]*************************************//**
 * \addtogroup chip_systick chip_systick.h module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file chip_systick.h module
 * \brief bloque de comenteario para documentacion para describir este archivo de
 * cabecera o header file.
 * \version v01.01
 * \date 19 feb. 2020
 * \note none
 * \author JEL, Jesus Emanuel Luccioni
 * \li piero.jel@gmail.com
 *
 * @} doxygen end group definition
 ************************************************************************************ */
/*
 * -- Definimos el Nombre del modulo
*/
#ifndef __chip_systick_h__
#define __chip_systick_h__
#if(chip_systick_projectEnable == 1)
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
#include <stm32f10x.h>
#include <core_cm3.h>


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
#define chip_systick_USE_LocalData 1 /**<@brief enable/disable the use Global Data */
#define chip_systick_USE_LocalFunctions 0 /**<@brief enable/disable the use Gobal functions */
#define chip_systick_USE_LocalMacroApis 0 /**<@brief enable/disable the use Local macros functions */
#define chip_systick_USE_ISR 1 /**<@brief enable/disable the use Local macros functions */
/* -- global */
#define chip_systick_USE_GlobalMacro 0  /**<@brief enable/disable the use Global Macros/Labels */
#define chip_systick_USE_GlobalTypedef 1 /**<@brief enable/disable the use Global Typedef */
#define chip_systick_USE_GlobalData 0 /**<@brief enable/disable the use Global Data */
#define chip_systick_USE_GlobalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define chip_systick_USE_GlobalMacroApis 0 /**<@brief enable/disable the use Gobal macros functions */
#define chip_systick_USE_enum_typedef	0/**<@brief enable/disable el uso de enumeracion, esta ocupa 16-bit/32-bits como contenedor */
#define chip_systick_USE_tickms_BITs	16/**<@brief establecemos la cantidad Bit (capacidad) del tick 8-16-32-bits */
#define chip_systick_USE_random_prime	1


#ifndef __chip_systick_version__
/**
 * \def __chip_systick_version__
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
#define __chip_systick_version__   version_SetNumber(01v0d0) /**<@brief Definimos la Version que utilizaremos */
#endif /* #ifndef __chip_systick_version__ */

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
#if(chip_systick_USE_GlobalMacro == 1)
/*
 * TODO : Macros/labels definition
 */
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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

#define chip_systick_MACRO_1	0/**<@brief example of macro definitions  */
#define chip_systick_LABEL_A 	 /**<@brief example of Labels Definitions */


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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalMacro == 1) */
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
#if(chip_systick_USE_GlobalTypedef == 1)
/*
 *  TODO: Global typedef
 */
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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
#if(chip_systick_USE_tickms_BITs==8)
typedef uint8_t tickms_t; /**<@brief example de redefinicion de una variable/estructura/union/enumeracion */
#elif(chip_systick_USE_tickms_BITs==16)
 typedef uint16_t tickms_t; /**<@brief example de redefinicion de una variable/estructura/union/enumeracion */
#elif(chip_systick_USE_tickms_BITs==32)
 typedef uint32_t tickms_t; /**<@brief example de redefinicion de una variable/estructura/union/enumeracion */
#else
#warning "SysTickTimer_USE_tickms_BITs, definido de forma incorrecta"
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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
	 chip_systick_e1 = 0 ,  /**<@brief */
	 chip_systick_e2 = 1 ,  /**<@brief */
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalTypedef == 1) */
/*
* *********************************************************************************************
*
* ====================================[End Global typedef]====================================
*
* ********************************************************************************************
*
*
*/
#ifdef __chip_systick_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
/*
 *
 * *********************************************************************************************
 *
 * ==================================[ End local declaration ]=================================
 *
 **********************************************************************************************
 *
 */
#else /* ifdef __chip_systick_c__ */
/*
 *
 * *********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 **********************************************************************************************
 * SECTOR excluido de -> chip_systick.c, utlizar con cuidado
 *
 * TODO : Only external declaration
 */
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */

/*
 *
 * *********************************************************************************************
 *
 * ==============================[ End Only externa declaration ]=============================
 *
 **********************************************************************************************
 *
 */
 #endif /* ifdef __chip_systick_c__ */
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
#if(chip_systick_USE_GlobalData==1)
/*
 * TODO : Global data declaration
*/
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalData==1) */
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
#if(chip_systick_USE_GlobalFunctions == 1)
/*
 * TODO : Global functions declaration
*/

#if (version_QueryNumber(__chip_systick_version__,01v0d0))
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

 /*******************************************************************//**
 * @brief Funcion para la configuracion del SysTickTimerTimer, para generar
 * una interupcion cada 1 [ms]
 * @return nothing
 * @note
 * @par example :
 <pre>
  SysTickTimer_Init();
 </pre>
 *********************************************************************/
 void chip_systick_Init(void);
 //
 //
 /*******************************************************************//**
 * @brief Funcion para obtener el valor Actual del Acumulador de mili-
 *  segundos.
 * @return entero sin signo de 32-bit, que representa La cuenta de mili-
 * segundos trasncurrida hasta el instante actual.
 * @note
 * @par example :
 <pre>
 uint32_t a;
 //..more code
 a=SysTickTimer_GetTickMs();
 </pre>
 *********************************************************************/
 tickms_t chip_systick_GetTicks(void);
 //
 //
 /*******************************************************************//**
 * @brief	Funcion para Consultar el tiempo transcurido entre llamados,
 * a esta funcion y actualizar la referencia temporal.
 * @param Time : Valor en mili segundos, contra el cual se consulta
 * @param ptrRef : Puntero a la variable de referencia temporal
 * , y sobre la cual actualiza el valor, en caso de cumplirse la clausula
 * @return
 * + TRUE Se cumple la clausula, el tiempo se agoto y se Actualiza la
 * variable de referencia temporal.
 * + FALSE No se cumple la condicion y no actualiza la variable.
 * @par example :
 <pre>
 void main(void)
 {
 	static uint32_t acuLocal;
 	SysTickTimer_Init();
 	//.. mas incializacion si es necesaria.
 	initHardware();
 	SysTickTimer_InitAcuMs(&acuLocal);
 	// super loop
 	while (1)
 	{
 		if(SysTickTimer_TimeOut(100,&acuLocal))
 		{	// se agoto el tiempo , pasaron 100 ms
 			//.. ejecutamos la accion deseada
 		}
 		else
 		{
 		   // .. no trasncurrienon los 100 ms
 		   // ejecutamos la accion que corresponda
 		}
 	}
 }
 </pre>
 *********************************************************************/
 #if(chip_systick_USE_enum_typedef==1)
 bool_t chip_systick_TimeOut(tickms_t *ptrRef,const tickms_t Time);
 #else/* #if(chip_systick_USE_enum_typedef==1) */
 uint8_t chip_systick_TimeOut(tickms_t *ptrRef,const tickms_t Time);
 #endif/* #if(chip_systick_USE_enum_typedef==1) */
 //
 //
 /*******************************************************************//**
 * @brief Funcion para inicializar el Acumulador de Referencia
 * Temporal, perteneciente a la Funcion Periodica (de donde se la invoca).
 * Para un ejemplo detallado ver @ref SysTickTimer_TimeOut()
 * @param *ptrAcuMs, puntero de la variable de referencia temporal.
 * @return	None
 *********************************************************************/
 void chip_systick_InitAcuMs(tickms_t *ptrAcuMs);
 //
 //
 /*******************************************************************//**
 * @brief Funcion para pausar la ejecucion del micro controlador. Esta
 * Pone el mismo a dormir hasta que una interupcion se produzca.
 * @param timeMs : Tiempo en mili segundos que se desea mantener pausado
 * el micro controlador.
 * @return nothing
 * @note esta fucnion no devuelve el control del proceso si una
 * interupcion cualquiera se produce. Solo sale del proceso si el
 * tiempo pasado como parametro es transcurrido.
 * @par example :
 <pre>
 // .. ejecutamos una accion, esperamos 100 ms
 SysTickTimer_pauseMs(100);
 // .. 100 ms pasaron, seguimos el hilo de ejcucion
 </pre>
 *********************************************************************/
 void chip_systick_pauseMs(const tickms_t timeMs);

 uint8_t chip_systick_random(void);



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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
* \fn int chip_systick_test_01(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
 <pre>
 a = chip_systick_test_01(1,"hola");
 </pre>
*********************************************************************************/
int chip_systick_test_01(unsigned int a,const char* name);
/*
*
* ****************************************************************************//**
* \fn int chip_systick_test_01(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
<pre>
a = chip_systick_test_01(1,"hola");
</pre>
*********************************************************************************/
int chip_systick_test_02(unsigned int a,const char* name);



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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if( chip_systick_USE_GlobalFunctions == 1) */
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
 #if (chip_systick_USE_GlobalMacroApis == 1)
 #if (version_QueryNumber(__chip_systick_version__,01v0d0))
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
#define chip_systick_BITcLEARfILE(file,posBit)\
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
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalMacroApis == 1) */
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
#endif /* #ifndef __chip_systick_h__ */
/*
 *
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(chip_systick_projectEnable == 1) */
