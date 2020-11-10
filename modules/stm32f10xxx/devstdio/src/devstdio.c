/** \addtogroup dev_stdio_c dev_stdio.c module
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
 * @file   dev_stdio.c
 * @brief	descripcion breve ej. Porting para uso del modulo UART, con SO
 * @version v01.01
 * @date   21 oct. 2018
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
#define __dev_stdio_c__ /**<@brief : defined the file name */
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
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h> /* for typedef */
//
//#include <semihostCommand.h>
#include <chip.h>
#include <SysTickTimer.h>
//#include <lcd.h>
// -- for end, header file this module

#include <dev_stdio.h>
// --para que tome efecto la configuracion de BOARD
//

// -- for end, header file this module

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
#if(dev_stdio_projectEnable == 1)
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * =======================================[begin of project file]=======================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
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
#define USED_MASK_REG	1 /**<@brief defined the used of mask for GPIO
 * should be :
 *  + 1, enable the used of the mask for GPIO
 *  + 0, disable the used of the mask for GPIO */
//
/*=======================[defined pin and port ]=======================*/
/*-- Definimos los Pines y Puertos para el Bus de Control*/
#define	REG01_EXAMPLE	2 /**<@brief : Definimos el Puerto para el Pin Enable LCD */
#define PAD_RIGHT	1 /**<@brief indicamos si debemos rellenar */
#define PAD_ZERO	2 /**<@brief */
/* the following should be enough for 32 bit int */
#define PRINT_BUF_LEN 16 /**<@brief */

#define STDOUT_putchar(c)
#define	ENABLE_PRINT_FLOAT		0
#define ENABLE_dev_functions	0

/**/
#define	STR_NULL	"(null)"

//
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

typedef struct
{
		uint8_t base;
		uint8_t signo;
		uint8_t letBase;
		uint8_t pad;
}intFormat_t;

//
//
typedef void (*fT_pFunArg_void) (void); /**<@brief definicion de puntero a funcion argumento Void */
typedef void (*fT_pFunArg_uint8_t) (uint8_t); /**<@brief definicion de puntero a funcion argumento unit8_t */
typedef void (*pFputc_t) (char);

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
#if(dev_stdio_USE_LocalData==1)
//
// TODO : Local data declaration
//
//
static pFputc_t  fx_std_out;
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
static uint32_t exampleLocalData;/**<@brief Almacena la Direccion de DDRAM actual
(la ultima direccion sobre la Cual se escribio un caracter) */
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
#endif//#if(dev_stdio_USE_LocalData==1)
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
#if(dev_stdio_USE_LocalFunctions==1)
//
// TODO : Local functions declaration
//
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
//
//
// TODO : Local functions declaration
//
/*******************************************************************//**
 * @brief	Imprime un char
 * @param str : puntero a la lista de arg
 * @param c :
 * argumentos
 * @return nothing
 *********************************************************************/
static void print_char(char **str, int c);
//
//
/*******************************************************************//**
 * @brief	imprime un string
 * @param out : puntero a la lista de arg
 * @param string : puntero al string
 * @param width : longitud del string
 * @param pad :tipografia
 * argumentos
 * @return nothing
 *********************************************************************/
static int print_string(char **out, const char *string, uint32_t width, int pad);
//
//
/*******************************************************************//**
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param i :
 * @param b :
 * @param sg :
 * @param width : longitud ....
 * @param pad :tipografia
 * @param letbase :
 * argumentos
 * @return nothing
 *********************************************************************/
static int print_integer(char **out, int i, int b, int sg, \
		int width, int pad, int letbase);

static int print_integerV2(char **out, int i, intFormat_t *pFormat\
		,	uint32_t width);
//
//
/*********************************************************************
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param format :
 * @param args :
 * argumentos
 * @return nothing
 *********************************************************************/
static int print( char **out, const char *format, va_list args );




#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))

//
//
// TODO : Local functions declaration
//
/*******************************************************************//**
 * @brief	Imprime un char
 * @param str : puntero a la lista de arg
 * @param c :
 * argumentos
 * @return nothing
 *********************************************************************/
