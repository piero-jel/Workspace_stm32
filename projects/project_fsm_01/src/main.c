#define __main_c__ /**<@brief : defined the file name */
/*
 * ******************************[source File]*************************************//**
 * \addtogroup main
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file main.c
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
 *  **********************************************************************************************
 *
 * =================================[ include header file ]================================
 *
 * ******************************************************************************************** */
/*
 * TODO : header file, list
*/
#include <chip.h>
#include <main.h>
/*
 *  *********************************************************************************************
 *
 * =================================[ END include header file ]================================
 *
 * ******************************************************************************************** */
/*
 *
 *  **********************************************************************************************
 *
 * ==========================[ BEGIN define the configuration Labels ]===========================
 *
 * **********************************************************************************************/
#ifndef __main_version__
#define __main_version__    version_SetNumber(01v0d0)
/*
 * version 01v0d0 -> test test 
 * version 01v0d1 -> test test 
 * version 01v0d2 -> test
 * version 01v0d3 -> test
 * version 01v0d4 -> test
 * version 01v0d5 -> test
 * version 01v0d6 -> test
 * version 01v0d7 -> test
 * version 01v0d8 -> test
 * version 01v0d9 -> test
 * version 01v1d0 -> test
 * version 01v1d1 -> test
 * version 01v1d2 -> test
 *
 *
 *
 * */
#endif /* #ifndef __main_version__ */
/* **********************************************************************************************
 *
 * ==========================[ END define the configuration Labels ]===========================
 *
 * **********************************************************************************************/

/*
 *
 *  **********************************************************************************************
 *
 * ==========================[ BEGIN Main Macros/labels definition]===========================
 *
 * **********************************************************************************************/
/*
 * TODO : Macros/labels definition
*/

#define _FOSC 72
// ----- Timing definitions -------------------------------------------------
#define BLINK_TIME_ON		200
#define BLINK_TIME_OFF		600
#define BLINK_TIME_PAUSE    1250
#define BLINK_CICLE_PAUSE   5
//
/* Port numbers: 0=A, 1=B, 2=C, 3=D, 4=E, 5=F, 6=G, ...
 * configuracion para la placa: STM32-H103
 * La Configuracion para BluePill ->
*/
#define BLINK_PORT_NUMBER               chip_GET_PORT(PC_13)
#define BLINK_PIN_NUMBER                chip_GET_PIN(PC_13)
#define BLINK_ACTIVE_LOW                (1)


// ----- main() ---------------------------------------------------------------


/*
 *  **********************************************************************************************
 *
 * ==========================[ END Main Macros/labels Globals ]===========================
 *
 * ******************************************************************************************** **/
/*
 *
 *  **********************************************************************************************
 *
 * ===================================[ BEGIN macros APIs ]====================================
 *
 * ******************************************************************************************** */
/*
 * TODO :  sections macros APIs
 */

#if (BLINK_ACTIVE_LOW == 1)
#define LED_OFF() \
		chip_gpio_SetPinHigh(BLINK_PORT_NUMBER,BLINK_PIN_NUMBER)

#define LED_ON() \
		chip_gpio_SetPinLow(BLINK_PORT_NUMBER,BLINK_PIN_NUMBER)
#else
#define LED_ON() \
		chip_gpio_SetPinHigh(BLINK_PORT_NUMBER,BLINK_PIN_NUMBER)
#define LED_OFF() \
		chip_gpio_SetPinLow(BLINK_PORT_NUMBER,BLINK_PIN_NUMBER)
#endif

#define LED_INIT() chip_gpio_InitPin(BLINK_PORT_NUMBER,BLINK_PIN_NUMBER,gpio_OutGP_PP_50Mhz)


/* **********************************************************************************************
 *
 * ===================================[ END  macros APIs ]====================================
 *
 * ******************************************************************************************** */
/*
 * 
 * *********************************************************************************************
 *
 * ===============================[ BEGIN, main function ]================================
 *
 * ******************************************************************************************** */
#if (version_QueryNumber(__main_version__,01v0d0))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d0
*/
#define NOT_ARG				0xFE


/*-- depende del microcontrolador */
/**
 * \typedef uint_t;
 * \brief example de redefinicion de un tipo primitivo de dato */
typedef unsigned int uint_t ;
/**
 * \typedef pF_update;
 * \brief example de redifinicion puntero a funcion
 *  prototipo: unsigned int fx (unsigned int,unsigned int);
 */
typedef unsigned int (*pF_update) (void *);


/* Funciones que se actualizan con cada tick */
	pF_update vct_fsm_tick[]={};
/* Argumentos para las funciones que se actualizan con cada tick */
	uint_t vct_arg_tick[]={};
  
/* Funciones que se actualizan con el disaparo de un evento */
	pF_update vct_fsm_event[]={};
/* Argumentos para las  Funciones que se actualizan con el disaparo de un evento */
	uint_t vct_arg_event[]={};






/**
 *
 * ****************************************************************************//**
 * \fn void init_hardware()void;
 * \brief funcion para inicializar todo el hardware necesario.
 * \return nothing.
 * \note
 * \warning
 * \par example :
  <pre>
  	  init_hardware();
  </pre>
 *********************************************************************************/
