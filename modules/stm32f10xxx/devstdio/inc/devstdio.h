#define dev_stdio_projectEnable 1 /**<@brief enable/disable the project */
/** \addtogroup dev_stdio_h dev_stdio.h module
 ** @{ */
/********************************[ copyright ]*************************************//**
 *@copyright 2018, Luccioni Jesús Emanuel
 * All rights reserved.
 * This file is part of insertname
 * Redistribution is not allowed on binary and source forms,
 * with or without modification.
 * Use is permitted with prior authorization by
 * the copyright holder
 * \n meil :
 * 	- piero.jel@gmail.com
 *************************************************************************************/
//
/********************************[Header File]*************************************//**
 * @file    dev_stdio.h.h
 * @brief	<descripcion breve> ej. Porting para tareas de uso comun de FREE RTOS
 * @version v01.01
 * @date   21 oct. 2018
 * @note none
 * @author Luccioni, Jesus Emanuel
 *************************************************************************************/
//
// -- Definimos el Nombre del modulo
//
#ifndef __dev_stdio_h_
#define __dev_stdio_h__
//
//
#if(dev_stdio_projectEnable == 1)
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * =======================================[begin of project file]=======================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
//
//
//
/*============================[Open, cplusplus]============================*/
//
#ifdef __cplusplus
extern "C" {
#endif
//
//
//
/* **********************************************************************************************
 *
 * =================================[ Begin include header file ]================================
 *
 * ******************************************************************************************** */
//
// TODO: include header file sector, "only in case especific"
//
/** example : #include <nmbHeaderFile.h> */
#include <lcd.h>
#include <version.h>




//
/* **********************************************************************************************
 *
 * ==================================[ End include header file ]=================================
 *
 * ******************************************************************************************** **/

/* **********************************************************************************************
 *
 * ==========================[ Begin labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** **/
//
// TODO: labels enable/disable functions
//
// -- local
#define dev_stdio_USE_LocalData 1 /**<@brief enable/disable the use Global Data */
#define dev_stdio_USE_LocalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define dev_stdio_USE_LocalMacroApis 1 /**<@brief enable/disable the use Local macros functions */
// -- global
#define dev_stdio_USE_GlobalMacro 1  /**<@brief enable/disable the use Global Macros/Labels */
#define dev_stdio_USE_GlobalTypedef 0 /**<@brief enable/disable the use Global Typedef */
#define dev_stdio_USE_GlobalData 0 /**<@brief enable/disable the use Global Data */
#define dev_stdio_USE_GlobalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define dev_stdio_USE_GlobalMacroApis 0 /**<@brief enable/disable the use Gobal macros functions */
//
#if(!defined(dev_stdio_USE_VERSION))
/**@brief versiones :
 * 	+ 1v0d0 -> Version inicial,
 *
 *  + 1v0d1 -> es la version 1v0d0 mas el ....
 *
 *  + 1v0d2 -> es la version 1v0d0 mas el agregado de
 *
 *  + 1v0d3 ->  FIXME working in 1v0d2 	*/
#define dev_stdio_USE_VERSION		version_SetNumber(01v0d1)/**<@brief Definimos la Version que utilizaremos
en caso de eitar el mismo realizarlo con cuidado*/
/*
* Formato :
* 	<XX>v<Y>{d:e}<Z>
*    |    |    |   |
*    |    |    |    --> 1 ~ 9, indicamos los pasos, cambios pequeños locales
*    |    |    --> d : provisoria, en estado de Depuracion "debbug"
*    |    |        e : estable
*    |    --> Cifra mas sisgnificativa del control de versionado 0~9, conforma el la subversion
*    --> Cifra mas Significativa del control de versionado 1~9, conforma la parte alta de la version
*    la cual especifica cambio radicales que inpactan en el uso de las mismas
*    should be
*    		+ 1v0d1
*    		+ 1v1d1
*    		+ 1v2d1
*
*/
#endif//#if(!defined(dev_stdio_USE_VERSION))

/* **********************************************************************************************
 *
 * ==========================[ End labels enable/disable functions ]===========================
 *
 * ******************************************************************************************** **/
//
//
//
/* **********************************************************************************************
 *
 * ==========================[ Begin Global Macros/labels definition]===========================
 *
 * ******************************************************************************************** **/
#if(dev_stdio_USE_GlobalMacro==1)
//
// TODO : Macros/labels definition
//
#define dev_STD_LCD			0
#define dev_STD_UART		1

#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
/* -----[ sub verioned v0d0 ] */
#define dev_stdio_MACRO_1	0/**<@brief example of macro definitions  */
#define dev_stdio_LABEL_A 	 /**<@brief example of Labels Definitions */

//
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
/* -----[ sub verioned v0d1 ] */

//
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
//
#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))

#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif //#if(dev_stdio_USE_GlobalMacro==1)
/* **********************************************************************************************
 *
 * ==========================[ End Macros/labels Globals ]===========================
 *
 * ******************************************************************************************** **/
//
//
//
/* **********************************************************************************************
 *
 * ====================================[Begin Global typedef]====================================
 *
 * ******************************************************************************************** */
#if(dev_stdio_USE_GlobalTypedef==1)
//
// TODO: Global typedef
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned] */
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))

