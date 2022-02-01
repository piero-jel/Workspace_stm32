#define __chip_gpio_c__ /**<@brief : defined the file name */
/*
 * ******************************[source File]*************************************//**
 * \addtogroup chip_gpio chip_gpio.c module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file chip_gpio.c
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
#include "stm32f10x_rcc.h"



/* -- for end, header file this module */
#include <chip_gpio.h>
/*
 *
 * *********************************************************************************************
 *
 * =================================[ End include header file ]================================
 *
 * ********************************************************************************************
 *
 */
#if (chip_gpio_projectEnable == 1)
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
#define mask_GPIOcfg_t		((uint32_t)0x0F) /**<@brief brief */


/*
 * funcion omonima de chip_gpio_GET_STM_GPIO(),
 * mientras "chip_gpio_GET_STM_GPIO" obtiene el puntero a la estructura del GPIO al cual
 * le corresponde el numero de Puerto pasado.
 * La API "chip_gpio_GetNumberPort" obtiene el numero de GPIO que le corresponde al puntero
 * pasado como GPIO */

//uint32_t chip_gpio_GetNumberPort(STM_GPIO_t *GPIOn);




#define GET_FLASG_PeriphClock(port)\
	(RCC_APB2Periph_GPIOA << (port))


#define chip_gpio_GET_STM_GPIO(NoPort)\
	((STM_GPIO_t *)(GPIO0_BASE_ADR + (GPIOn_DIFF_ADR * NoPort)))

#define chip_gpio_GET_MASK_PIN(pin)\
	(0x01 << pin)
#define chip_gpio_GET_nMASK_PIN(pin)\
	(~(0x01 << pin))

/*-- Listado de los Registros
 *		{inicio}	- { fin }
 * 		0x4001 0800 - 0x4001 0BFF		==>  GPIO port A, 0
 *
 * 		0x4001 0C00 - 0x4001 0FFF		==>  GPIO Port B, 1
 *
 * 		0x4001 1000 - 0x4001 13FF		==>  GPIO Port C, 2
 *
 * 		0x4001 1400 - 0x4001 17FF		==>  GPIO Port D, 3
 *
 * 		0x4001 1800 - 0x4001 1BFF		==>  GPIO Port E, 4
 *
 * 		0x4001 1C00 - 0x4001 1FFF		==>  GPIO Port F, 5
 *
 * 		0x4001 2000 - 0x4001 23FF		==>  GPIO Port G, 6
 * */


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
#if (chip_gpio_USE_LocalData == 1)
/*
 * TODO : Local data declaration
*/

#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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
static unsigned int exampleLocalData; /**<@brief local data declaration */

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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_LocalData == 1) */
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
#if (chip_gpio_USE_LocalFunctions == 1)
/*
// TODO : Local functions declaration
*/

#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_LocalFunctions == 1) */
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
 #if (chip_gpio_USE_LocalMacroApis == 1)
 #if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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
 * \def chip_gpio_BITsETfILE(file,posBit)
 * \brief brief local macro api.
 * \param file	: file, register
 * \param posBit : bit position
 * \return nothig
 * \par example :
 <pre>
  chip_gpio_BITsETfILE(REG_A,7);
 </pre>
 *********************************************************************************/
#define chip_gpio_BITsETfILE(file,posBit)	(file |=(0x01UL<<posBit))

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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_LocalMacroApis == 1) */
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
 * ================================[ Begin Local APIs Definition ]=================================
 *
 * ******************************************************************************************** */
