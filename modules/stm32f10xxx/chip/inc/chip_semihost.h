/* Copyright 2016, Luccioni Jesus Emanuel
 * All rights reserved.
 */
/** \addtogroup main_h main_h module
 ** @{ */

/********************************[Header File]*************************************//**
 * @file    SystemCom.h
 * @brief	Archivo de cabecera que contine los prototipos de las funciones en asm
 * @version version
 * @date   Apr 22, 2016
 * @note none
 * @par jel
 *************************************************************************************/
/*
// -- Definimos el Nombre del modulo
*/
#ifndef __semihostCommand_h__
#define __semihostCommand_h__

/*
// ============================[Open, cplusplus]============================
*/
#ifdef __cplusplus
extern "C" {
#endif

#include <chip.h>

/*******************************************************************//**
 * @brief Prototipo para el envio de datoas atraves del semihostin
 * del cortex-m3
 * @param cmd : comando que deseamso enviar
 * @param data : Puntero o buffer de dato que deseamso enviar.
 * @return La longitud de datos enviados de forma sastisfactoria.
 *********************************************************************/
extern int chip_semihost_cmd(unsigned int cmd, void * data);



//
//
/*******************************************************************//**
 * @brief	Funcion estatica para el envio de un cadena de caracter
 * por semihosting
 * @param ptrBuff : puntero del buffer que contiene los datos
 * @param lenBuff : Longitud del Buffer
 * @return nothing
 * @b wordInTextBold <b>parafo en bold </b>
 * @return nothing
 *********************************************************************/
static inline void chip_semihost_puts(const void *ptrBuff, uint32_t lenBuff)
{
	uint32_t data[3];
	data[0]=2;
	data[1]= (uint32_t) ptrBuff;
	data[2]=lenBuff;
		/*2,
		(uint32_t) ptrBuff,
		lenBuff*/

	/* send through semihosting interface */
	chip_semihost_cmd(0x05,data);
}




/*
//============================[close, cplusplus]============================
*/
#ifdef __cplusplus
}
#endif

/** @} doxygen end group definition */
/*==================[end of file]============================================*/
#endif//#ifndef __SystemCom_h__
