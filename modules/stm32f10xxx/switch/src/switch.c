/* ==========================================================================================================
 *
 * *******************************[ Begin, switch.c ]********************************
 *
 * ========================================================================================================== */
/** \addtogroup switch_c switch.c module
 ** @{ */
/********************************[ copyright]*************************************//**
 *@copyright 2018, Luccioni Jesús Emanuel. \n
 * All rights reserved. \n
 * This file is part of insername. \n
 * Redistribution is not allowed on binary and source forms,
 * with or without modification. \n
 * Use is permitted with prior authorization by
 * the copyright holder.\n
 * \n meil :
 * 	- piero.jel@gmail.com
 *************************************************************************************/
//
/********************************[Header File]*************************************//**
 * @file   switch.c
 * @brief	descripcion breve ej. Porting para uso del modulo UART, con SO
 * @version v01.01
 * @date   15 oct. 2018
 * @note none
 * @author Luccioni, Jesus Emanuel
 *************************************************************************************/
//
//
/* **********************************************************************************************
 *
 * ==========================[ Begin define the configuration Labels ]===========================
 *
 * **********************************************************************************************/
//
//
#define __switch_c__ /**<@brief : defined the file name */
//
/* **********************************************************************************************
 *
 * ==========================[ End define the configuration Labels ]===========================
 *
 * **********************************************************************************************/
//
//
/* **********************************************************************************************
 *
 * =================================[ include header file ]================================
 *
 * ******************************************************************************************** */
//
// TODO : header file, list
//
#include <SysTickTimer.h>

// -- for end, header file this module
#include <switch.h>
//
//
//
/* **********************************************************************************************
 *
 * =================================[ End include header file ]================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * =================================[Begin Hardware Description ]================================
 *
 * ******************************************************************************************** */
//
// TODO : Hardware Description
//
#define NOISE_TIME switch_NIOSE_TIME
#define __TEMP	1
#if (switch_NUMBER == 4)
#define USE_ARRAY_forPIN	1
#else
#define USE_ARRAY_forPIN	0
#endif
#define pass_LONG_TIME		0x01
#define pass_nLONG_TIME		0xFE
#define query_SINGLE		0x11


#define pass_COMPOUND		0x22

//
//
/* **********************************************************************************************
 *
 * ==================================[End Hardware Description ]=================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * ===================================[ Begin Local typedef ]====================================
 *
 * ******************************************************************************************** */
//
// TODO : Local typedef
//
/** @brief enumeracion para la seleccion de la longitud del
 * dato que deseamos cargar sobre el bus de Dato del LCD */
typedef enum{
	HALF_WORD = 0, /**<@brief Media palabra, solo el Nibble alto*/
	FULL_WORD, /**<@brief Palabra Completa, Primero el Nibble alto */
}eT_Example;
//
//
typedef void (*fT_pFunArg_void) (void); /**<@brief definicion de puntero a funcion argumento Void */
typedef void (*fT_pFunArg_uint8_t) (uint8_t); /**<@brief definicion de puntero a funcion argumento unit8_t */


/* **********************************************************************************************
 *
 * ===================================[ End Local typedef ]====================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * ===================================[ Begin Local macros ]====================================
 *
 * ******************************************************************************************** */
//
// TODO : Local Macro/Labels definitions
//
#define EXAMPLE_LOCAL_MACRO		20000	/**<@brief Tiempo en ms de la instruccion cero
para inicializar el Display */
#define CONFIG_SWn(swn)
//
//
//
/* **********************************************************************************************
 *
 * ===================================[ End Local macros ]====================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * ===============================[ Begin Local Data Declaration ]================================
 *
 * ******************************************************************************************** */
#if(switch_USE_LocalData==1)
//
// TODO : Local data declaration
//


static uint32_t exampleLocalData;/**<@brief Almacena la Direccion de DDRAM actual
(la ultima direccion sobre la Cual se escribio un caracter) */


