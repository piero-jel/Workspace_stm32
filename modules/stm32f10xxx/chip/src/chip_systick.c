#define __chip_systick_c__ /**<@brief : defined the file name */
/*
 * ******************************[source File]*************************************//**
 * \addtogroup chip_systick chip_systick.c module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file chip_systick.c
 * \brief bloque de comenteario para documentacion para describir este archivo de
 * cabecera o header file.
 * \version v01.01
 * \date   19 feb. 2020
 * \note none
 * \author JEL, Jesus Emanuel Luccioni
 * \li piero.jel@gmail.com
 *
 * @} doxygen end group definition
 ************************************************************************************ */
/*
 *
 * ********************************************************************************************
 *
 * ==========================[ Begin define the configuration Labels ]===========================
 *
 * *********************************************************************************************
 *
 */

/*
 * *********************************************************************************************
 *
 * ==========================[ End define the configuration Labels ]===========================
 *
 * *********************************************************************************************
 */
/*
 * *********************************************************************************************
 *
 * =================================[ include header file ]================================
 *
 * ********************************************************************************************
 *
 * TODO : header file, list
 */
#include <chip.h>




/* -- for end, header file this module */
#include <chip_systick.h>
/*
 *
 * *********************************************************************************************
 *
 * =================================[ End include header file ]================================
 *
 * ********************************************************************************************
 *
 */
#if (chip_systick_projectEnable == 1)
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * =======================================[begin of project file]=======================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * =================================[Begin macros labels        ]================================
 *
 * ********************************************************************************************
 *
 * TODO : macro labels
 */
#define USED_MASK_REG	1 /**<@brief defined the used of mask for GPIO
 * should be :
 *  + 1, enable the used of the mask for GPIO
 *  + 0, disable the used of the mask for GPIO */
//
/*=======================[defined pin and port ]=======================*/
/*-- Definimos los Pines y Puertos para el Bus de Control*/
#define	REG01_EXAMPLE	2 /**<@brief : Definimos el Puerto para el Pin Enable LCD */





/*
 * *********************************************************************************************
 *
 * ==================================[End macros labels     ]=================================
 *
 * ********************************************************************************************
 */
/*
 *
 * *********************************************************************************************
 *
 * ===================================[ Begin Local typedef ]====================================
 *
 * ********************************************************************************************
 *
 * TODO : Local typedef
 */
/**
 * @brief typedef and enumeration */
typedef enum
{
	e_HA = 0, /**<@brief Media palabra, solo el Nibble alto*/
	e_HB,   /**<@brief Palabra Completa, Primero el Nibble alto */
} e_localexample_t;
/**
 * @brief definicion de puntero a funcion del tipo 'funType_DataInst'*/
typedef void (*void_pFxlocal_void_t) (void);

/*
 * *********************************************************************************************
 *
 * ===================================[ End Local typedef ]====================================
 *
 * ********************************************************************************************
 */
/*
 *
 * *********************************************************************************************
 *
 * ===================================[ Begin Local macros ]====================================
 *
 * ********************************************************************************************
 *
 * TODO : Local Macro/Labels definitions
 */
#define EXAMPLE_LOCAL_MACRO     2000 /**<@brief brief */


/*
 *
 * *********************************************************************************************
 *
 * ===================================[ End Local macros ]====================================
 *
 * ********************************************************************************************
 */
/*
 *
 *********************************************************************************************
 *
 * ===============================[ Begin Local Data Declaration ]================================
 *
 * ******************************************************************************************** */
#if (chip_systick_USE_LocalData == 1)
/*
 * TODO : Local data declaration
*/

#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin local data declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
static tickms_t AcuMs;/**<@brief Almacena la Direccion de DDRAM actual
(la ultima direccion sobre la Cual se escribio un caracter) */
#if(SysTickTimer_USE_random_prime == 1)
//static uint8_t aPrime[]={
//		2,3,5,7
//		,13,17,19
//		,23,29,37
//		,43,47,53
//		,59,67,73
//		,79,83,89
//		,97};
#endif /* #if(SysTickTimer_USE_random_prime == 1)*/

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   local data declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin local data declaration version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/
static unsigned int exampleLocalData; /**<@brief local data declaration */

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   local data declaration version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_LocalData == 1) */
/* **********************************************************************************************
 *
 * ===============================[ End Local Data Declaration ]================================
 *
 * ********************************************************************************************
 */