//static void print_char(char **str, int c);
//static void print_char(pFputc_t  fx, uint8_t c);
//
//
/*******************************************************************//**
 * @brief	imprime un string
 * @param out : puntero a la lista de arg
 * @param string : puntero al string
 * @param width : longitud del string
 * @param pad :tipografia
 * argumentos
 * @return nothing
 *********************************************************************/
static uint32_t print_string(const char *string, uint32_t width, int pad);
//
//
/*******************************************************************//**
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param i :
 * @param b :
 * @param sg :
 * @param width : longitud ....
 * @param pad :tipografia
 * @param letbase :
 * argumentos
 * @return nothing
 *********************************************************************/
static uint32_t print_integerV2(int i, intFormat_t *pFormat\
		,	uint32_t width);
//
//
/*********************************************************************
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param format :
 * @param args :
 * argumentos
 * @return nothing
 *********************************************************************/
static uint32_t print(const char *format, va_list args );


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
#endif//#if(dev_stdio_USE_LocalFunctions==1)
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
 #if(dev_stdio_USE_LocalMacroApis==1)
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
#define dev_stdio_BITsETfILE(file,posBit)\
 /**********************************************************************
 * @brief Bit set file
 * @param file : file register
 * @param posBit : position of bit in its register
 * @return	Nothing
  *********************************************************************/\
	(file |=(0x01UL<<posBit))
//
//
//
#endif// #if(dev_stdio_USE_LocalMacroApis==1)
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
#if(dev_stdio_USE_LocalFunctions==1)
//
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))
//
//
//
/*********************************************************************
 * @brief	Imprime un char
 * @param str : puntero al stream de salida
 * 		+ 0, local "semihost"
 * @param c : caracter a colocar en el stream
 *
 * argumentos
 * @return nothing
 *********************************************************************/
static void print_char(char **str, int c)
{
	//extern int putchar(int c);
	/* if (str!=NULL) */
	if (str)
	{
		**str = (char)c;
		++(*str);
	}
	else
	{
		STDOUT_putchar(c);
	}
}
//
//
/*********************************************************************
 * @brief	imprime cadenas de string
 * @param out : stream destino
 * @param string : string a compiar
 * @param width : longitud del stream destino
 * @param pad : caracter de relleno
 * @return nothing
 *********************************************************************/
static int print_string(char **out, const char *string, uint32_t width, int pad)
{
	/*fixme debemos corroborar la valides
	 * que los signos de las variables,
	 * para optimizar codigo*/
	register const char *ptr;
	register uint32_t pc, padchar;
	register uint32_t len;
	pc=0;
	padchar= ' ';
	if (width > 0)
	{
		/*-- get len string*/
		len = 0;
		for (ptr = string; *ptr; ++ptr) ++len;
		//
		if (len >= width) width = 0;
		else width -= len;
		if (pad & PAD_ZERO) padchar = '0';
	}
	//
	//
	if (!(pad & PAD_RIGHT))
	{
		/* rellenamso con '0' o espacios en blanco los lugares previos al string */
		for ( ; width > 0; --width)
		{
			print_char(out, padchar);
			++pc;
		}
	}
	for ( ; *string ; ++string)
	{
		print_char (out, *string);
		++pc;
	}
	for ( ; width > 0; --width)
	{
		print_char (out, padchar);
		++pc;
	}
	return pc;
}
//
//
/*********************************************************************
 * @brief	imprime enteros
 * @param out : puntero a la cadena destino
 * @param i : integer, valor numerico
 * @param b : base numerica
 * @param sg : signo 1: con signo, 0: sin signo
 * @param width : longitud ....
 * @param pad : caracter de relleno
 * @param letbase : si es mayuscula o minuscula la representacion de
 * letras -> exadecimal
 * argumentos
 * @return nothing
 *********************************************************************/
