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
#include <FreeRTOSConfig.h>
#include <FreeRTOS.h>
#include <task.h>
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
/**-- header file include :*/
// ----- Timing definitions -------------------------------------------------
#define BLINK_TIME_ON   200 /**<@brief definimos el Tiempo de encendido para el LED */
#define BLINK_TIME_OFF  700 /**<@brief definimos el Tiempo de aágado para el LED */
#define BLINK_TIME_PAUSE    1000  
#define BLINK_CICLE_PAUSE   4
//
/* Port numbers: 0=A, 1=B, 2=C, 3=D, 4=E, 5=F, 6=G, ...
 * configuracion para la placa: STM32-H103
 * La Configuracion para BluePill ->
*/
#define BLINK_PORT_NUMBER   chip_GET_PORT(PC_13)  /**<@brief definimos el Puerto al esta conectado el LED */
#define BLINK_PIN_NUMBER    chip_GET_PIN(PC_13)   /**<@brief definimos el Pin al esta conectado el LED */
#define BLINK_ACTIVE_LOW    (1) /**<@brief Habilitamos '1'/Deshabilitamos '0' el pull up del LED (led se enciende con valores bajos) */

#define STACKsIZE_vTaskblink    (configMINIMAL_STACK_SIZE) /**<@brief definimos el tamaño de lal pila de memoria para la tarea del asociada al manejo del LED */






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
#define iniDelayMs(acuMs);	\
{\
	acuMs = xTaskGetTickCount();\
}

#define DelayMs(acuMs,MiliSecond) \
{\
  acuMs = xTaskGetTickCount();\
  vTaskDelayUntil(&acuMs,(portTickType) (MiliSecond/portTICK_RATE_MS));\
}


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
    

/**
* 
* \def LED(Action);
* \brief Macro funcion para realizar diferentes acciones sobre el led predefinido. 
* \param Action : Accion que se desea ejecutar sobre el LED, las Disponibles son
*   \li INIT : inicializa el Hardware para configurar el pin del asociado al led.
*   \li ON : Enciende el LED.
*   \li OFF : Apaga el LED
* \return nothinig
* \version 01v00d00.
* \note nota.
* \warning mensaje de "warning".
* \date Viernes 10 de Noviembre, 2017.
* \author <b> JEL </b> - <i> Jesus Emanuel Luccioni </i>.
* \par meil
* <PRE> + <b><i> piero.jel@gmail.com </i></b></PRE>
* \par example :
<PRE>
    LED(INIT);
    // .. more code
    LED(ON);
    delay_ms(700);
    LED(OFF);
</PRE> 
*********************************************************************************/ 
#define LED(Action) LED_##Action()
    
/**
 *  
 * \fn int main(void);
 * @brief Funcion Principal
 * @return  La funcion Principal para esta aplicacion nunca debe
 * retornar un valor. En caso de Hacerlo debera retorna un error.
 *********************************************************************/
int main(void)
{
    xTaskCreate( vTaskblink,/* Puntero a la Funcion*/\
                 (signed char*) "LedBlink_PC.13",/* Nombre p/Debug, "Marca de Agua" to 16-Char*/\
                 STACKsIZE_vTaskblink, /* Longitud de la Pila en Word*/\
                 NULL,/* (void*) &led,*/ /* Pasamos la Referencia, argumento de la tarea */\
                 (tskIDLE_PRIORITY+1), /*-- Nivel de Prioridad para la Tarea*/\
                 NULL /*&hdlLed1*/ /*-- Identificador de la Tarea Creada*/\
               );       
    vTaskStartScheduler();
    while(1);/*-- esta de mas, solo por seguridad en caso de que alguna tarea retorne por error */
    exit(EXIT_FAILURE);
}



/**
 * 
 * ********************************************************************
 * \fn void vTaskblink(void *pvParameters)
 * @brief Prototipo de tarea que maneja el LED blinky.
 * @param pvParameters : puntero void, argumento de la tarea.
 * @return  nothing
 * \warning Esta tarea nunca debe retornar, antes de hacerlo debe 
 * destruirse como tarea.
 *********************************************************************/
void vTaskblink(void *pvParameters)
{
    static uint32_t acu = 0;
    portTickType AcuTime;
    iniDelayMs(AcuTime);
    LED(INIT);
    LED(ON);
    while (1)
    {
        LED(ON);
        DelayMs(AcuTime,BLINK_TIME_ON);
        LED(OFF);
        DelayMs(AcuTime,BLINK_TIME_OFF);
        if(++acu == BLINK_CICLE_PAUSE)
        {
            acu = 0;
            DelayMs(AcuTime,BLINK_TIME_PAUSE);
        }
    }    
    vTaskDelete(NULL);
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
#elif(version_QueryNumber(__main_version__,01v0d8))
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


/** * 
 * \fn
 * \brief funtion hook, enganche para al Tick 
 * \return  
 */
void vApplicationTickHook( void )
{

}
/* **********************************************************************************************
 *
 * ===================================[ END, main function ]====================================
 *
 * ******************************************************************************************** */