/*
 *
 * *********************************************************************************************
 *
 * ===============================[ Begin Local APIs Declaration ]================================
 *
 * ******************************************************************************************** */
#if (chip_systick_USE_LocalFunctions == 1)
/*
 * TODO : Local functions declaration
 *
 */

#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local APIs Declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/*
*
* ****************************************************************************//**
* \fn static void exampleLocalFx(void)
* \brief descripcion breve
* \return nothing
* \par example :
 <pre>
  exampleLocalFx();
 </pre>
*********************************************************************************/
static void exampleLocalFx(int a);

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local APIs Declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local APIs Declaration version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local APIs Declaration version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_LocalFunctions == 1) */
/**
 * @} doxygen end group definition */
/* **********************************************************************************************
 *
 * ===============================[ End Local APIs Declaration ]================================
 *
 * ********************************************************************************************
 */
/*
 *
 * *********************************************************************************************
 *
 * ===========================[ Begin Local Macros functions ]==================================
 *
 ********************************************************************************************** */
 #if (chip_systick_USE_LocalMacroApis == 1)
 #if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local Macros functions version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/*
 * ****************************************************************************//**
 * \def chip_systick_BITsETfILE(file,posBit)
 * \brief brief local macro api.
 * \param file	: file, register
 * \param posBit : bit position
 * \return nothig
 * \par example :
 <pre>
  chip_systick_BITsETfILE(REG_A,7);
 </pre>
 *********************************************************************************/
#define chip_systick_BITsETfILE(file,posBit)	(file |=(0x01UL<<posBit))

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local Macros functions version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local Macros functions version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local Macros functions version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_LocalMacroApis == 1) */
/* **********************************************************************************************
 *
 * ===========================[ End Local Macros functions ]==================================
 *
 ********************************************************************************************** */
/**
 * @} doxygen end group definition
 */
/*
 *
 * *********************************************************************************************
 *
 * ================================[ Begin Local APIs ISR        ]=================================
 *
 * ******************************************************************************************** */
#if (chip_systick_USE_ISR == 1)
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin ISR APIS   Definition  version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/**
*
* ****************************************************************************//**
* \fn void ISR_function(void);
* \brief descripcion breve de la rutina de servicio de interrupciones.
* \return nothing
*********************************************************************************/
void SysTick_Handler(void)
{
	AcuMs++;
}

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   ISR APIS   Definition  version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin ISR APIS   Definition  version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   ISR APIS   Definition  version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if (chip_systick_USE_ISR == 1) */
/*
 * *********************************************************************************************
 *
 * ================================[ ISR APIS   Definition     ]=================================
 *
 * *********************************************************************************************
 */
/*
 *
 * *********************************************************************************************
 *
 * ================================[ Begin Local APIs Definition ]=================================
 *
 * ******************************************************************************************** */
#if (chip_systick_USE_LocalFunctions == 1)
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local APIs Definition  version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/*
*
* ********************************************************************************
* \fn static void exampleLocalFx(void)
* \brief descripcion breve
* \return nothing
* \par example :
 <pre>
  exampleLocalFx();
 </pre>
*********************************************************************************/
static void exampleLocalFx(void)
{

}

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local APIs Definition  version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Local APIs Definition  version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Local APIs Definition  version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_LocalFunctions == 1) */
/*
 * *********************************************************************************************
 *
 * ================================[ End Local APIs Definition ]=================================
 *
 * *********************************************************************************************
 */

/*
 *
 * *********************************************************************************************
 *
 * ===============================[ Begin Global Data Declaration ]================================
 *
 * ******************************************************************************************** */
#if (chip_systick_USE_GlobalData == 1)
/*
// TODO : Local data declaration
*/
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global Data Declaration version 01v0d0 ]───────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
unsigned int globalExample; /**<@brief variable global example, brief of data */

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End  Global Data Declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global Data Declaration version 01v0d1 ]───────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End  Global Data Declaration version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalData == 1) */
/* **********************************************************************************************
 *
 * ===============================[ End Local Data Declaration ]================================
 *
 * ********************************************************************************************
 *
 */
/*
 *
 * *********************************************************************************************
 *
 * ===============================[ Begin Global APIs Definition ]===============================
 *
 * ********************************************************************************************
 *
 */