#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
//
//
/** @brief example definition global struct, <brief> */
typedef struct
{
	int structArg1; /**<@brief descripcion breve del ARG1 de int type */
	char structArg2;/**<@brief descripcion breve del ARG2 de char type */
}sT_globalExample;
//
//
/** @brief example definition global enum, <brief> */
typedef enum
{
	ENUM_0=0, /**<@brief descripcion breve del Label 'ENUM_0' de Enumeracion */
	ENUM_1,/**<@brief descripcion breve del Label 'ENUM_1' de Enumeracion */
	ENUM_2=5,/**<@brief descripcion breve del Label 'ENUM_2' de Enumeracion */
}eT_globalExample;
//
typedef unsigned int vT_globalExample; /**<@brief example variable/estructura/union/enumeracion */
//
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
//
#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))

#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif//#if(dev_stdio_USE_GlobalTypedef==1)
/* **********************************************************************************************
 *
 * ====================================[End Global typedef]====================================
 *
 * ******************************************************************************************** */
//
//
#ifdef __dev_stdio_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin local declaration ]=================================
 *
 ********************************************************************************************** */
//
//
//
//
//
//
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin export data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
#if(dev_stdio_USE_GlobalData==1)
//
// TODO : Global data declaration
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
unsigned int globalExample; /**<@brief variable global example, brief of data */
//
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
//
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))


#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))
#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif//#if(dev_stdio_USE_GlobalTypedef==1)
/* ---------------------------------------------------------------------------------
 *
 * ==================[End Global data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
//
//
//
/* **********************************************************************************************
 *
 * ==================================[ End local declaration ]=================================
 *
 ********************************************************************************************** */
//
//
#else // ifdef __dev_stdio_c__
//
//
/* **********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 ********************************************************************************************** */
/* SECTOR excluido de -> dev_stdio.c, utlizar con cuidado*/
//
// TODO : Only external declaration
//
//
//
//
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin export data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
#if(dev_stdio_USE_GlobalData==1)
//
// TODO : Global data declaration
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
extern unsigned int globalExample; /**<@brief variable global example, brief of data */
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))

#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))

#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif//#if(dev_stdio_USE_GlobalTypedef==1)
/* ---------------------------------------------------------------------------------
 *
 * ==================[End Global data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
//
//
/* **********************************************************************************************
 *
 * ==============================[ End Only externa declaration ]=============================
 *
 ********************************************************************************************** */
//
//
#endif// ifdef __dev_stdio_c__
//
//
//
//
/* **********************************************************************************************
 *
 * ==================================[ Begin Global declaration ]=================================
 *
 ********************************************************************************************** */
//
//
//
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin Global functions declaration]=========================
 *
 * --------------------------------------------------------------------------------*/
#if(dev_stdio_USE_GlobalFunctions==1)
//
// TODO : Global functions declaration
//

