/* ==========================================================================================================
 *
 * *******************************[ Begin, switch.h ]********************************
 *
 * ========================================================================================================== */
/** \addtogroup switch_h switch.h module
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
 * @file    switch.h.h
 * @brief	<descripcion breve> ej. Porting para tareas de uso comun de FREE RTOS
 * @version v01.01
 * @date   15 oct. 2018
 * @note none
 * @author Luccioni, Jesus Emanuel
 *************************************************************************************/
//
// -- Definimos el Nombre del modulo
//
#ifndef __switch_h__
#define __switch_h__
//
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

#include <chip.h>


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
#define switch_NUMBER 2
/*-- definimos las etiquetas para los Switch */
#define switch_SW0_PORT		chip_GET_PORT(PB_7)
#define switch_SW0_PIN		chip_GET_PIN(PB_7)
#define switch_SW1_PORT		chip_GET_PORT(PB_6)
#define switch_SW1_PIN		chip_GET_PIN(PB_6)
#define switch_SW2_PORT		chip_GET_PORT(PB_5)
#define switch_SW2_PIN		chip_GET_PIN(PB_5)
#define switch_SW3_PORT		chip_GET_PORT(PA_8)
#define switch_SW3_PIN		chip_GET_PIN(PA_8)
#define switch_NIOSE_TIME	10/**<@brief example of macro definitions  */
#define switch_LONG_TIME0	2000
#define switch_LONG_TIME1	1000
#define switch_LONG_TIME2	250

#define switch_SINGLE		0x10
#define switch_COMPOUND		0x20
/**<@brief definimos el tiempo Long Time, en caso de que se
necesite que este se edite en tiempo de ejecucion, debemos comentar este define */





#if(switch_NUMBER == 1)
//
//-- pin SW0
#define	switch_SW0_GET_STATUS	chip_gpio_GetPinStatus(switch_SW0_PORT,switch_SW0_PIN)
#define	switch_SW0_CONFIG		chip_gpio_InitPin(switch_SW0_PORT,switch_SW0_PIN,gpio_InputPullUp)
//
#elif(switch_NUMBER == 2)

//
//-- pin SW0
#define	switch_SW0_GET_STATUS	chip_gpio_GetPinStatus(switch_SW0_PORT,switch_SW0_PIN)
#define	switch_SW0_CONFIG		chip_gpio_InitPin(switch_SW0_PORT,switch_SW0_PIN,gpio_InputFloating)
//
//-- pin SW1
#define	switch_SW1_GET_STATUS	chip_gpio_GetPinStatus(switch_SW1_PORT,switch_SW1_PIN)
#define	switch_SW1_CONFIG		chip_gpio_InitPin(switch_SW1_PORT,switch_SW1_PIN,gpio_InputFloating)
//
//
#elif(switch_NUMBER == 3)
//
//-- pin SW0
#define	switch_SW0_GET_STATUS	chip_gpio_GetPinStatus(switch_SW0_PORT,switch_SW0_PIN)
#define	switch_SW0_CONFIG		chip_gpio_InitPin(switch_SW0_PORT,switch_SW0_PIN,gpio_InputPullUp)
//
//-- pin SW1
#define	switch_SW1_GET_STATUS	chip_gpio_GetPinStatus(switch_SW1_PORT,switch_SW1_PIN)
#define	switch_SW1_CONFIG		chip_gpio_InitPin(switch_SW1_PORT,switch_SW1_PIN,gpio_InputPullUp)
//
//-- pin SW2
#define	switch_SW2_GET_STATUS	chip_gpio_GetPinStatus(switch_SW2_PORT,switch_SW2_PIN)
#define	switch_SW2_CONFIG		chip_gpio_InitPin(switch_SW2_PORT,switch_SW2_PIN,gpio_InputPullUp)
#elif(switch_NUMBER == 4)
//
//-- pin SW0
#define	switch_SW0_GET_STATUS	chip_gpio_GetPinStatus(switch_SW0_PORT,switch_SW0_PIN)
#define	switch_SW0_CONFIG		chip_gpio_InitPin(switch_SW0_PORT,switch_SW0_PIN,gpio_InputPullUp)
//
//-- pin SW1
#define	switch_SW1_GET_STATUS	chip_gpio_GetPinStatus(switch_SW1_PORT,switch_SW1_PIN)
#define	switch_SW1_CONFIG		chip_gpio_InitPin(switch_SW1_PORT,switch_SW1_PIN,gpio_InputPullUp)
//
//-- pin SW2
#define	switch_SW2_GET_STATUS	chip_gpio_GetPinStatus(switch_SW2_PORT,switch_SW2_PIN)
#define	switch_SW2_CONFIG		chip_gpio_InitPin(switch_SW2_PORT,switch_SW2_PIN,gpio_InputPullUp)
//
//-- pin SW3
#define	switch_SW3_GET_STATUS	chip_gpio_GetPinStatus(switch_SW3_PORT,switch_SW3_PIN)
#define	switch_SW3_CONFIG		chip_gpio_InitPin(switch_SW3_PORT,switch_SW3_PIN,gpio_InputPullUp)
#endif//#if(switch_NUMBER == 1)
//
//
// -- local
#define switch_USE_LocalData 0 /**<@brief enable/disable the use Global Data */
#define switch_USE_LocalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define switch_USE_LocalMacroApis 1 /**<@brief enable/disable the use Local macros functions */
// -- global
#define switch_USE_GlobalMacro 1  /**<@brief enable/disable the use Global Macros/Labels */
#define switch_USE_GlobalTypedef 1 /**<@brief enable/disable the use Global Typedef */
#define switch_USE_GlobalData 0 /**<@brief enable/disable the use Global Data */
#define switch_USE_GlobalFunctions 1 /**<@brief enable/disable the use Gobal functions */
#define switch_USE_GlobalMacroApis 0 /**<@brief enable/disable the use Gobal macros functions */
//
//
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
#if(switch_USE_GlobalMacro==1)
//
// TODO : Macros/labels definition
//
/* -----[ sub verioned v0d0 ] */