//
//
#endif//#if(switch_USE_LocalData==1)
/* **********************************************************************************************
 *
 * ===============================[ End Local Data Declaration ]================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * ===============================[ Begin Local APIs Declaration ]================================
 *
 * ******************************************************************************************** */
#if(switch_USE_LocalFunctions==1)
//
// TODO : Local functions declaration
//

//
/*******************************************************************//**
 * @brief	Configura la Escritura de Instruccion sobre el Modulo LCD
 * @return nothing
 *********************************************************************/
static void updateFlags(uint8_t *flags);
static tickms_t getLongTime(uint8_t flags);


//
//
//
#endif//#if(switch_USE_LocalFunctions==1)
/** @} doxygen end group definition */
/* **********************************************************************************************
 *
 * ===============================[ End Local APIs Declaration ]================================
 *
 * ******************************************************************************************** */
//
//
//
/* **********************************************************************************************
 *
 * ===========================[ Begin Local Macros functions ]==================================
 *
 ********************************************************************************************** */
 #if(switch_USE_LocalMacroApis==1)
//
//
//
/********************************************************************//**
* @brief	De-Initializes the I2C peripheral registers to
*  their default reset values
* @param	idI2C	: identifier of the I2C peripheral
 * 	should be :
 * 		+ e_I2C0
 * 		+ e_I2C1
 * 		+ e_I2C2
* @return	Nothing
 *********************************************************************/




/**
 * act:
 * 	+ GET_STATUS, p/obtener el estado actual del pin
 *  + CONFIG, p/configurar el pin como entrada.
 *  */
#define pinSW0(act)		switch_SW0_##act
#define pinSW1(act)		switch_SW1_##act
#define pinSW2(act)		switch_SW2_##act
#define pinSW3(act)		switch_SW3_##act


//
//
//

#if(defined(switch_LONG_TIME))
#define GET_LONGtime(str) switch_LONG_TIME
#else//#if(defined(switch_LONG_TIME))
#define GET_LONGtime(str) str->LongTime
#endif//#if(defined(switch_LONG_TIME))

#if(switch_NUMBER == 1)
/**
 * act:
 * 	+ GET_STATUS, p/obtener el estado actual del pin
 *  + CONFIG, p/configurar el pin como entrada.
 *  */
#define SW0(act)	SW0_##act

static uint8_t status;
static uint16_t acu_ms;
#define SET_STATUS(value,pin)	status=value
#define GET_ACU_MS(pin)	acu_ms




#elif((switch_NUMBER == 2)||(switch_NUMBER == 3)||(switch_NUMBER == 4))
/**
 * act:
 * 	+ GET_STATUS, p/obtener el estado actual del pin
 *  + CONFIG, p/configurar el pin como entrada.
 *  */
static uint8_t status[switch_NUMBER];
static uint8_t flags[switch_NUMBER];
static tickms_t acu_ms[switch_NUMBER];
static tickms_t acuLongTime[switch_NUMBER];
#define SWn_pFLAGS(pin)			&flags[pin]
#define SWn_FLAGS(pin)			flags[pin]
#define SWn_STATUS(pin)			status[pin]
#define SWn_ACU_MS(pin)			acu_ms[pin]
#define SWn_ACUlongTime(pin)	acuLongTime[pin]
#else
#warning "Error al definir switch_NUMBER, numero no soportado "
#endif//#if(switch_NUMBER == 1)