void init_hardware(void);
/**
 *
 * ****************************************************************************//**
 * \fn int init_software(void)
 * \brief funcion para la inicializacion del software necesario (regiones de
 * memoria, stack, heap etc,).
 * \return nothing.
 * \note
 * \warning
 * \par example :
  <pre>
  	  init_software();
  </pre>
 *********************************************************************************/
void init_software(void);

/**
 *
 * ****************************************************************************//**
 * \fn void update_fsm_tick(void);
 * \brief funcion que se encarga de acturalizar todas las funciones con el
 * transcurso de cada tick (referencia temporal).
 * \return nothing
 * \note
 * \warning
 * \par example :
  <pre>
  while(1)
  {
  	  update_fsm_tick();
  }
  </pre>
 *********************************************************************************/
void update_fsm_tick(void);
/** 
 * \fn void update_fsm_event(void);
 * \brief funcion que se encarga de acturalizar todas las funciones con el
 * transcurso de cada tick (referencia temporal).
 * \return nothing.
 * \note
 * \warning
 * \par example :
  \code
  while(1)
  {
  	  update_fsm_event();
  }
  \endcode
 *********************************************************************************/
void update_fsm_event(void);


/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{
  chip_systick_Init();
  while (1)
  {
	  update_fsm_event();
	  update_fsm_tick();
	  chip_SLEEP();
  }
  exit(EXIT_SUCCESS);
}
/**
 * ******************************************************************************
 * \fn void init_hardware()void;
 * \brief funcion para inicializar todo el hardware necesario.
 * \return nothing.
 * \note
 * \warning
 * \par example :
  <pre>
  	  init_hardware();
  </pre>
 *********************************************************************************/
void init_hardware(void)
{

}

/*
#define NUM_FSM_EVENT		0x03
#define NUM_FSM_TICK		0x03*/

#define NUM_FSM_TICK	(sizeof(vct_fsm_tick)/sizeof(pF_update))
#define NUM_FSM_EVENT	(sizeof(vct_fsm_event)/sizeof(pF_update))
/**
 * ******************************************************************************
 * \fn int init_software(void)
 * \brief funcion para la inicializacion del software necesario (regiones de
 * memoria, stack, heap etc,).
 * \return nothing.
 * \note
 * \warning
 * \par example :
  <pre>
  	  init_software();
  </pre>
 *********************************************************************************/
void init_software(void)
{

}
/**
 * ******************************************************************************
 * \fn void update_fsm_tick(void);
 * \brief funcion que se encarga de acturalizar todas las funciones con el
 * transcurso de cada tick (referencia temporal).
 * \return nothing
 * \note
 * \warning
 * \par example :
  <pre>
  while(1)
  {
  	  update_fsm_tick();
  }
  </pre>
 *********************************************************************************/
void update_fsm_tick(void)
{
	static uint_t nFsm = 0;
	while( nFsm < NUM_FSM_TICK)
	{
		if(vct_fsm_tick[nFsm] != NULL)
		{
			if( vct_arg_tick[nFsm] != NOT_ARG )
			{
				(vct_fsm_tick[nFsm]) ((void*) vct_arg_tick[nFsm]);
			}
			else
			{
				(vct_fsm_tick[nFsm]) (NULL);
			}
		}
		if(++nFsm == NUM_FSM_TICK) nFsm = 0;
		return;
	}

}
/**
 * ******************************************************************************
 * \fn void update_fsm_event(void);
 * \brief funcion que se encarga de acturalizar todas las funciones con el
 * transcurso de cada tick (referencia temporal).
 * \return nothing.
 * \note
 * \warning
 * \par example :
  <pre>
  while(1)
  {
  	  update_fsm_event();
  }
  </pre>
 *********************************************************************************/
void update_fsm_event(void)
{
	static uint_t nFsm = 0;
	for( nFsm = 0; nFsm < NUM_FSM_EVENT; nFsm++)
	{
		if(vct_fsm_event[nFsm] != NULL)
		{
			if( vct_arg_event[nFsm] != NOT_ARG )
			{
				(vct_fsm_event[nFsm]) ((void*) vct_arg_event[nFsm]);
			}
			else
			{
				(vct_fsm_event[nFsm]) (NULL);
			}
		}
	}
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d0 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d1))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d1
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d1 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d2))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d2
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d3))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d3 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d3
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d3 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d4))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d4 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d4
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d4 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d5))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d5 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d5
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d5 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d6))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d6 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d6
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d6 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d7))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d7 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d7
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d7 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d8)
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d8 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d8
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d8 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v0d9))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v0d9 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d9
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v0d9 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v1d0))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v1d0 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v1d0
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v1d0 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v1d1))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v1d1 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v1d1
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v1d1 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif(version_QueryNumber(__main_version__,01v1d2))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ BEGIN main function          version 01v1d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v1d2
*/
/**-- header file include :*/

/*
 * 
 * *******************************************************************
 * @brief Funcion Principal
 * @return	La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo retorna un error
 *********************************************************************/
int main(void)
{

  exit(EXIT_SUCCESS);
}
/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ END   main function          version 01v1d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#else /* #if(version_QueryNumber(__main_version__,01v0d0))*/



#endif/* #if(version_QueryNumber(__main_version__,01v0d0))*/
/* **********************************************************************************************
 *
 * ===================================[ END, main function ]====================================
 *
 * ******************************************************************************************** */