//
//
#endif //#if(switch_USE_GlobalMacro==1)
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
#if(switch_USE_GlobalTypedef==1)
//
// TODO: Global typedef
//

typedef void (*fT_actionPush) (void); /**<@brief definicion de puntero a
funcion que se ejecutara en caso de la pulsacion del SW */


#if((switch_NUMBER > 1)&&(switch_NUMBER < 5))
 /** @brief example definition global struct, <brief> */
 typedef struct
 {
	uint8_t pin;
 #if(!defined(switch_LONG_TIME1))
 	tickms_t LongTime;/**<@brief Tiempo de espera p/ ejecutar la funcion tiempo prolongado */
 #endif
 	fT_actionPush funActDefault;/**<@brief Funcion a ejcutar accion por defecto */
 	fT_actionPush funActLongTime;/**<@brief Funcion a ejcutar accion tiempor prolongada */
 	uint8_t runType; /**<@brief para seleccionar sejecucion simple o compuesta
 		+ switch_SINGLE
 		+ switch_COMPOUND*/
 }hdl_switch;

#else//#if((switch_NUMBER > 1)&&(switch_NUMBER < 4))
/** @brief example definition global struct, <brief> */
typedef struct
{
#if(!defined(switch_LONG_TIME))
	uint16_t LongTime;/**<@brief Tiempo de espera p/ ejecutar la funcion tiempo prolongado */
#endif
	fT_actionPush funActDefault;/**<@brief Funcion a ejcutar accion por defecto */
	fT_actionPush funActLongTime;/**<@brief Funcion a ejcutar accion tiempor prolongada */
}hdl_switch;
#endif//#if((switch_NUMBER > 1)&&(switch_NUMBER < 4))

//
//
#endif//#if(switch_USE_GlobalTypedef==1)
/* **********************************************************************************************
 *
 * ====================================[End Global typedef]====================================
 *
 * ******************************************************************************************** */
//
//
#ifdef __switch_c__
/* **********************************************************************************************
 *
 * ==================================[ Begin local declaration ]=================================
 *
 ********************************************************************************************** */
//
//
//
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin export data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
#if(switch_USE_GlobalData==1)
//
// TODO : Global data declaration
//
unsigned int globalExample; /**<@brief variable global example, brief of data */

//
//
#endif//#if(switch_USE_GlobalTypedef==1)
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
#else // ifdef __switch_c__
//
//
/* **********************************************************************************************
 *
 * ==============================[ Begin Only externa declaration ]=============================
 *
 ********************************************************************************************** */
/* SECTOR excluido de -> switch.c, utlizar con cuidado*/
//
// TODO : Only external declaration
//
/* ---------------------------------------------------------------------------------
 *
 * ==================[Begin export data declaration]==============================
 *
 * --------------------------------------------------------------------------------*/
#if(switch_USE_GlobalData==1)
//
// TODO : Global data declaration
//
extern unsigned int globalExample; /**<@brief variable global example, brief of data */

//
//
#endif//#if(switch_USE_GlobalTypedef==1)
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
#endif// ifdef __switch_c__
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
#if(switch_USE_GlobalFunctions==1)
//
// TODO : Global functions declaration
//
/*******************************************************************//**
* @brief	API Global, descripion de @ref switch_nmbAPI_1()
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
a = switch_nombreAPI_1(Arg);
</pre>
*********************************************************************/
void switch_Update(hdl_switch *hdlSW);
//
//
/*******************************************************************//**
* @brief	API Global, descripion de 'switch_nmbFunc'
* @param arg : argument description
* should be :
* 		+ ...
* 		+ ....
* @return value description
* @note
* @par example :
<pre>
a = switch_nombreAPI_2(Arg);
</pre>
*********************************************************************/
void switch_Init(void);

//
//
#endif//#if(switch_USE_GlobalFunctions==1)
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
 #if(switch_USE_GlobalMacroApis==1)
//
//
//
/********************************************************************//**
 * @brief macro p/ ...
 * @param arg1 : argumento ...
 * @param ARG2 : argumento ...
 * @return	Nothing
 *********************************************************************/
#define switch_EXAMPLE(arg1,ARG2)\
	(arg1 &=(~(0x01UL<<ARG2)))
//
//
//
#endif// #if(switch_USE_GlobalMacroApis==1)
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
//
/* ==========================================================================================================
 *
 * ***********************************[ End,switch.h ]************************************
 *
 * ========================================================================================================== */
#endif//#ifndef __switch_h__