#if((switch_NUMBER == 2)&&(USE_ARRAY_forPIN == 1))
static const uint8_t aPort[]={switch_SW0_PORT,switch_SW1_PORT};
static const uint8_t aPin[]={switch_SW0_PIN,switch_SW1_PIN};
#elif((switch_NUMBER == 3)&&(USE_ARRAY_forPIN == 1))
static const uint8_t aPort[]={switch_SW0_PORT,switch_SW1_PORT,switch_SW2_PORT};
static const uint8_t aPin[]={switch_SW0_PIN,switch_SW1_PIN,switch_SW2_PIN};
#elif((switch_NUMBER == 4)&&(USE_ARRAY_forPIN == 1))
static const uint8_t aPort[]={switch_SW0_PORT,switch_SW1_PORT,switch_SW2_PORT,switch_SW3_PORT};
static const uint8_t aPin[]={switch_SW0_PIN,switch_SW1_PIN,switch_SW2_PIN,switch_SW3_PIN};
#endif//#if(switch_NUMBER == 1)

//
//
//
#endif// #if(switch_USE_LocalMacroApis==1)
/* **********************************************************************************************
 *
 * ===========================[ End Local Macros functions ]==================================
 *
 ********************************************************************************************** */
//
//
/** @} doxygen end group definition */
//
//
/* **********************************************************************************************
 *
 * ================================[ Begin Local APIs Definition ]=================================
 *
 * ******************************************************************************************** */
#if(switch_USE_LocalFunctions==1)
//
//
/**
  * act:
  * 	+ GET_STATUS, p/obtener el estado actual del pin
  *  + CONFIG, p/configurar el pin como entrada.
  *  */
//
//
/*******************************************************************//**
 * @brief Funcion para obtener el estado del Pines relacionados a los pulsadores
 * @param pin : pin correspondiente al SW
 * @return
 * 		+ TRUE : el Pin esta en nivel alto
 * 		+ FALSE : el pin esta en nivel bajo
 *********************************************************************/
#if (USE_ARRAY_forPIN == 1)
#define get_pint_status(pin) chip_gpio_GetPinStatus(aPort[pin],aPin[pin])
#else
static bool_t get_pint_status(uint8_t pin)
 {
#if(switch_NUMBER == 2)
 	switch(pin)
 	{
 	case 0:
 		return pinSW0(GET_STATUS);
 	case 1:
 		return pinSW1(GET_STATUS);
 	default:
 		/*FAIL*/
 		return 0;
 	}
#elif(switch_NUMBER == 3)
 	switch(pin)
 	{
 		case 0:
 			return pinSW0(GET_STATUS);
 		case 1:
 			return pinSW1(GET_STATUS);
 		case 2:
 			return pinSW2(GET_STATUS);
 		default:
 			/*FAIL*/
 			return 0;
 	}
#elif(switch_NUMBER == 4)
 	switch(pin)
 	{
 		case 0:
 			return pinSW0(GET_STATUS);
 		case 1:
 			return pinSW1(GET_STATUS);
 		case 2:
 			return pinSW2(GET_STATUS);
 		case 3:
 			return pinSW3(GET_STATUS);
 		default:
 			/*FAIL*/
 			return 0;
 	 }
#endif//#if(switch_NUMBER == 1)
 }
#endif//#if 1
//
//
/*******************************************************************//**
 * @brief	Configura la Escritura de Instruccion sobre el Modulo LCD
 * @b wordInTextBold <b>parafo en bold </b>
 * @return nothing
 *********************************************************************/
static void updateFlags(uint8_t *flags)
{
#if (__TEMP == 2)
	uint8_t tmp;
	tmp = *flags & 0x0F;
	if(tmp == 8) return;
	tmp++;
	(*flags) &= 0xF0;
	(*flags) |= tmp;
#elif ( __TEMP == 1)
	if(*flags == 8) return;
	(*flags)++;
#else
	switch(*flags)
	{
	default:
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		break;
	case 7:
		return;
	}
	(*flags)++;
#endif
}
static tickms_t getLongTime(uint8_t flags)
{
#if (__TEMP == 2)
	uint8_t tmp;
	tmp = flags & 0x0F;
	switch(tmp)
#elif (__TEMP == 1)
	switch(flags)
#endif

	{
	default:
	case 0:
	case 1:
		return switch_LONG_TIME0;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		return switch_LONG_TIME1;
	case 8:
		return switch_LONG_TIME2;
	}
}
//
//
#endif//#if(switch_USE_LocalFunctions==1)
/* **********************************************************************************************
 *
 * ================================[ End Local APIs Definition ]=================================
 *
 * ********************************************************************************************* */