static int print_integer(char **out, int i, int b, int sg, \
		int width, int pad, int letbase)
{
	char print_buf[PRINT_BUF_LEN];
	register char *s;
	register int t, neg = 0, pc = 0;
	register unsigned int u = (unsigned int)i;
	if (i == 0)
	{
		print_buf[0] = '0';
		print_buf[1] = '\0';
		return print_string(out, print_buf, width, pad);
	}
	if (((sg) && (b == 10)) && (i < 0))
	{
		neg = 1;
		u = (unsigned int)-i;
	}
	s = print_buf + PRINT_BUF_LEN-1;
	*s = '\0';

	while (u)
	{
		t = (unsigned int)u % b;
		if( t >= 10 )
			t += letbase - '0' - 10;
		*--s = (char)(t + '0');
		u /= b;
	}

	if (neg)
	{
		if( width && (pad & PAD_ZERO) )
		{
			print_char(out, '-');
			++pc;
			--width;
		}
		else
		{
			*--s = '-';
		}
	}
	return pc + print_string(out, s, width, pad);
}



//
//
/*********************************************************************
 * @brief	imprime enteros
 * @param out : puntero a la cadena destino
 * @param i : integer, valor numerico
 * @param b : base numerica
 * @param sg : signo 1: con signo, 0: sin signo
 * @param width : longitud ....
 * @param pad : caracter de relleno
 * @param letbase : si es mayuscula o minuscula la representacion de
 * letras -> exadecimal
 * argumentos
 * @return nothing
 *********************************************************************/
static int print_integerV2(char **out, int i, intFormat_t *pFormat,	uint32_t width)
{
	char print_buf[PRINT_BUF_LEN];
	register char *s;
	register int t, neg = 0, pc = 0;
	register unsigned int u = (unsigned int)i;
	if (i == 0)
	{
		print_buf[0] = '0';
		print_buf[1] = '\0';
		return print_string(out, print_buf, width, pFormat->pad);
	}
	if (((pFormat->signo) && (pFormat->base == 10)) && (i < 0))
	{
		neg = 1;
		u = (unsigned int)-i;
	}
	s = print_buf + PRINT_BUF_LEN-1;
	*s = '\0';

	while (u)
	{
		t = (unsigned int)u % pFormat->base;
		if( t >= 10 )
			t += pFormat->letBase - '0' - 10;
		*--s = (char)(t + '0');
		u /= pFormat->base;
	}

	if (neg)
	{
		if( width && (pFormat->pad & PAD_ZERO) )
		{
			print_char(out, '-');
			++pc;
			--width;
		}
		else
		{
			*--s = '-';
		}
	}
	return pc + print_string(out, s, width, pFormat->pad);
}
//
//
/*********************************************************************
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param format :
 * @param args :
 * argumentos
 * @return nothing
 *********************************************************************/