#if (chip_systick_USE_GlobalFunctions == 1)
/*
// TODO : Global APIs Section
*/
#if (version_QueryNumber(__chip_systick_version__,01v0d0))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global APIs Definition version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
/*********************************************************************
* @brief Funcion para la configuracion del SysTickTimerTimer, para generar
* una interupcion cada 1 [ms]
* @return nothing
* @note
* @par example :
<pre>
 SysTickTimerTimer_Init();
</pre>
*********************************************************************/
void chip_systick_Init(void)
{
	/* Inicilizacion SysTickTimer Timer
	 * Clock Interno
	 * Generacion de Interupcion cada 1 mS
	 * */
	SysTick_Config(SystemCoreClock/1000);
	AcuMs=0;
}
//
//
/*********************************************************************
* @brief Funcion para obtener el valor Actual del Acumulador de mili-
*  segundos.
* @return entero sin signo de 32-bit, que representa La cuenta de mili-
* segundos trasncurrida hasta el instante actual.
* @note
* @par example :
<pre>
uint32_t a;
//..more code
a=SysTickTimerTimer_GetTickMs();
</pre>
*********************************************************************/
tickms_t chip_systick_GetTicks(void)
{
	return AcuMs;
}
//
//
/*********************************************************************
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
	SysTickTimerTimer_Init();
	//.. mas incializacion si es necesaria.
	initHardware();
	SysTickTimerTimer_InitAcuMs(&acuLocal);
	// super loop
	while (1)
	{
		if(SysTickTimerTimer_TimeOut(100,&acuLocal))
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
bool_t chip_systick_TimeOut(tickms_t *ptrRef,const tickms_t Time)
{
	if((AcuMs-(*ptrRef))>Time)
	{
		(*ptrRef) = AcuMs;
		return TRUE;
	}
	return FALSE;
}
#else /* #if(chip_systick_USE_enum_typedef==1) */
uint8_t chip_systick_TimeOut(tickms_t *ptrRef,const tickms_t Time)
{
	tickms_t tmp;
	tmp=AcuMs-*ptrRef;
	if(tmp > Time)
	{
		(*ptrRef) = AcuMs;
		return 0x01;
	}
	return 0x00;
}
#endif /* #if(chip_systick_USE_enum_typedef==1) */

//
//
/*********************************************************************
* @brief Funcion para inicializar el Acumulador de Referencia
* Temporal, perteneciente a la Funcion Periodica (de donde se la invoca).
* Para un ejemplo detallado ver @ref SysTickTimerTimer_TimeOut()
* @param *ptrAcuMs, puntero de la variable de referencia temporal.
* @return	None
*********************************************************************/
void chip_systick_InitAcuMs(tickms_t *ptrAcuMs)
{
	(*ptrAcuMs) = AcuMs;
}
//
//
/*********************************************************************
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
void chip_systick_pauseMs(const tickms_t timeMs)
{
	static tickms_t acuTime;
    tickms_t tmp;
	/* inicializamos el acumulador interno*/
	acuTime=AcuMs;
	/* ejecutamos el Wait For interrupt hasta que la diferencia deje de ser
	 *  menor al tiempo pasado como argumento */

/* while((AcuMs-acuTime)<timeMs) */
    tmp = AcuMs - acuTime;
    while(tmp<timeMs)
    {
        __WFI();
        tmp = AcuMs - acuTime;
    }

}

//
//static uint8_t getNumber(uint32_t shifter)
//{
////	uint32_t tmp;
//	uint32_t value;
//	value = SysTick->VAL;
//	return (value << shifter);
//}
//
uint8_t chip_systick_random(void)
{
	uint32_t value;
	value = SysTick->VAL;
	value &= 0x000000FF;
	return (uint8_t) (value);
}

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__chip_systick_version__,01v0d1))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global APIs Definition version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/
/*
*
* ********************************************************************************
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
int chip_systick_test_01(unsigned int a,const char* name)
{

}
/*
*
* ********************************************************************************
* \fn int chip_systick_test_02(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
 <pre>
 a = chip_systick_test_02(1,"hola");
 </pre>
*********************************************************************************/
int chip_systick_test_02(unsigned int a,const char* name)
{

}

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_systick_version__,01v0d0)) */
#endif /* #if(chip_systick_USE_GlobalFunctions == 1) */
/* **********************************************************************************************
 *
 * ================================[ End Global APIs Section ]=================================
 *
 * ********************************************************************************************
 *
 */
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif /* #if(chip_systick_projectEnable == 1) */
