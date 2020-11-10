#define __drv_blink_c__ /**<@brief : defined the file name */
/*
 * ******************************[source File]*************************************//**
 * \addtogroup drv_blink drv_blink.c module
 * @{
 * @copyright
 * 2017, Luccioni Jesús Emanuel. \n
 * All rights reserved.\n
 * This file is part of port module.\n
 * Redistribution is not allowed on binary and source forms, with or without
 * modification.\n
 * Use is permitted with prior authorization by the copyright holder.\n
 * \file drv_blink.c
 * \brief bloque de comenteario para documentacion para describir este archivo de
 * cabecera o header file.
 * \version v01.01
 * \date   25 feb. 2020
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
//#include <chip.h>




/* -- for end, header file this module */
#include <drv_blink.h>
/*
 *
 * *********************************************************************************************
 *
 * =================================[ End include header file ]================================
 *
 * ********************************************************************************************
 *
 */
#if (drv_blink_projectEnable == 1)
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
#if(drv_blink_LOCAL_GPIO_MEM_PRG == 1)
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
#define MAX_NUM_BLINK			(drv_blink_MAX_NBLINK<<1)
#define MIN_NUM_BLINK			(drv_blink_MIN_NBLINK<<1)


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
#if (drv_blink_USE_LocalData == 1)
/*
 * TODO : Local data declaration
*/

#if (version_QueryNumber(__drv_blink_version__,01v0d0) \
		|| version_QueryNumber(__drv_blink_version__,01v0d1))
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
#if (drv_blink_NUMBER_PINS == 1)
/* XXX debemos usar macros en ves de constantes */
//local_gpio_vT port =  drv_blink_PORT_0;
//local_gpio_vT pin = drv_blink_PIN_0;
#else /* #if (drv_blink_NUMBER_PINS == 1) */
local_gpio_vT vct_port[] = {
		 drv_blink_PORT_0
#if(drv_blink_NUMBER_PINS > 1)
		,drv_blink_PORT_1
#endif
#if(drv_blink_NUMBER_PINS > 2)
		,drv_blink_PORT_2
#endif
#if(drv_blink_NUMBER_PINS > 3)
		,drv_blink_PORT_3
#endif
#if(drv_blink_NUMBER_PINS > 4)
		,drv_blink_PORT_4
#endif
#if(drv_blink_NUMBER_PINS > 5)
		,drv_blink_PORT_5
#endif
#if(drv_blink_NUMBER_PINS > 6)
		,drv_blink_PORT_6
#endif
#if(drv_blink_NUMBER_PINS > 7)
		,drv_blink_PORT_7
#endif
};
local_gpio_vT vct_pin[] = {
		 drv_blink_PIN_0
#if(drv_blink_NUMBER_PINS > 1)
		,drv_blink_PIN_1
#endif
#if(drv_blink_NUMBER_PINS > 2)
		,drv_blink_PIN_2
#endif
#if(drv_blink_NUMBER_PINS > 3)
		,drv_blink_PIN_3
#endif
#if(drv_blink_NUMBER_PINS > 4)
		,drv_blink_PIN_4
#endif
#if(drv_blink_NUMBER_PINS > 5)
		,drv_blink_PIN_5
#endif
#if(drv_blink_NUMBER_PINS > 6)
		,drv_blink_PIN_6
#endif
#if(drv_blink_NUMBER_PINS > 7)
		,drv_blink_PIN_7
#endif
};

#endif  /* #if (drv_blink_NUMBER_PINS == 1) */

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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_LocalData == 1) */
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
#if (drv_blink_USE_LocalFunctions == 1)
/*
 * TODO : Local functions declaration
 *
 */

#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_LocalFunctions == 1) */
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
 #if (drv_blink_USE_LocalMacroApis == 1)
 #if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
 * \def drv_blink_BITsETfILE(file,posBit)
 * \brief brief local macro api.
 * \param file	: file, register
 * \param posBit : bit position
 * \return nothig
 * \note
 * \warning
 * \par example :
 <pre>
  drv_blink_BITsETfILE(REG_A,7);
 </pre>
 *********************************************************************************/
//#define drv_blink_BITsETfILE(file,posBit)	(file |=(0x01UL<<posBit))

#if(drv_blink_NUMBER_PINS == 1)
#if(drv_blink_PULL_UP == 1)
#define blink_HIGH(P_hdl) \
	drv_blink_PIN_HIGH(drv_blink_PORT_0,drv_blink_PIN_0)
#else /* #if(drv_blink_PULL_UP == 1) */
#define blink_HIGH(P_hdl) \
	drv_blink_PIN_LOW(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])