static int print( char **out, const char *format, va_list args )
{
	register uint32_t width;
	//register uint32_t width,pad;
	intFormat_t intFrm;
	register uint32_t pc = 0;
	char scr[2];
	register char *s ;

	for (; *format != 0; ++format)
	{
		if (*format == '%')
		{
			++format;
			width = intFrm.pad = 0;
			//width = pad = 0;
			if (*format == '\0') break;
			if (*format == '%') goto out;
			if (*format == '-')
			{
				++format;
				intFrm.pad = PAD_RIGHT;
				//pad = PAD_RIGHT;
			}
			while (*format == '0')
			{
				++format;
				intFrm.pad |= PAD_ZERO;
				//pad |= PAD_ZERO;
			}
			for ( ; (*format >= '0') && (*format <= '9'); ++format)
			{
				width *= 10;
				width += *format - '0';
			}
			//
#if 0
			if( *format == 's' )
			{
				s = (char *)va_arg( args, int );
				pc += print_string(out, s?s:"(null)", width, intFrm.pad);
				//pc += print_string(out, s?s:"(null)", width,pad);
				continue;
			}
			if( *format == 'd' )
			{
				intFrm.base = 10;
				intFrm.signo = 1;
				intFrm.letBase = 'a';
				pc += print_integerV2(out, va_arg( args, int ),&intFrm, width);
				//pc += print_integer(out, va_arg( args, int ), 10, 1, width, pad, 'a');
				continue;
			}
			if( *format == 'x' )
			{
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 16, 0, width, pad, 'a');
				continue;
			}
			if( *format == 'X' )
			{
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'A';
				pc += print_integerV2(out, va_arg( args, int ),&intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 16, 0, width, pad, 'A');
				continue;
			}
			if( *format == 'u' )
			{
				intFrm.base = 10;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 10, 0, width, pad, 'a');
				continue;
			}
			if( *format == 'c' )
			{
				/* char are converted to int then pushed on the stack */
				scr[0] = (char)va_arg( args, int );
				scr[1] = '\0';
				pc += print_string(out, scr, width, intFrm.pad);
				//pc += print_string(out, scr, width, intFrm);
				continue;
			}
#else
			switch(*format)
			{
			case 's':
				s = (char *)va_arg( args, int );
				pc += print_string(out, s?s:"(null)", width, intFrm.pad);
				continue;
			case 'd':
				intFrm.base = 10;
				intFrm.signo = 1;
				intFrm.letBase = 'a';
				//pc += print_integerV2(out, va_arg( args, int ),&intFrm, width);
				//continue;
				break;
			case 'x':
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				//pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 16, 0, width, pad, 'a');
				//continue;
				break;
			case 'X':
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'A';
				//pc += print_integerV2(out, va_arg( args, int ),&intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 16, 0, width, pad, 'A');
				//continue;
				break;
			case 'u':
				intFrm.base = 10;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				//pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
				//pc += print_integer(out, va_arg( args, int ), 10, 0, width, pad, 'a');
				//continue;
				break;
			case 'c':
				/* char are converted to int then pushed on the stack */
				scr[0] = (char)va_arg( args, int );
				scr[1] = '\0';
				pc += print_string(out, scr, width, intFrm.pad);
				continue;
			}
			pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
			continue;
#endif
		}
		else
		{
		out:
			print_char(out, *format);
			++pc;
		}
	}
	if (out) **out = '\0';
	va_end( args );
	return pc;
}
//
#elif(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
//
//

#if (ENABLE_dev_functions == 1)
static char *pMem;
//
//
/*********************************************************************
 * @brief Funcion para copiar cadenas con formato sobre un buffer de
 * memoria
 * @param data : dato que se copiara sobre la posicion actual del
 * buffer de memoria apuntado por la variable local estatica "pMem"
 * @return nothing
 *********************************************************************/
static void mem_move(uint8_t data)
{
	if(pMem == NULL) return;
	*pMem = (char) data;
	pMem++;
}
#endif
//
//
/*********************************************************************
 * @brief	Imprime un char
 * @param str : puntero al stream de salida
 * 		+ 0, local "semihost"
 * @param c : caracter a colocar en el stream
 *
 * argumentos
 * @return nothing
 *********************************************************************/

//
//
/*********************************************************************
 * @brief Funcion para imprimir o sacar mediante la funcion
 * correspondiente una cadena de string.
 * @param fx : puntero a la funcion, del tipo ' void (*fx) (uint8_t) '
 * @param str : cadena de caracter a sacar.
 * @return cantidad de caracteres sacado medinate la funcion.
 *********************************************************************/
static uint32_t print_out_string(const char *str)
{
	register const char *ptr;
	if(fx_std_out == NULL) return 0;
	for (ptr = str; *ptr; ++ptr)
	{
		(fx_std_out) (*ptr);
	}
	return (ptr-str);
}
//
//
/*********************************************************************
 * @brief	imprime cadenas de string
 * @param out : stream destino
 * @param string : string a compiar
 * @param width : longitud del stream destino
 * @param pad : caracter de relleno
 * @return la cantidad de caracterese impresos
 *********************************************************************/
