#define __drv_switch_c__ /**<@brief : defined the file name */
/*
* ******************************[source File]*************************************//**
* \addtogroup drv_switch drv_switch.c module 
@{ 
* \copyright
* 2017, Luccioni Jesús Emanuel. \n
* All rights reserved.\n
* This file is part of port module.\n
* Redistribution is not allowed on binary and source forms, with or without
* modification.\n
* Use is permitted with prior authorization by the copyright holder.\n
* \file drv_switch.c
* \brief bloque de comenteario para documentacion para describir este archivo de
* cabecera o header file.
* \version v01.01
* \date   date
* \note none
* \author JEL, Jesus Emanuel Luccioni
* \li piero.jel@gmail.com
@}
* doxygen end group definition
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
#include <drv_switch.h>
/*
* 
* *********************************************************************************************
*
* =================================[ End include header file ]================================
*
* ******************************************************************************************** 
* 
*/
#if (drv_switch_projectEnable == 1)
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
* \typedef e_localexample_t;
* \brief typedef and enumeration 
* \ref e_HA
* \ref e_HB
*/
typedef enum
{
    e_HA = 0, /**<@brief Media palabra, solo el Nibble alto*/
    e_HB,   /**<@brief Palabra Completa, Primero el Nibble alto */
} e_localexample_t;
/**
* \typedef void_pFxlocal_void_t;
* \brief definicion de puntero a funcion del tipo 'funType_DataInst'*/
typedef void (*void_pFxlocal_void_t) (void); 


/**
 * \typedef local_gpio_vT;
 * \brief Etiqueta para la redefinicion del tipo de dato que usaremos
 * para almacenar los datos de puerto y pin de los GPIO que usara el
 * modulo. */
#if(drv_switch_LOCAL_GPIO_MEM_PRG == 1)
#define local_gpio_vT static const uint8_t
#else /* #if(drv_switch_LOCAL_GPIO_MEM_PRG == 1) */
#define local_gpio_vT static uint8_t
#endif /* #if(drv_switch_LOCAL_GPIO_MEM_PRG == 1) */





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
/**
* \def EXAMPLE_LOCAL_MACRO
* \brief brief */
#define EXAMPLE_LOCAL_MACRO     2000 


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
#if (drv_switch_USE_LocalData == 1)
/*
* TODO : Local data declaration
*/

#if (version_QueryNumber(__drv_switch_version__,01v0d0)\
		|| version_QueryNumber(__drv_switch_version__,01v0d1))
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
/**
 * \var vct_pin;
 * \brief vector local que contiene los pines
 * \note
 * \warning
 */
#if(drv_switch_NUMBER_PINS == 1)

//local_gpio_vT port,pin;

#else /* #if(drv_blink_NUMBER_PINS == 1) */

local_gpio_vT vct_port[] = {
		drv_switch_PORT_0
#if(drv_switch_NUMBER_PINS > 1)
		,drv_switch_PORT_1
#endif
#if(drv_switch_NUMBER_PINS > 2)
		,drv_switch_PORT_2
#endif
#if(drv_switch_NUMBER_PINS > 3)
		,drv_switch_PORT_3
#endif
#if(drv_switch_NUMBER_PINS > 4)
		,drv_switch_PORT_4
#endif
#if(drv_switch_NUMBER_PINS > 5)
		,drv_switch_PORT_5
#endif
#if(drv_switch_NUMBER_PINS > 6)
		,drv_switch_PORT_6
#endif
#if(drv_switch_NUMBER_PINS > 7)
		,drv_switch_PORT_7
#endif
};

local_gpio_vT vct_pin[] = {
		drv_switch_PIN_0
#if(drv_switch_NUMBER_PINS > 1)
		,drv_switch_PIN_1
#endif
#if(drv_switch_NUMBER_PINS > 2)
		,drv_switch_PIN_2
#endif
#if(drv_switch_NUMBER_PINS > 3)
		,drv_switch_PIN_3
#endif
#if(drv_switch_NUMBER_PINS > 4)
		,drv_switch_PIN_4
#endif
#if(drv_switch_NUMBER_PINS > 5)
		,drv_switch_PIN_5
#endif
#if(drv_switch_NUMBER_PINS > 6)
		,drv_switch_PIN_6
#endif
#if(drv_switch_NUMBER_PINS > 7)
		,drv_switch_PIN_7
#endif
};

#endif/* #if(drv_blink_NUMBER_PINS != 1) */



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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
* \var exampleLocalData;
* \brief local data declaration 
* \note 
* \warning
*/
static unsigned int exampleLocalData; 

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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_LocalData == 1) */
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
#if (drv_switch_USE_LocalFunctions == 1)
/*
* TODO : Local functions declaration
* 
*/