#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned v0d0] */
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0)||version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
//
//
/*******************************************************************//**
* @brief	API Global, descripion de @ref dev_stdio_nmbAPI_1()
* en caso de necesitar referencia a otra funcion dentro del mismo
* archivo -> @ref {file_base}_nombreAPI_2()
* @b WordInBold
* <b> text in format bold </b>
* @a WordInSpecialFont
* <a> text in special font </a>
* @return value description
* @note
* @par example :
<pre>
a = dev_stdio_Init();
</pre>
*********************************************************************/
//uint32_t dev_printf(uint8_t dev,const char *cadena, ...);
uint32_t dev_printf(uint8_t dev, ...);
//
//
/*******************************************************************//**
* @brief	API Global, descripion de @ref dev_stdio_nmbAPI_1()
* en caso de necesitar referencia a otra funcion dentro del mismo
* archivo -> @ref {file_base}_nombreAPI_2()
* @b WordInBold
* <b> text in format bold </b>
* @a WordInSpecialFont
* <a> text in special font </a>
* @param arg : argument description
* should be :
* 		+ ...
* 		+ ....
* @return value description
* @note
* @par example :
<pre>
a = dev_stdio_Update((void *)Arg);
</pre>
*********************************************************************/
uint32_t dev_sprintf(char *out, const char *format, ...);
//
//
/*******************************************************************//**
* @brief	API Global, descripion de 'dev_stdio_nmbFunc'
* @param arg1 : argument description
* @param arg2 : argument description
* should be :
* 		+ ...
* 		+ ....
* @return value description
* @note
* @par example :
<pre>
a = dev_stdio_SetParam_X((void*)Arg1,arg2);
</pre>
*********************************************************************/
uint32_t dev_snprintf( char *buf, unsigned int count, const char *format, ... );
uint32_t dev_puts(const char *str);


//uint32_t lcd_printf(uint16_t pos, const char *format, ...);
uint32_t lcd_puts(uint16_t pos,const char *str);
//
//
/*********************************************************************
 * @brief funcion para imprimir un menu sobre el modulo LCD
 * @par example :
 <pre>
 lcdMenu_t menuFase[]={// N° Linea o Y es el indice
	   {"Opcion 1"}		//	 1
	  ,{"Opcion 2"}	// 	 2
	  ,{"Opcion 3"}		// 	 3
	  ,MENU_END		//   4
	};
</pre>
 * @param menu : menu que se imprimira sobre el modulo LCD
 * @return nothing
 * @note
 * @par example :
 <pre>
 lcd_menu_t menu1[]={
	   {"count SW0: "}	//	 1
	  ,{"count SW1: "}	//	 2
	  ,{"Autor J.E.L"}	// 	 3
	  ,MENU_END		//
	};
 lcd_print_menu(Arg);
 </pre>
 *********************************************************************/
// void lcd_print_menu(lcd_menu_t * menu);
//
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
/*-----[sub verioned v0d0] */
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))


#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif//#if(dev_stdio_USE_GlobalFunctions==1)
/* ---------------------------------------------------------------------------------
 *
 * ==================[End Global functions declaration]=========================
 *
 * --------------------------------------------------------------------------------*/
//
//
//
/* **********************************************************************************************
 *
 * ===========================[ Begin Global Macros functions ]==================================
 *
 ********************************************************************************************** */
 #if(dev_stdio_USE_GlobalMacroApis==1)
//
//
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
//
//
/********************************************************************//**
 * @brief macro p/ ...
 * @return	Nothing
 *********************************************************************/
#define dev_stdio_INIT()\
	dev_stdio_Init()
//
//
/********************************************************************//**
 * @brief macro p/ ...
 * @param arg : argumento ...
 * @return	Nothing
 *********************************************************************/
#define dev_stdio_UPDATE(arg)\
	dev_stdio_Update()
//
//
/********************************************************************//**
 * @brief macro p/ ...
 * @param n : argumento ...
 * @param arg : argumento ...
 * @return	value
 *********************************************************************/
#define dev_stdio_SET_PARAM_X(n,arg)\
	dev_stdio_SetParam_X()
//
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))



#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))

#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))



//
//
//
#endif// #if(dev_stdio_USE_GlobalMacroApis==1)
/* **********************************************************************************************
 *
 * ===========================[ End Global Macros functions ]==================================
 *
 ********************************************************************************************** */
//
//
/* **********************************************************************************************
 *
 * ==================================[ END GLOBAL declaration ]=================================
 *
 ********************************************************************************************** */
//
/*============================[close, cplusplus]============================*/
//
#ifdef __cplusplus
}
#endif
/** @} doxygen end group definition */
/*==============================[end of file]==============================*/
#endif //#ifndef __dev_stdio_h__
//
//
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif//#if(dev_stdio_projectEnable == 1)