#endif /* #if(drv_blink_PULL_UP == 1) */

#define blink_TOGGLE(P_hdl) \
		drv_blink_PIN_TOGGLE(drv_blink_PORT_0,drv_blink_PIN_0)

#define blink_INIT(P_hdl) \
		drv_blink_PIN_INIT(drv_blink_PORT_0,drv_blink_PIN_0)

#define blink_ASSERT_pin(P_hdl)


#else /* #if(drv_blink_NUMBER_PINS == 1) */
#if(drv_blink_PULL_UP == 1)
#define blink_HIGH(P_hdl) \
	drv_blink_PIN_HIGH(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])
#else /* #if(drv_blink_PULL_UP == 1) */
#define blink_HIGH(P_hdl) \
	drv_blink_PIN_LOW(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])
#endif /* #if(drv_blink_PULL_UP == 1) */

#define blink_TOGGLE(P_hdl) \
		drv_blink_PIN_TOGGLE(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])

#define blink_INIT(P_hdl) \
		drv_blink_PIN_INIT(vct_port[P_hdl->pin],vct_pin[P_hdl->pin])

#define blink_ASSERT_pin(P_hdl) \
		if(P_hdl->pin >= drv_blink_NUMBER_PINS) return;

#endif /* #if(drv_blink_NUMBER_PINS == 1) */



#if (drv_blink_MIN_NBLINK != 0)
#define blink_ASSERT_blink(BLK) \
	if( (BLK > drv_blink_MAX_NBLINK) || \
				(BLK < drv_blink_MIN_NBLINK) ) return;
#else
#define blink_ASSERT_blink(BLK) \
	if( BLK > drv_blink_MAX_NBLINK ) return;
#endif


#define blink_ASSERT(Type,pHDL,...) \
		blink_ASSERT_##Type(pHDL __VA_ARGS__)




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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_LocalMacroApis == 1) */
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
#if (drv_blink_USE_ISR == 1)
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if (drv_blink_USE_ISR == 1) */
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
#if (drv_blink_USE_LocalFunctions == 1)
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_LocalFunctions == 1) */
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
#if (drv_blink_USE_GlobalData == 1)
/*
 * TODO : Local data declaration
*/
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
unsigned int drv_blink_globalExample;

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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */
#endif /* #if(drv_blink_USE_GlobalData == 1) */
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
#if (drv_blink_USE_GlobalFunctions == 1)
/*
 * TODO : Global APIs Section
*/
#if (version_QueryNumber(__drv_blink_version__,01v0d0))
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
*
* ******************************************************************************
* \fn void drv_blink_init(drv_blink_hdl_sT *pHdl);
* \brief funcion para inicializar la FSM u¿y el hardware que acompaña.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_init(drv_blink_hdl_sT *pHdl)
{
	blink_ASSERT(pin,pHdl);
	pHdl->status = 0;
	blink_INIT(pHdl);
}
/*
*
* ******************************************************************************
* \fn void drv_blink_update(drv_blink_hdl_sT *pHdl);
* \brief Funcion para actualizar la FSM.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_update(drv_blink_hdl_sT *pHdl)
{
	blink_ASSERT(pin,pHdl);
	switch(pHdl->status)
	{
	default:
	case 0:
		/* apagamos el pin */