#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_LocalFunctions == 1) */
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
#if (drv_switch_USE_LocalMacroApis == 1) 
#if (version_QueryNumber(__drv_switch_version__,01v0d0) \
		|| version_QueryNumber(__drv_switch_version__,01v0d1))
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
/**
 *
* ****************************************************************************//**
* \def GET_SW_STATUS(Pin)
* \brief brief Macro API local para obtener el estado del pin de un puerto.*
* \param P_hdl	: Handler que contiene el contexto/handler del SW.
* \return
	+ 1, Pin con exitacion esterior "Habilitado"
	+ 0, Pin sin exitacion esterior "Deshabilitado"
* \note
* \warning Debemos considerar que es un macro.
* \par example :
<pre>
	drv_switch_hdl_sT sw_up;
	//.. more code
	GET_SW_STATUS(sw_up);
</pre>
*********************************************************************************/
/**
 *
* ****************************************************************************//**
* \def GET_SW_nSTATUS(Pin)
* \brief brief Macro API local para obtener el estado negado del pin de un puerto.*
* \param P_hdl	: Handler que contiene el contexto/handler del SW.
* \return
	+ 0, Pin con exitacion esterior "Habilitado"
	+ 1, Pin sin exitacion esterior "Deshabilitado"
* \note
* \warning Debemos considerar que es un macro.
* \par example :
<pre>
	drv_switch_hdl_sT sw_up;
	//.. more code
	GET_SW_nSTATUS(sw_up);
</pre>
*********************************************************************************/
/**
 *
* ****************************************************************************//**
* \def switch_INIT(P_hdl)
* \brief brief Macro API local para inicializar un pin relacionado al SW.
* \param P_hdl	: Handler que contiene el contexto/handler del SW.
* \return
	+ 0, Pin con exitacion esterior "Habilitado"
	+ 1, Pin sin exitacion esterior "Deshabilitado"
* \note
* \warning Debemos considerar que es un macro.
* \par example :
<pre>
	drv_switch_hdl_sT sw_up;
	//.. more code
	GET_SW_nSTATUS(sw_up);
</pre>
*********************************************************************************/


#if(drv_switch_NUMBER_PINS == 1)

#if(drv_switch_PULL_UP == 1 )
#define GET_SW_STATUS(P_hdl) \
	!drv_switch_GET_STATUS(drv_switch_PORT_0,drv_switch_PIN_0)

#define GET_SW_nSTATUS(P_hdl) \
	drv_switch_GET_STATUS(drv_switch_PORT_0,drv_switch_PIN_0)
#else /* #if(drv_switch_PULL_UP == 1 ) */
#define GET_SW_nSTATUS(Pin)	\
	!drv_switch_GET_STATUS(drv_switch_PORT_0,drv_switch_PIN_0)

#define GET_SW_STATUS(P_hdl) \
	drv_switch_GET_STATUS(drv_switch_PORT_0,drv_switch_PIN_0)
#endif /* #if(drv_switch_PULL_UP == 1 ) */


#define switch_INIT(P_hdl) \
		drv_switch_PIN_INIT(drv_switch_PORT_0,drv_switch_PIN_0)

#define switch_ASSERT_pin(P_hdl)

#else /* #if(drv_switch_NUMBER_PINS == 1) */

#if(drv_switch_PULL_UP == 1 )
#define GET_SW_STATUS(P_hdl) \
	!drv_switch_GET_STATUS(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])

#define GET_SW_nSTATUS(P_hdl) \
	drv_switch_GET_STATUS(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])
#else
#define GET_SW_nSTATUS(Pin)	\
	!drv_switch_GET_STATUS(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])

#define GET_SW_STATUS(P_hdl) \
	drv_switch_GET_STATUS(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])
#endif




/*-- macros sin dependencias de Pull Up y de cantiadad de Pines, solo de versiones */
#define switch_INIT(P_hdl) \
		drv_switch_PIN_INIT(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])

#define switch_ASSERT_pin(P_hdl) \
		if(P_hdl->pin >= drv_switch_NUMBER_PINS) return;


#endif/* #if(drv_switch_NUMBER_PINS == 1) */



#define switch_ASSERT_callback(P_hdl) (pHdl->pushFx != NULL)

/*-- macros para manejo de tiempo*/
#define GET_TICKS(P_hdl) \
		P_hdl->acu_ms = drv_switch_GET_TICKS()

#define TIME_OUT(P_hdl,litTIME)\
	drv_switch_TIME_OUT(&(P_hdl->acu_ms),litTIME)


