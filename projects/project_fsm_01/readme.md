# Ejemplo de Implementacion de FreeRTOS

## Macros para configuracion de tiempos y pin 
~~~ c   
// ----- Timing definitions -------------------------------------------------
#define BLINK_TIME_ON   200 /**<@brief definimos el Tiempo de encendido para el LED */
#define BLINK_TIME_OFF  700 /**<@brief definimos el Tiempo de aágado para el LED */
#define BLINK_TIME_PAUSE    1000  
#define BLINK_CICLE_PAUSE   4
~~~

## Macros para Seleccion y configuracion del Pin 
~~~ c
//
/* configuracion para la placa: STM32-H103
 * La Configuracion para BluePill ->
*/
#define BLINK_PORT_NUMBER   chip_GET_PORT(PC_13)  /**<@brief definimos el Puerto para el LED */
#define BLINK_PIN_NUMBER    chip_GET_PIN(PC_13)   /**<@brief definimos el Pin del LED */
#define BLINK_ACTIVE_LOW    (1) /**<@brief Habilitamos '1'/Deshabilitamos '0' el pull up del LED*/
~~~
Mediantes estas seleccionamos el **PIN** y configuramos el tipo de referencia, que depende de la configuracion del hardware, para **BluePill** esta debe ser **1**, Pull-Up en el pin **PC.13**.

## Configuracion del Stack para la Tarea vTaskblink
~~~ c
#define STACKsIZE_vTaskblink    (configMINIMAL_STACK_SIZE) /**<@brief definimos el tamaño del STACK de memoria para la tarea que maneja del LED */
~~~
Establecemos el stack en el valor minimo permitido


## Maccros Funciones para manipulacion de delays
~~~ c
#define iniDelayMs(acuMs) ...

#define DelayMs(acuMs,MiliSecond) ...
~~~
Inicializacion de una variable del tipo **portTickType**, y delays en mili-segundos.


## Macros Funciones para manejo del LED
~~~ c
#define LED_OFF()   /* Apaga el LED */
#define LED_ON()    /* Enciende el LED */
#define LED_INIT()  /* Inicializacion del LED */
~~~

## Funcion Principal 
En esta creamos la tarea, inicializamos el **scheduler** y en caso de falla creamos un loop inifinito.


## Definicion del Prototipo de tarea para el manejo del Led
~~~ c 
  void vTaskblink(void *pvParameters){}
~~~ 
Este funcion es e Prototipo el cual realizara la tarea de manejar el LED. En caso de una salida inesperada el bucle infinito la misma notifica al scheduler que debe ser borrada de su lista **vTaskDelete(NULL);**.