static uint32_t print_string(const char *string, uint32_t width, int pad)
{
	/*fixme debemos corroborar la valides
	 * que los signos de las variables,
	 * para optimizar codigo*/
	register const char *ptr;
	register uint32_t pc, padchar;
	register uint32_t len;
	if( fx_std_out == NULL )return 0;
	/**/
	pc=0;
	padchar= ' ';
	if (width > 0)
	{
		/*-- get len string*/
		len = 0;
		for (ptr = string; *ptr; ++ptr) ++len;
		//
		if (len >= width) width = 0;
		else width -= len;
		if (pad & PAD_ZERO) padchar = '0';
	}
	//
	//
	if (!(pad & PAD_RIGHT))
	{
		/* rellenamso con '0' o espacios en blanco los lugares previos al string */
		for ( ; width > 0; --width)
		{
			(fx_std_out)(padchar);
			++pc;
		}
	}
	for ( ; *string ; ++string)
	{
		(fx_std_out)(*string);
		++pc;
	}
	for ( ; width > 0; --width)
	{
		(fx_std_out)(padchar);
		++pc;
	}
	return pc;
}
//
//
/*********************************************************************
 * @brief	imprime enteros
 * @param out : puntero a la cadena destino
 * @param i : integer, valor numerico
 * @param b : base numerica
 * @param sg : signo 1: con signo, 0: sin signo
 * @param width : longitud ....
 * @param pad : caracter de relleno
 * @param letbase : si es mayuscula o minuscula la representacion de
 * letras -> exadecimal
 * argumentos
 * @return nothing
 *********************************************************************/
static uint32_t print_integerV2(int i, intFormat_t *pFormat,	uint32_t width)
{
	char print_buf[PRINT_BUF_LEN];
	register char *s;
	register uint32_t t, neg = 0, pc = 0;
	register unsigned int u = (unsigned int)i;
	if(fx_std_out == NULL) return 0;
	if (i == 0)
	{
		print_buf[0] = '0';
		print_buf[1] = '\0';
		return print_string(print_buf, width, pFormat->pad);
	}
	if (((pFormat->signo) && (pFormat->base == 10)) && (i < 0))
	{
		neg = 1;
		u = (unsigned int)-i;
	}
	s = print_buf + PRINT_BUF_LEN-1;
	*s = '\0';

	while (u)
	{
		t = (unsigned int)u % pFormat->base;
		if( t >= 10 )
			t += pFormat->letBase - '0' - 10;
		*--s = (char)(t + '0');
		u /= pFormat->base;
	}
	if (neg)
	{
		if( width && (pFormat->pad & PAD_ZERO) )
		{
//			print_char(fx_out, '-');
			(fx_std_out) ('-');
			++pc;
			--width;
		}
		else
		{
			*--s = '-';
		}
	}
	return pc + print_string(s, width, pFormat->pad);
}

//
//
#if(ENABLE_PRINT_FLOAT == 1)
/*-- float -> %f
#define NDecimas 1000   // Para 3 decimas.-
int32_t Entero;
uint32_t  Decimal;
float Value;

Entero=value;
Decimal=(value*NDecimas)%NDecimas;

sprintf(string,"%u,%03u",Entero,Decimal);
 * */

//
//
/*********************************************************************
 * @brief	imprime enteros
 * @param out : puntero a la cadena destino
 * @param i : integer, valor numerico
 * @param b : base numerica
 * @param sg : signo 1: con signo, 0: sin signo
 * @param width : longitud ....
 * @param pad : caracter de relleno
 * @param letbase : si es mayuscula o minuscula la representacion de
 * letras -> exadecimal
 * argumentos
 * @return nothing
 *********************************************************************/
static int print_float(char **out, double value, intFormat_t *pFormat,uint32_t width)
{
	//char print_buf[PRINT_BUF_LEN];
	uint32_t pc;
	int32_t entero;
	uint32_t decimal,lenInt,tmp;
	entero = (int32_t ) value;
	lenInt=0;
	pc=0;
	while (entero)
	{
		tmp = (uint32_t)entero % 10;
		if( tmp >= 10 ) lenInt ++;
		entero /= 10;
	}
	tmp = width - lenInt;
	decimal = ((((uint32_t ) value) * 1000) % 1000);
	//
	if (lenInt == 0)
	{
		print_char(out, '0');
		pc++;
	}
	else
	{
		pc=print_integerV2(out,entero,pFormat,lenInt);
	}
	print_char(out, '.');
	pc ++;
	return pc + print_integerV2(out, decimal,pFormat,tmp);
}
#endif//#if(ENABLE_PRINT_FLOAT == 1)
//
//
/*********************************************************************
 * @brief	imprime ....
 * @param out : puntero a la lista de arg
 * @param format :
 * @param args :
 * argumentos
 * @return la cantidad de caracteres impresos
 *********************************************************************/