/*-- macros para el manejo de status de la FSM */
#define GET_STATUS(P_hdl) P_hdl->status
#define SET_STATUS(P_hdl,Status) P_hdl->status = Status



#if (version_QueryNumber(__drv_switch_version__,01v0d0))
/*-- macros relacionadas la callback */
#define CALLBACK_SET(P_hdl,Callback,Arg) \
{\
	P_hdl->pushFx = Callback;\
}

#define CALLBACK_RUN(P_hdl) \
{\
	(P_hdl->pushFx) ();\
}

#elif(version_QueryNumber(__drv_switch_version__,01v0d1))
/*-- macros relacionadas la callback */
#define CALLBACK_SET(P_hdl,Callback,Arg) \
{\
	P_hdl->pushFx = Callback, P_hdl->arg = Arg;\
}

#define CALLBACK_RUN(P_hdl) \
{\
	(P_hdl->pushFx) (P_hdl->arg);\
}
#else /* #if (version_QueryNumber(__drv_switch_version__,01v0d1)) */

#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d1)) */

/**
 *
* ****************************************************************************//**
* \def switch_ASSERT(Type,pHDL, ...)
* \brief brief Macro API local para obtener la confirmacion de parametros pasado
* como argumentos o que forman parte del handler de la FSM.*
* \param Type	: Etiqueta que representa el tipo de assert "confirmacion".
* 	+ pin
* 	+ callback
* \param P_hdl	: Handler que contiene el contexto/handler del SW.
* \return
	+ 0, Pin con exitacion esterior "Habilitado"
	+ 1, Pin sin exitacion esterior "Deshabilitado"
* \note
* \warning Debemos considerar que es un macro.
* \par example :
<pre>
	drv_switch_hdl_sT sw_up;
	//.. more code
	GET_SW_nSTATUS(sw_up);
</pre>
*********************************************************************************/


