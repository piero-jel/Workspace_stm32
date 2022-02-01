##
## Este archivo define las facilidades del compilador
## Basicamente lo comandos basicos como asi tambien los
## Directorios jerarquicos del proyecto.
## El contenido de este no debe variar entre un proyecto 
## y el otro. Solo si se cambia el compilador.
## Los comandos Basicos son para GNU linux y GNU windows "cygwin"
## 
##
#####################################################################################
# Definimos los Compiladores a utilizar
#####################################################################################
AS_COMPILER = __GNU_AS__
C_COMPILER = __GNU_C__
CPP_COMPILER = __GNU_CPP__

##
##
#####################################################################################
# Definimos el cross-compiler
# A compiler that can convert instructions into machine code or low level code for
# a computer other than that on which it is run.
#####################################################################################
CROSS_COMPILE = arm-none-eabi-

##
##
#####################################################################################
# Definimos los conjuntos de comando para la Compilacion 
#####################################################################################
# CC = gcc
# CPP = g++
# AS = gcc

# AS        = $(CROSS_COMPILE)as
AS        = $(CROSS_COMPILE)gcc
ASEXT     = .S
LD        = $(CROSS_COMPILE)ld
CC        = $(CROSS_COMPILE)gcc
# CPP             = $(CC) -E
CPP       = $(CROSS_COMPILE)g++
AR        = $(CROSS_COMPILE)ar
ARFLAGS   = rcs
NM        = $(CROSS_COMPILE)nm
STRIP     = $(CROSS_COMPILE)strip
OBJCOPY   = $(CROSS_COMPILE)objcopy
OBJDUMP   = $(CROSS_COMPILE)objdump
SIZE      = $(CROSS_COMPILE)size
SIZEFLAGS = -A
APPEXT	  = .elf

## comando para descargar el binario al dispositivo
##	sudo apt update && sudo apt upgrade && sudo apt install stm32flash
DOWNLOAD  = stm32flash
DOWNLOADFLAGS = -w
DOWNLOADPORT ?= -R /dev/ttyUSB0


##
##
#####################################################################################
##
## Definimos los Comandos 
##
#####################################################################################
# PRINT := @echo -e "OS: $(OS)"

ifeq ($(OS),Windows_NT)
	CMD_PRINT := @echo -e
else
	CMD_PRINT := @echo
endif
# PRINT := @echo -e


CMD_CLEAN := @rm -f 


##
##
##################################################
## compiler packing Files for library 
##################################################
CMD_PACK = @$(AR) rcs
	# ar -> cmd para empaquetar
	# r : inserta los miembros de los archivos en el 
	# 	archivo final. Remplaza los existentes y agrega
	#	los nuevos
	# c : crea el archivo
	# s : agrega/actualiza el indice de archivos
	# t : no implemntando pero util, nos permite 
	#	ver el listado de archivos enpaquetados
	
##
##
#####################################################################################
# Definimos los Flags para los compiladores
#####################################################################################
# Flags para C, flags que habilitan el gdb paso a paso
# CCFLAGS = -Iinclude -w -g -DNDEBUG
# # Flags para C++
# CPPFLAGS = $(CCFLAGS)
# # Flags para assembler
# ASFLAG = $(CCFLAGS)
##
##
#####################################################################################
# Definimos los Simbolos para los compiladores
#####################################################################################
# Simbolos para el compilador de C
CC_SYMBOLS += $(addprefix -D,$(LIST_CSYMBOLS))
# Simbolos para el compilador de C++
CPP_SYMBOLS += $(addprefix -D,$(LIST_CPPSYMBOLS))
# Simbolos para el compilador de assembler
ASS_YMBOLS += $(addprefix -D,$(LIST_ASSYMBOLS))
##