//
//
//
/* **********************************************************************************************
 *
 * ===============================[ Begin Global APIs Definition ]===============================
 *
 * ******************************************************************************************** */
#if(switch_USE_GlobalFunctions==1)
//
// TODO : Global APIs Section
//
/*********************************************************************
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
#if(switch_NUMBER == 1)
 //
 //
 //
 /*********************************************************************
 * @brief Funcion para la inicializacion del Hardware necesario
 * para los pulsadores SWn
 * @return nothing
 * @note
 * @par example :
 <pre>
 Switch_Init();
 </pre>
 *********************************************************************/
void switch_Init()
{
  	SW0(CONFIG);
}

 /**
  * act:
  * 	+ GET_STATUS, p/obtener el estado actual del pin
  *  + CONFIG, p/configurar el pin como entrada.
  *  */
#define get_pint_status(pin)\
		SW0(GET_STATUS)

/*******************************************************************//**
 * @brief Funcion para actualizar el estados de los pulsadores
 * @param strSWn : Estructura que representa handler del Pulsador
 * 	Argumentos:
 * 		+ numSW : establecemso el Pulsador, al cual corresponde
 * 		+ LongTime :Tiempo estimado para la deteccion de pulsacion
 * 		prolongada (solo la Version 1v2{d/e}0)
 * 		+ funActDefault : Puntero a funcion, a la funcion
 * 		a ejecutar con una pulsacion simple
 * 		+ funActLongTime : puntero a funcion, a la funcion
 * 		a ejecutar con una pulsacion prolongada
 * @return nothing
 * @note
 * @par example :
 <pre>
 void fPushNormal(void);//prototipo de funcion
 void fPushProlongada(void);//prototipo de funcion
 ..
 sT_handlerSWn handlerSW1 ={eT_SW1,fPushNormal,fPushProlongada};
 ...
 Switch_UpdateSWn(&handlerSW1);
 </pre>
 *********************************************************************/
 void switch_Update(hdl_switch *hdlSW)
 {
 /* 	v1v1d0, Add Deteccion Prolongada, con tiempo fijo Prestablecido.
  * 		Por defecto la accion prolongada se ejecutara periodicamente, a un periodo
  * 		igual que el tiempo de deteccion prolongada.
  * 		Handler
  * 				>> Funcion por defecto, funActDefault
  * 				>> Id del SWn, numSW
  * 				>> Funcion p/pulsacion prolongada, funActLongTime	 * */
 	switch(status)
 	{
 		default:
 			status = 0;
 		return;
 		case 0:
 			// Scaneamos la entrada
 			if(get_pint_status(hdlSW->pin) == 0)
 			{
 				status = 1;
 				acu_ms = timer_GetCountMS();
 			}
 			return;
 		case 1: /*delay time noise, push time*/
 			if(timer_TimeOut(&acu_ms,NOISE_TIME))
 			{
 				status = 2;
 			}
 			return;
 		case 2:	// -- Consultamos si la entrada mantiene su estado
 			if(get_pint_status(hdlSW->pin) == 0)
 			{ // Estado Validado
 				status = 3;
 				return;
 			}
 			// no mantiene el estado, ruido en la linea volvemos al estado incial
 			status = 0;
 			return;
 		case 3: /*consultamos si se solto el Pulsador o si se agoto el Time Ou prolongado*/
 			if(get_pint_status(hdlSW->pin) == 1)
 			{
 				status = 4;
 				return;
 			}
 			/* Consultamos si expiro el tiempo de pulsacion prolongada
 			 *  FIXME: la pulsacion prolongada la pordemos dejar como macro
 			 * */
 			if(timer_TimeOut(&acu_ms,GET_LONGtime(hdlSW)))
 			{
 				// Pulsacion Prolongada
 				if((hdlSW->funActLongTime)!=NULL)
 				{
 					// Ejecutamos la accion Push and Pull
 					(hdlSW->funActLongTime) ();
 				}
 			}
 			return;

 		case 4 : /*noise Time, Pull*/
 			if(timer_TimeOut(&acu_ms,NOISE_TIME))
 			{
 				/* saltamos al proximo estado, ejecutamos la funcion*/
 				status = 5;
 			}
 			return;

 		case 5:
 			// -- Consultamos si la entrada mantiene su estado
 			if(get_pint_status(hdlSW->pin) == 1)
 			{
 				if((hdlSW->funActDefault)!=NULL)
 				{
 					// Ejecutamos la accion Push and Pull
 					(hdlSW->funActDefault) ();
 				}
 				/*-- sEjecutada la Accion por defecto, inicializamso la FSM*/
 				status = 0;
 			}
 			else
 			{
 				/* Posible Ruido en la Linea, volvemos al estado
 				 * de consulta si se solto el pulsador*/
 				status = 3;
 			}
 			return;
 		}
 }