//static uint32_t print( char **out, const char *format, va_list args )
static uint32_t print(const char *format, va_list args )
{
	register uint32_t width;
	static intFormat_t intFrm;
	register uint32_t pc = 0;
	char scr[2];
	register char *s ;

	if(fx_std_out == NULL) return 0;
	for (; *format != 0; ++format)
	{
		if (*format == '%')
		{
			++format;
			width = intFrm.pad = 0;
			if (*format == '\0') break;
			if (*format == '%') goto print_slt_out;
			if (*format == '-')
			{
				++format;
				intFrm.pad = PAD_RIGHT;
			}
			while (*format == '0')
			{
				++format;
				intFrm.pad |= PAD_ZERO;
			}
			for ( ; (*format >= '0') && (*format <= '9'); ++format)
			{
				width *= 10;
				width += *format - '0';
			}
			//
			switch(*format)
			{
			case 's':
				s = (char *)va_arg( args, int );
				pc += print_string(s?s:STR_NULL, width, intFrm.pad);
				//pc += print_string(out, s?s:"(null)", width, intFrm.pad);
				continue;
			case 'd':
				intFrm.base = 10;
				intFrm.signo = 1;
				intFrm.letBase = 'a';
				break;
			case 'x':
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				break;
			case 'X':
				intFrm.base = 16;
				intFrm.signo = 0;
				intFrm.letBase = 'A';
				break;
			case 'u':
				intFrm.base = 10;
				intFrm.signo = 0;
				intFrm.letBase = 'a';
				break;
			case 'c':
				/* char are converted to int then pushed on the stack */
				scr[0] = (char)va_arg( args, int );
				scr[1] = '\0';
				pc += print_string(scr, width, intFrm.pad);
				//pc += print_string(out, scr, width, intFrm.pad);
				continue;
#if(ENABLE_PRINT_FLOAT == 1)
			case 'f':
				intFrm.base = 10;
				intFrm.signo = 1;
				intFrm.letBase = 'a';
				pc += print_float(out, va_arg( args, double ), &intFrm,width);
				continue;
#endif//#if(ENABLE_PRINT_FLOAT == 1)

/*-- float -> %f
#define NDecimas 1000   // Para 3 decimas.-
int32_t Entero;
uint32_t  Decimal;
float Value;

Entero=value;
Decimal=(value*NDecimas)%NDecimas;

sprintf(string,"%u,%03u",Entero,Decimal);
 * */
			}
			pc += print_integerV2(va_arg( args, int ), &intFrm,width);
			//pc += print_integerV2(out, va_arg( args, int ), &intFrm,width);
			continue;
		}
		else
		{
print_slt_out:
			(fx_std_out)(*format);
//			print_char(fx_std_out, *format);
			//print_char(out, *format);
			++pc;
		}
	}
	//if (out) **out = '\0';
	if (fx_std_out != NULL) (fx_std_out) ('\0');
	va_end( args );
	return pc;
}







#else
#warning "Sub version no definida"
#endif//#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0))

#elif(version_QueryHighNumber(dev_stdio_USE_VERSION,02))

#else//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
#warning " version no definida aun"
#endif//#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
//
//
#endif//#if(dev_stdio_USE_LocalFunctions==1)
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
#if(dev_stdio_USE_GlobalFunctions==1)
//
// TODO : Global APIs Section
//
#if(version_QueryHighNumber(dev_stdio_USE_VERSION,01))
/*-----[sub verioned]*/
#if(version_QueryLowNumber(dev_stdio_USE_VERSION,v0d0)||version_QueryLowNumber(dev_stdio_USE_VERSION,v0d1))
//
//
#if (ENABLE_dev_functions == 1)
 /*********************************************************************
 * @brief	prototipo de funcion printf estandar del ANSI c
 * @param cadena : cadena de caracter
 * .. formato ...etc
 * @return el numero de caracteres transmitido
 * @par example :
 <pre>
 a = printf("%s\n", "Hola mundo");
 </pre>
 *********************************************************************/