#if (chip_gpio_USE_LocalFunctions == 1)
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_LocalFunctions == 1) */
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
#if (chip_gpio_USE_GlobalData == 1)
/*
// TODO : Local data declaration
*/
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
│ ──────────────────────[ End  Global Data Declaration version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */
#endif /* #if(chip_gpio_USE_GlobalData == 1) */
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
#if (chip_gpio_USE_GlobalFunctions == 1)
/*
// TODO : Global APIs Section
*/
#if (version_QueryNumber(__chip_gpio_version__,01v0d0))
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


/*
 * GetInputRegister(port, mask)
 * GetOutputRegister(port,mask)
 *
 * SetPinLow(port,pin)
 * SetPinHigh(port,pin)
 * SetPinToggle(port,pin)
 * GetPinStatus(port,pin)
 * GetPortValue(port,mask)
 * SetPortValue(port,mask)
 * */

/* CRL -> Port configuration register low 32-Bits, pag137
Registro CRL
Port configuration 			mode
	{ 2-Bits}				{ 2-Bits}
		31 - 30				29 - 28		pin 7
		27 - 26				25 - 24		pin 6
		23 - 22				21 - 20		pin 5
		19 - 18				17 - 16		pin 4
		15 - 14				13 - 12		pin 3
		11 - 10				09 - 08		pin 2
		07 - 06				05 - 04		pin 1
		03 - 02				01 - 00		pin 0

  CRH	-> Port configuration register high 32-Bits,
Registro CRH
	configuracion			mode
	{ 2-Bits}				{ 2-Bits}
		31 - 30				29 - 28		pin 15
		27 - 26				25 - 24		pin 14
		23 - 22				21 - 20		pin 13
		19 - 18				17 - 16		pin 12
		15 - 14				13 - 12		pin 11
		11 - 10				09 - 08		pin 10
		07 - 06				05 - 04		pin 9
		03 - 02				01 - 00		pin 8

-- configuracion del modo
	00: Input mode (reset state)
	01: Output mode, max speed 10 MHz.
	10: Output mode, max speed 2 MHz.
	11: Output mode, max speed 50 MHz.

-- configuracion de la Funcion
In input mode (MODE[1:0]=00):
	00: Analog mode
	01: Floating input (reset state)
	10: Input with pull-up / pull-down
	11: Reserved

In output mode (MODE[1:0] > 00):
	00: General purpose output push-pull
	01: General purpose output Open-drain
	10: Alternate function output Push-pull
	11: Alternate function output Open-drain

gpio_InputAnalog    	0000 0000  	0x00	@brief Input Analog mode
gpio_InputFloating  	0000 0100  	0x04	@brief Input, Floating  (reset state)
gpio_InputPullUp    	0010 1000  	0x28	@brief Input with pull-up, PxODR<n> =  1
gpio_InputPullDown  	0001 1000  	0x18	@brief Input with pull-down, PxODR<n> =  0
-- 01: Output mode, max speed 10 MHz.
gpio_OutGP_PP_10Mhz   	0000 0001 	0x01	@brief General purpose output push-pull, max speed 10 MHz
gpio_OutGP_OD_10Mhz    	0000 0101 	0x05 	@brief General purpose output Open-drain, max speed 10 MHz
gpio_OutAF_PP_10Mhz    	0000 1001 	0x09	@brief Alternate function output Push-pull, max speed 10 MHz
gpio_OutAF_OD_10Mhz    	0000 1101 	0x0D	@brief Alternate function output Open-drain, max speed 10 MHz
-- 10: Output mode, max speed 2 MHz.
gpio_OutGP_PP_2Mhz    	0000 0010 	0x02  	@brief General purpose output push-pull, max speed 2 MHz
gpio_OutGP_OD_2Mhz    	0000 0110 	0x06	@brief General purpose output Open-drain, max speed 2 MHz
gpio_OutAF_PP_2Mhz   	0000 1010 	0x0A	@brief Alternate function output Push-pull, max speed 2 MHz
gpio_OutAF_OD_2Mhz    	0000 1110 	0x0E	@brief Alternate function output Open-drain, max speed 2 MHz
-- 11: Output mode, max speed 50 MHz.
gpio_OutGP_PP_50Mhz    	0000 0011 	0x03	@brief General purpose output push-pull, max speed 50 MHz
gpio_OutGP_OD_50Mhz    	0000 0111 	0x07	@brief General purpose output Open-drain, max speed 50 MHz
gpio_OutAF_PP_50Mhz    	0000 1011 	0x0B	@brief Alternate function output Push-pull, max speed 50 MHz
gpio_OutAF_OD_50Mhz    	0000 1111 	0x0F	@brief Alternate function output Open-drain, max speed 50 MHz
	 * */


//
//
//
/*********************************************************************
 * @brief Funcion para la inicializacion de un pin de un puerto
 * @param port : Puerto, numero que representa al puerto
 * Para obtenerlo en funcion del nombre alfanumerico podemos implementar
 * @ref chip_GET_PORT().
 * @param pin : pin, numero que representa el pin. Podemos usar el macro
 * @ref chip_GET_PIN() para obtener el numero del pin correspondiente
 * a la etiqueta alfanumerica.
 * @param mode : modo en el cual se configurara el pin del GPIO
 * should be :
 * 		+ gpio_InputAnalog , gpio_InputFloating, gpio_InputPullUp, gpio_InputPullDown
 * 		+ gpio_OutGP_PP_10Mhz, gpio_OutGP_OD_10Mhz, gpio_OutAF_PP_10Mhz, gpio_OutAF_OD_10Mhz
 * 		+ gpio_OutGP_PP_2Mhz, gpio_OutGP_OD_2Mhz, gpio_OutAF_PP_2Mhz, gpio_OutAF_OD_2Mhz
 * 		+ gpio_OutGP_PP_50Mhz, gpio_OutGP_OD_50Mhz, gpio_OutAF_PP_50Mhz, gpio_OutAF_OD_50Mhz
 * @return nothing
 * @note
 * @par example :
 <pre>
 chip_gpio_InitPin(chip_GET_PORT(PC_13),chip_GET_PIN(PC_13),gpio_OutGP_OD_2Mhz);
 //.. idem
 chip_gpio_InitPin(2,13,gpio_OutGP_OD_2Mhz);
 </pre>
 *********************************************************************/
void chip_gpio_InitPin(uint32_t port,uint32_t pin, GPIOpinCfg_t mode)
{
 //__IO uint32_t * pRegister;
/*

07   06   05   04   03   02   01   00       -> Pin relativo
15   14   13   12   11   10   09   08       -> pin relativo''

0100 0011 0100 0100 0100 0100 0100 0100     -> fail

0100 0100 0100 0011 0100 0100 0100 0100     -> oK

  28  24   20   16   12   08   04   00      -> shifter
//--
In input mode (MODE[1:0]=00):
	00: Analog mode
	01: Floating input (reset state)
	10: Input with pull-up / pull-down
	11: Reserved

In output mode (MODE[1:0] > 00):
	00: General purpose output push-pull
	01: General purpose output Open-drain
	10: Alternate function output Push-pull
	11: Alternate function output Open-drain
*/
 registerRW32_t *pRegister;
 /* fixme la idea de utilizar un temporal de registro es para la configuracion de diversos registros,
  * en el cual al pasarle la mascara. Tomamos solamente los que estan con '1', para que sean configurados
  * descartando los Otros*/
 uint32_t tmpReg;
 uint32_t shift;

 RCC_APB2PeriphClockCmd(GET_FLASG_PeriphClock(port), ENABLE);

 if(pin > 15) return;
 //pin &= ((uint32_t) 0x0F);
 if(pin < 8)
 {
	/*-- obteniendo la direccion de memoria de un miembro dentro de la estructyra */
   pRegister = &chip_gpio_GET_STM_GPIO(port)->CRL;
 }
 else
 {
   pRegister = &chip_gpio_GET_STM_GPIO(port)->CRH;
   pin -= ((uint32_t)0x08);   //pin = pin >> 0x01;
 }
 if(mode == gpio_InputPullUp)
 {
	 chip_gpio_GET_STM_GPIO(port)->ODR |= chip_gpio_GET_MASK_PIN(pin);
	 mode &= mask_GPIOcfg_t;
 }
 if(mode == gpio_InputPullDown)
 {
	 chip_gpio_GET_STM_GPIO(port)->ODR &= chip_gpio_GET_nMASK_PIN(pin);
	 mode &= mask_GPIOcfg_t;
 }
 tmpReg = (*pRegister);

 shift = 4*pin;// << 2; /* c = a << b <=> C = A * 2^B */
 tmpReg &= (~(((uint32_t)0x0F) << shift));
 tmpReg |= ((uint32_t) (((uint32_t)mode) << shift));

 (*pRegister) = tmpReg;
}





#if 0
void chip_gpio_InitPort(uint32_t port,uint32_t maskPin, GPIOpinCfg_t mode)
{
 //__IO uint32_t * pRegister;
/*

07   06   05   04   03   02   01   00       -> Pin relativo
15   14   13   12   11   10   09   08       -> pin relativo''

0100 0011 0100 0100 0100 0100 0100 0100     -> fail

0100 0100 0100 0011 0100 0100 0100 0100     -> oK

  28  24   20   16   12   08   04   00      -> shifter
*/

 registerRW32_t *pRegister;
 /* fixme la idea de utilizar un temporal de registro es para la configuracion de diversos registros,
  * en el cual al pasarle la mascara. Tomamos solamente los que estan con '1', para que sean configurados
  * descartando los Otros*/
 uint32_t tmpReg;
 uint32_t shift,tmp_mode;

 if(pin > 15) return;
 //pin &= ((uint32_t) 0x0F);
 if(pin < 8)
 {
	/*-- obteniendo la direccion de memoria de un miembro dentro de la estructyra */
   pRegister = &chip_gpio_GET_STM_GPIO(port)->CRL;
 }
 else
 {
   pRegister = &chip_gpio_GET_STM_GPIO(port)->CRH;
   pin -= ((uint32_t)0x08);   //pin = pin >> 0x01;
 }
 if(mode == gpio_InputPullUp)
 {
	 chip_gpio_GET_STM_GPIO(port)->ODR |= chip_gpio_GET_MASK_PIN(pin);
	 mode &= mask_GPIOcfg_t;
 }
 if(mode == gpio_InputPullDown)
 {
	 chip_gpio_GET_STM_GPIO(port)->ODR &= chip_gpio_GET_nMASK_PIN(pin);
	 mode &= mask_GPIOcfg_t;
 }
 tmpReg = (*pRegister);

 shift = 4*pin;// << 2; /* c = a << b <=> C = A * 2^B */
 tmpReg &= (~(((uint32_t)0x0F) << shift));
 tmpReg |= ((uint32_t) (((uint32_t)mode) << shift));

 (*pRegister) = tmpReg;
}
#endif



void chip_gpio_SetPinLow(uint32_t port,uint32_t pin)
{
	chip_gpio_GET_STM_GPIO(port)->BRR |= chip_gpio_GET_MASK_PIN(pin);
}

void chip_gpio_SetPinHigh(uint32_t port,uint32_t pin)
{
	chip_gpio_GET_STM_GPIO(port)->BSRR |= chip_gpio_GET_MASK_PIN(pin);
}

void chip_gpio_SetPinToggle(uint32_t port,uint32_t pin)
{
	chip_gpio_GET_STM_GPIO(port)->ODR ^= chip_gpio_GET_MASK_PIN(pin);
}

bool_t chip_gpio_GetPinStatus(uint32_t port,uint32_t pin)
{
	return (bool_t) (((chip_gpio_GET_STM_GPIO(port)->IDR)>>pin)& 0x01);
	//return (bool_t) (((chip_gpio_GET_STM_GPIO(port)->ODR)>>pin)& 0x01);

}

#if 0
void chip_gpio_InitPort(uint32_t port,uint32_t maskPin, GPIOpinCfg_t mode)
{

}
void chip_gpio_DeInit(uint32_t port)
{

}


void chip_gpio_cfgDefaultMode(void * mode)
{

}



/* lee el pin desde el registro de entrada del puerto */
uint32_t chip_gpio_GetInputRegister(uint8_t port, uint32_t mask){}
/* lee el registro de entrada del puerto */
uint32_t chip_gpio_GetOutputRegister(uint8_t port, uint32_t mask){}

bool_t chip_gpio_GetPinStatus(uint32_t port,uint32_t pin){}
uint32_t chip_gpio_GetPortValue(uint32_t port,uint32_t mask){}
uint32_t chip_gpio_SetPortValue(uint32_t port,uint32_t mask){}
#endif

/*
void GPIO_SetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_ResetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_WriteBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, BitAction BitVal);
void GPIO_Write(GPIO_TypeDef* GPIOx, uint16_t PortVal);*/

/*
void GPIO_AFIODeInit(void);
void GPIO_PinLockConfig(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void GPIO_EventOutputConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);
void GPIO_EventOutputCmd(FunctionalState NewState);
void GPIO_PinRemapConfig(uint32_t GPIO_Remap, FunctionalState NewState);
void GPIO_EXTILineConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);
void GPIO_ETH_MediaInterfaceConfig(uint32_t GPIO_ETH_MediaInterface);*/



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
#elif (version_QueryNumber(__chip_gpio_version__,01v0d1))
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
 int chip_gpio_test_01(unsigned int a,const char* name)
 {

 }
 /*
 *
 * ********************************************************************************
 * \fn int chip_gpio_test_02(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \par example :
  <pre>
  a = chip_gpio_test_02(1,"hola");
  </pre>
 *********************************************************************************/
 int chip_gpio_test_02(unsigned int a,const char* name)
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
#endif /* #if (version_QueryNumber(__chip_gpio_version__,01v0d0)) */

#endif /* #if(chip_gpio_USE_GlobalFunctions == 1) */
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
#endif /* #if(chip_gpio_projectEnable == 1) */