//	#if(drv_blink_PULL_UP == 1)
//		drv_blink_PIN_HIGH(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
//	#else
//		drv_blink_PIN_LOW(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
//	#endif
		blink_HIGH(pHdl);
		if(pHdl->blink == 0) return;
		pHdl->i = (pHdl->blink);
		pHdl->status = 1;
		chip_systick_InitAcuMs(&(pHdl->acu_ms));
		return;
	case 1:
		while(pHdl->i)
		{
			if(chip_systick_TimeOut(&(pHdl->acu_ms),drv_blink_TIME_ON))
			{
//				drv_blink_PIN_TOGGLE(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
				blink_TOGGLE(pHdl);
				pHdl->i -= 1;
			}
			return;
		}
		pHdl->status = 2;
		return;
	case 2:
		if(chip_systick_TimeOut(&(pHdl->acu_ms),drv_blink_TIME_OFF))
			pHdl->status = 0;
		return;
	}
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink)
{
	blink_ASSERT(blink,nblink);
	pHdl->blink = nblink << 1;
	pHdl->status = 0;
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_UpBlink(drv_blink_hdl_sT *pHdl)
{
	if( pHdl->blink < MAX_NUM_BLINK )
	{
		pHdl->blink += 2;
		pHdl->status = 0;
	}
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_DownBlink(drv_blink_hdl_sT *pHdl)
{
	if( pHdl->blink > MIN_NUM_BLINK )
	{
		pHdl->blink -= 2;
		pHdl->status = 0;
	}
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
uint8_t drv_blink_GetBlink(drv_blink_hdl_sT *pHdl)
{
	return ((pHdl->blink) >> 1);
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d1))
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
* ******************************************************************************
* \fn void drv_blink_init(drv_blink_hdl_sT *pHdl);
* \brief funcion para inicializar la FSM u¿y el hardware que acompaña.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_init(drv_blink_hdl_sT *pHdl)
{
	if(pHdl->pin >= drv_blink_NUMBER_PINS) return;
	pHdl->status = 0;
	drv_blink_PIN_INIT(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
}
/*
*
* ******************************************************************************
* \fn void drv_blink_update(drv_blink_hdl_sT *pHdl);
* \brief Funcion para actualizar la FSM.
* \param pHdl : puntero al handler que contiene el contexto de la FSM.
* \return nothing
* \note
* \warning
* \par example :
 <pre>
int main(void)
{
	drv_blink_hdl_sT hdlBlk_01;
	drv_blink_init(&hdlBlk_01);
	while(1)
	{
		drv_blink_update(&hdlBlk_01);
		// ... more code here
	}
}
 </pre>
*********************************************************************************/
void drv_blink_update(drv_blink_hdl_sT *pHdl)
{
	if(pHdl->pin >= drv_blink_NUMBER_PINS) return;
	switch(pHdl->status)
	{
	default:
	case 0:
		/* apagamos el pin */
	#if(drv_blink_PULL_UP == 1)
		drv_blink_PIN_HIGH(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
	#else
		drv_blink_PIN_LOW(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
	#endif
		if(pHdl->blink == 0) return;
		pHdl->i = (pHdl->blink);
		pHdl->status = 1;
		chip_systick_InitAcuMs(&(pHdl->acu_ms));
		return;
	case 1:
		while(pHdl->i)
		{
			if(chip_systick_TimeOut(&(pHdl->acu_ms),drv_blink_TIME_ON))
			{
				drv_blink_PIN_TOGGLE(vct_port[pHdl->pin],vct_pin[pHdl->pin]);
				pHdl->i -= 1;
			}
			return;
		}
		pHdl->status = 2;
		return;
	case 2:
		if(chip_systick_TimeOut(&(pHdl->acu_ms),drv_blink_TIME_OFF))
			pHdl->status = 0;
		return;
	}

}

/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_SetBlink(drv_blink_hdl_sT *pHdl,uint8_t nblink)
{
#if (drv_blink_MIN_NBLINK != 0)
	if( (nblink > drv_blink_MAX_NBLINK) || \
				(nblink < drv_blink_MIN_NBLINK) ) return;
#else
	if( nblink > drv_blink_MAX_NBLINK ) return;
#endif
	pHdl->blink = nblink << 1;
	pHdl->status = 0;
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_UpBlink(drv_blink_hdl_sT *pHdl)
{
	if( pHdl->blink < MAX_NUM_BLINK )
	{
		pHdl->blink += 2;
		pHdl->status = 0;
	}
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
void drv_blink_DownBlink(drv_blink_hdl_sT *pHdl)
{
	if( pHdl->blink > MIN_NUM_BLINK )
	{
		pHdl->blink -= 2;
		pHdl->status = 0;
	}
}
/**
 *
 * ******************************************************************************
 * \fn int drv_blink_test_01(unsigned int a,const char* name)
 * \brief descripcion breve
 * \param a : varaible a.
 * \param name :  puntero al buffer del string.
 * \return valor del tipo int.
 * \note
 * \warning
 * \par example :
  <pre>
  a = drv_blink_test_01(1,"hola");
  </pre>
 *********************************************************************************/
uint8_t drv_blink_GetBlink(drv_blink_hdl_sT *pHdl)
{
	return ((pHdl->blink) >> 1);
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d2))
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
┌─────────────────────────────────────────────────────────────────────────────────────────┐
│                                                                                         │
│                                                                                         │
│ ──────────────────────[ End   Global APIs Definition version 01v0d2 ]────────────────── │
│                                                                                         │
│                                                                                         │
└─────────────────────────────────────────────────────────────────────────────────────────┘
*
*/
#elif (version_QueryNumber(__drv_blink_version__,01v0d3))
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
#elif (version_QueryNumber(__drv_blink_version__,01v0d4))
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
#endif /* #if (version_QueryNumber(__drv_blink_version__,01v0d0)) */

#endif /* #if(drv_blink_USE_GlobalFunctions == 1) */
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
#endif /* #if(drv_blink_projectEnable == 1) */