/*-- listamos los tipos y habilitamos/deshabilitamos los assert "confirmacion"*/
#define switch_ASSERT(Type,pHDL,...) \
		switch_ASSERT_##Type(pHDL __VA_ARGS__)




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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_LocalMacroApis == 1) */
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
#if (drv_switch_USE_ISR == 1)
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
* \note
* \warning
*********************************************************************************/
void ISR_function(void)
{
    
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if (drv_switch_USE_ISR == 1) */
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
#if (drv_switch_USE_LocalFunctions == 1)
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_LocalFunctions == 1) */
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
#if (drv_switch_USE_GlobalData == 1)
/*
* TODO : Local data declaration
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0))
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
/**
* \var globalExample ;
* \brief variable global example, brief of data 
* \note
* \warning
*/
unsigned int drv_switch_globalExample;

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
#elif (version_QueryNumber(__drv_switch_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */
#endif /* #if(drv_switch_USE_GlobalData == 1) */
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
#if (drv_switch_USE_GlobalFunctions == 1)
/* 
* TODO : Global APIs Section
*/
#if (version_QueryNumber(__drv_switch_version__,01v0d0) || \
    version_QueryNumber(__drv_switch_version__,01v0d1) )
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
		/* ,pin , pFuncion , *arg */)
{
	switch_ASSERT(pin,pHdl);
	SET_STATUS(pHdl,0);
	switch_INIT(pHdl);
}
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
void drv_switch_update(drv_switch_hdl_sT *pHdl)
{
	switch_ASSERT(pin,pHdl);

	switch(GET_STATUS(pHdl))
	{
	default:
	case 0:
		/*-- escaneamos para detectar un flanco ascendente */
		if(GET_SW_STATUS(pHdl))
		{
			SET_STATUS(pHdl,1);
			GET_TICKS(pHdl);
		}
		return ;
	case 1:
		/*-- esperamos hasta agotar el debounce time  */
		if(TIME_OUT(pHdl,drv_switch_DEBOUNCE))
		{
			SET_STATUS(pHdl,2);
		}
		return;
	case 2:
		/*-- consultamos si se mantiene el estado del sw */
		if(GET_SW_STATUS(pHdl))
		{
			SET_STATUS(pHdl,3);
			return;
		}
		SET_STATUS(pHdl,0);
		return ;
	case 3:
		/*-- esperamos hasta que se suelte el pulsador */
		if(GET_SW_nSTATUS(pHdl))
		{
			SET_STATUS(pHdl,4);
			GET_TICKS(pHdl);
		}
		return ;
	case 4:
		/*-- esperamos hasta agotar el debounce time  */
		if(TIME_OUT(pHdl,drv_switch_DEBOUNCE))
		{
			SET_STATUS(pHdl,5);
		}
		return;
	case 5:
		/*-- consultamos si se mantiene el estado del sw */
		if(GET_SW_nSTATUS(pHdl))
		{
			/*-- ejecutamos el callback */
			if(switch_ASSERT(callback,pHdl)) CALLBACK_RUN(pHdl);//(pHdl->pushFx) (pHdl->arg);
			/*-- reiniciamos la FSM*/
			SET_STATUS(pHdl,0);
			return;
		}
		/*-- no se pudo validar el estado */
		SET_STATUS(pHdl,3);
		return ;
	}
}

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
		drv_switch_push_pfT push_fun)
{
	CALLBACK_SET(pHdl,push_fun,arg_fun);
	SET_STATUS(pHdl,0);
}
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
		drv_switch_push_pfT push_fun,void * arg_fun)
{
	CALLBACK_SET(pHdl,push_fun,arg_fun);
	SET_STATUS(pHdl,0);
}
#endif /* #elif (version_QueryNumber(__drv_switch_version__,01v0d0)) */
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
#elif (version_QueryNumber(__drv_switch_version__,01v0d2))
/**
* 
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ Begin Global APIs Definition version 01v0d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
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
		/* ,pin , pFuncion , *arg */)
{
	switch_ASSERT(pin,pHdl);
	SET_STATUS(pHdl,0);
	switch_INIT(pHdl);
}
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
void drv_switch_update(drv_switch_hdl_sT *pHdl)
{
	switch_ASSERT(pin,pHdl);

	switch(GET_STATUS(pHdl))
	{
	default:
	case 0:
		/*-- escaneamos para detectar un flanco ascendente */
		if(GET_SW_STATUS(pHdl))
		{
			SET_STATUS(pHdl,1);
			GET_TICKS(pHdl);
		}
		return ;
	case 1:
		/*-- esperamos hasta agotar el debounce time  */
		if(TIME_OUT(pHdl,drv_switch_DEBOUNCE))
		{
			SET_STATUS(pHdl,2);
		}
		return;
	case 2:
		/*-- consultamos si se mantiene el estado del sw */
		if(GET_SW_STATUS(pHdl))
		{
			SET_STATUS(pHdl,3);
			return;
		}
		SET_STATUS(pHdl,0);
		return ;
	case 3:
		/*-- esperamos hasta que se suelte el pulsador */
		if(GET_SW_nSTATUS(pHdl))
		{
			SET_STATUS(pHdl,4);
			GET_TICKS(pHdl);
		}
		return ;
	case 4:
		/*-- esperamos hasta agotar el debounce time  */
		if(TIME_OUT(pHdl,drv_switch_DEBOUNCE))
		{
			SET_STATUS(pHdl,5);
		}
		return;
	case 5:
		/*-- consultamos si se mantiene el estado del sw */
		if(GET_SW_nSTATUS(pHdl))
		{
			/*-- ejecutamos el callback */
			if(switch_ASSERT(callback,pHdl)) CALLBACK_RUN(pHdl);//(pHdl->pushFx) (pHdl->arg);
			/*-- reiniciamos la FSM*/
			SET_STATUS(pHdl,0);
			return;
		}
		/*-- no se pudo validar el estado */
		SET_STATUS(pHdl,3);
		return ;
	}
}
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
		drv_switch_push_pfT push_fun,void * arg_fun)
{
	CALLBACK_SET(pHdl,push_fun,arg_fun);
	SET_STATUS(pHdl,0);
}


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐           
│                                                                                         │  
│                                                                                         │  
│ ──────────────────────[ End   Global APIs Definition version 01v0d2 ]────────────────── │
│                                                                                         │
│                                                                                         │             
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_switch_version__,01v0d3))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global APIs Definition version 01v0d3 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d3
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d3 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_switch_version__,01v0d4))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global APIs Definition version 01v0d4 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d4
*/


/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d4 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_switch_version__,01v0d5))
/**
*
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ Begin Global APIs Definition version 01v0d5 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
TODO: version 01v0d5
*/
/*
*
* ********************************************************************************
* \fn int drv_switch_test_02(unsigned int a,const char* name)
* \brief descripcion breve
* \param a : varaible a.
* \param name :  puntero al buffer del string.
* \return valor del tipo int.
* \par example :
<pre>
a = drv_switch_test_02(1,"hola");
</pre>
*********************************************************************************/
int drv_switch_test_02(unsigned int a,const char* name)
{

}

/**
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d5 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#endif /* #if (version_QueryNumber(__drv_switch_version__,01v0d0)) */

#endif /* #if(drv_switch_USE_GlobalFunctions == 1) */
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
#endif /* #if(drv_switch_projectEnable == 1) */