uint32_t dev_printf(const char *cadena, ...)
{
        va_list args;
        va_start( args, cadena );
        //return print( 0, cadena, args );
        return print( NULL, cadena, args );
}
/*********************************************************************
 * @brief	Esta función es equivalente a fprintf, excepto que el
 * argumento cadena es un array o string en vez de stream. Un carácter
 * nulo es escrito al final. No es contado como parte de la suma retornada.
 * @param out : archivo de salida, en el cual copiaremos
 * @param format : formato destino p/la conversion
 * should be :
 * 		+ %s : String, cadena de caracter
 * 		+ %c : un char, un solo caracter
 * 		+ %d : Lee un entero decimal con signo. El argumento correspondiente
 * 		es un puntero a un entero.
 * 		+ %i : Lee un entero decimal, octal, o hexadecimal opcionalmente con
 * 		signo. El argumento correspondiente es un puntero a un entero.
 * 		+ %o : Lee un entero octal sin signo. El argumento correspondiente
 * 		es un puntero a un entero sin signo.
 * 		+ %u : Lee un entero decimal sin signo. El argumento correspondiente
 * 		es un puntero a un entero sin signo.
 * 		+ %x | %X : Lee un entero hexadecimal. El argumento correspondiente
 * 		es un puntero a un entero sin signo.
 * 		+ [prefijo] h : se coloca antes de cualquier especificador de
 * 		conversión de enteros para indicar que la entrada de datos es un
 * 		entero de tipo short
 * 		+ [prefijo] l : idem al anterior pero p/el tipo long *
 * @return el numero de caracteres transmitido
 * @par example :
 <pre>
 char buf[80];
 a = dev_sprintf(buf, "justif: \"%-10s\"\n", "left");
 </pre>
 *********************************************************************/
uint32_t dev_sprintf(char *out, const char *format, ...)
{
        va_list args;
        va_start( args, format );
        pMem = out;
        //return print( &out, format, args );
        return print( mem_move, format, args );
}
//
//
 /*********************************************************************
 * @brief	Esta función es equivalente a fprintf, excepto que el
 * argumento cadena especifica un array en el cual la salida generada
 * es para ser escrita en un archivo, en vez de en un stream. Un carácter
 * nulo es escrito al final. No es contado como parte de la suma retornada.
 * El comportamiento acerca de copiando entre objetos que se superponen
 * no está definido.
 * @param buf : archivo de salida, en el cual copiaremos
 * @param count : cuneta
 * @param format : formato
 * @return el numero de caracteres transmitido
 * @par example :
 <pre>
 char buf[80];
 a = snprintf(buf, "justif: \"%-10s\"\n", "left");
 </pre>
 *********************************************************************/
uint32_t dev_snprintf( char *buf, unsigned int count, const char *format, ... )
{
        va_list args;
        ( void ) count;
        va_start( args, format );
        pMem = buf;
        //return print( &buf, format, args );
        return print( mem_move, format, args );
}
//
//
uint32_t dev_puts(const char *str)
{
	return print_out_string(NULL,str);
/*	register const char *ptr;
	for (ptr = str; *ptr; ++ptr)
	{
		STDOUT_putchar(*ptr);
	}
	return (ptr-str);*/
}
/*XXX para activar estas debemos implementar una funcion del tipo
 static char *pointer;
 //
  pointer = pBuff;//inicializamos el punter

 mem_move(uint8_t data)
 {
 	 *pBuff = data;
 	 pBuff++;
 }

*/
#endif
//
//
/*******************************************************************//**
 * @brief Imprime un cadena de caracter que ya tiene el formato string
 * sobre el modulo LCD. En caso de necesitar imprimir datos sin formato
 * podemos implementar @ref lcd_printf()
 * @param Adr : Direccion sobre la cual deseamos iniciar la escritura
 *
 * 		+ value : valor especificando posicion X (8-Bit bajos)/Y (8- Bits altos)
 * 		+ lcd_LINE1 :Inicio de la linea uno
 * 		+ lcd_LINE2 : Inicio de la linea dos
 * 		+ lcd_LINE3 :Inicio de la linea tres
 * 		+ lcd_LINE4 :Inicio de la linea catro
 * 		+ lcd_LINEx|<value> : Especificamos Linea 'LINEAx' y con 'value'
 * 		especificamos la posicion en X (0 <value < 20)
 * 		+ lcd_CURRENT_POS : inicia la esctritura desde la posicion actual
 *
 * @param pBuff : Puntero al buffer de dato con formato.
 * @param lBuff : Longitud del Buffer de dato
 * @return
 * La cantidad de caracteres que se enviaron al modulo, en caso de que
 * este sea cero significa que se enviaron todos los caracteres
 * (descartando todos los caracteres encontrados despues del caracter NULL)
 *********************************************************************/