#elif((switch_NUMBER > 1) && (switch_NUMBER <= 4))
 //
 //
 //
 /*********************************************************************
 * @brief Funcion para la inicializacion del Hardware necesario
 * para los pulsadores SWn
 * @return nothing
 * @note
 * @par example :
 <pre>
 Switch_Init();
 </pre>
 *********************************************************************/
 void switch_Init(void)
 {
 	/*-- configuramso los pines correspondiente como entrada*/
 #if(switch_NUMBER == 2)
	 pinSW0(CONFIG);
	 pinSW1(CONFIG);
 #elif(switch_NUMBER == 3)
	 pinSW0(CONFIG);
	 pinSW1(CONFIG);
	 pinSW2(CONFIG);
 #elif(switch_NUMBER == 4)
	 pinSW0(CONFIG);
	 pinSW1(CONFIG);
	 pinSW2(CONFIG);
	 pinSW3(CONFIG);
 #endif
 }
//
//
 /*******************************************************************//**
 * @brief Funcion para actualizar el estados de los pulsadores
 * @param strSWn : Estructura que representa handler del Pulsador
 * 	Argumentos:
 * 		+ numSW : establecemso el Pulsador, al cual corresponde
 * 		+ LongTime :Tiempo estimado para la deteccion de pulsacion
 * 		prolongada (solo la Version 1v2{d/e}0)
 * 		+ funActDefault : Puntero a funcion, a la funcion
 * 		a ejecutar con una pulsacion simple
 * 		+ funActLongTime : puntero a funcion, a la funcion
 * 		a ejecutar con una pulsacion prolongada
 * @return nothing
 * @note
 * @par example :
 <pre>
 void fPushNormal(void);//prototipo de funcion
 void fPushProlongada(void);//prototipo de funcion
 ..
 sT_handlerSWn handlerSW1 ={eT_SW1,fPushNormal,fPushProlongada};
 ...
 Switch_UpdateSWn(&handlerSW1);
 </pre>
 *********************************************************************/
 void switch_Update(hdl_switch *hdlSW)
 {
 /* 	v1v1d0, Add Deteccion Prolongada, con tiempo fijo Prestablecido.
  * 		Por defecto la accion prolongada se ejecutara periodicamente, a un periodo
  * 		igual que el tiempo de deteccion prolongada.
  * 		Handler
  * 				>> Funcion por defecto, funActDefault
  * 				>> Id del SWn, numSW
  * 				>> Funcion p/pulsacion prolongada, funActLongTime	 * */
 	switch(SWn_STATUS(hdlSW->pin))
 	{
 		default:
 			SWn_STATUS(hdlSW->pin) = 0;
 		return;
 		case 0:
 			// Scaneamos la entrada
 			if(!get_pint_status(hdlSW->pin))
 			{
 				SWn_STATUS(hdlSW->pin) = 1;
 				SWn_ACU_MS(hdlSW->pin) = SysTickTimer_GetTickMs();
 			}
 			return;
 		case 1: /*delay time noise, push time*/
 			if(SysTickTimer_TimeOut(&SWn_ACU_MS(hdlSW->pin),NOISE_TIME))
 			{
 				SWn_STATUS(hdlSW->pin) = 2;
 			}
 			return;
 		case 2:	// -- Consultamos si la entrada mantiene su estado
 			if(!get_pint_status(hdlSW->pin))
 			{ // Estado Validado
 				SWn_STATUS(hdlSW->pin) = 3;
 				return;
 			}
 			// no mantiene el estado, ruido en la linea volvemos al estado incial
 			SWn_STATUS(hdlSW->pin) = 0;
 			return;
 		case 3: /*consultamos si se solto el Pulsador o si se agoto el Time Ou prolongado*/
 			if(get_pint_status(hdlSW->pin))
 			{
 				SWn_STATUS(hdlSW->pin) = 4;
 				return;
 			}
 			/* Consultamos si expiro el tiempo de pulsacion prolongada
 			 *  FIXME: la pulsacion prolongada la pordemos dejar como macro
 			 * */
 			SWn_ACUlongTime(hdlSW->pin) = getLongTime(SWn_FLAGS(hdlSW->pin));
 			//if(SysTickTimer_TimeOut(&SWn_ACU_MS(hdlSW->pin),GET_LONGtime(hdlSW)))
 			if(SysTickTimer_TimeOut(&SWn_ACU_MS(hdlSW->pin),SWn_ACUlongTime(hdlSW->pin)))
 			{
 				updateFlags(SWn_pFLAGS(hdlSW->pin));
 				// Pulsacion Prolongada
 				if((hdlSW->funActLongTime)!= NULL)
 				{
 					// Ejecutamos la accion Push and Pull
 					(hdlSW->funActLongTime) ();
 				}
 				hdlSW->runType |= pass_LONG_TIME;
 			}
 			return;

 		case 4 : /*noise Time, Pull*/
 			if(SysTickTimer_TimeOut(&SWn_ACU_MS(hdlSW->pin),NOISE_TIME))
 			{
 				/* saltamos al proximo estado, ejecutamos la funcion*/
 				SWn_STATUS(hdlSW->pin) = 5;
 			}
 			return;
 		case 5:
 			// -- Consultamos si la entrada mantiene su estado
 			if(get_pint_status(hdlSW->pin))
 			{
 				/*-- sEjecutada la Accion por defecto, reiniciamos la FSM*/
 				SWn_FLAGS(hdlSW->pin) = 0;
 				SWn_STATUS(hdlSW->pin) = 0;
 				//if(!(hdlSW->runType ^ query_SINGLE))
 				if(hdlSW->runType == query_SINGLE)
 				{
 					hdlSW->runType &= pass_nLONG_TIME;
 					return;
 				}
 				if((hdlSW->funActDefault) != NULL)
 				{
 					// Ejecutamos la accion Push and Pull
 					(hdlSW->funActDefault) ();
 				}
 			}
 			else
 			{
 				/* Posible Ruido en la Linea, volvemos al estado
 				 * de consulta si se solto el pulsador*/
 				SWn_STATUS(hdlSW->pin) = 3;
 			}
 			return;
 		}
 }
#endif
//
//
#endif//#if(switch_USE_GlobalFunctions==1)
/* **********************************************************************************************
 *
 * ================================[ End Global APIs Section ]=================================
 *
 * ******************************************************************************************** */
//
//
/* ==========================================================================================================
 *
 * ***********************************[ End,switch.c ]************************************
 *
 * ========================================================================================================== */