//uint32_t lcd_printf(uint16_t pos, const char *format, ...)
//{
//	uint32_t i;
//    va_list args;
//    lcd_SetPosition(pos);
//    va_start( args, format );
//    fx_std_out = lcd_putc;
//    i = print(format, args );
//    return i;
//}

/*******************************************************************//**
 * @brief Imprime un cadena de caracter que ya tiene el formato string
 * sobre el modulo LCD. En caso de necesitar imprimir datos sin formato
 * podemos implementar @ref lcd_printf()
 * @param Adr : Direccion sobre la cual deseamos iniciar la escritura
 *
 * 		+ value : valor especificando posicion X (8-Bit bajos)/Y (8- Bits altos)
 * 		+ lcd_LINE1 :Inicio de la linea uno
 * 		+ lcd_LINE2 : Inicio de la linea dos
 * 		+ lcd_LINE3 :Inicio de la linea tres
 * 		+ lcd_LINE4 :Inicio de la linea catro
 * 		+ lcd_LINEx|<value> : Especificamos Linea 'LINEAx' y con 'value'
 * 		especificamos la posicion en X (0 <value < 20)
 * 		+ lcd_CURRENT_POS : inicia la esctritura desde la posicion actual
 *
 * @param pBuff : Puntero al buffer de dato con formato.
 * @param lBuff : Longitud del Buffer de dato
 * @return
 * La cantidad de caracteres que se enviaron al modulo, en caso de que
 * este sea cero significa que se enviaron todos los caracteres
 * (descartando todos los caracteres encontrados despues del caracter NULL)
 *********************************************************************/
uint32_t dev_printf(uint8_t dev,...)
{
	uint32_t i;
	va_list args;
	uint16_t pos;
	static char *format;
	va_start( args, dev );
    switch(dev)
    {
    case dev_STD_LCD:
    	/*--
    	 * debemos sacar la posocion
    	 * 	Columna, posicion X
    	 * 	Fila, Posicion Y */
    	pos = (int16_t) va_arg(args, unsigned int );
    	lcd_SetPosition(pos);
    	fx_std_out = lcd_putc;
    	break;

    case dev_STD_UART:

    	break;
    default:
    	return 0;

    }
    format = (char*) va_arg(args, int);
	i = print(format, args );


    //lcd_print(pos,lcd_buff,i);
    return i;
}
//
//
#if 0
uint32_t lcd_puts(uint16_t pos,const char *str)
{
	register const char *ptr;
	register uint32_t len;
	len=0;
	for (ptr = str; *ptr; ++ptr) ++len;
	lcd_print(pos,str,len);
	return len;
}
#else
uint32_t lcd_puts(uint16_t pos,const char *str)
{
/*	register const char *ptr;
	lcd_SetPosition(pos);
	for (ptr = str; *ptr; ++ptr)
	{
		lcd_putc(*ptr);
	}
	return (ptr-str);*/
	lcd_SetPosition(pos);
	return print_out_string(str);
}
#endif
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
#if 0
void lcd_print_menu(lcd_menu_t * menu )
{
  uint32_t i;
  if(menu == NULL) return;
  for(i=0 ;i<4;i++)
  {
	  if(menu[i].opt == lcd_MENU_END) return;
     lcd_puts((uint16_t) (i<<8),menu[i].opt);
  }
}

#endif







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
#endif//#if(dev_stdio_USE_GlobalFunctions==1)
/* **********************************************************************************************
 *
 * ================================[ End Global APIs Section ]=================================
 *
 * ******************************************************************************************** */
//
//
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * ========================================[end of project file]========================================
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#endif//#if(dev_stdio_projectEnable == 1)
