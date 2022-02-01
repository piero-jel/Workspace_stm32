# /********************************[ copyright]*************************************//**
#  *@copyright 2020, Luccioni Jesús Emanuel. \n
#  * All rights reserved. \n
#  * This file is part of $(Module)/Makefile \n
#  * Distribution is not allowed in any of its forms.,
#  * with or without modification. \n
#  * Use is permitted with prior authorization by
#  * the copyright holder.\n
#  * \n meil :
#  * 	- piero.jel@gmail.com
#  *************************************************************************************/
##
##
####################################################################################### 
##
## Incluimos el archivo de versionado 
##
#######################################################################################
-include etc/version.mk

##
##
#####################################################################################
##
## Definimos los Comandos 
##
#####################################################################################
ifeq ($(OS),Windows_NT)
## para windows → cygwin
	CMD_PRINT ?= @echo -e
else
## para linux
	CMD_PRINT ?= @echo
endif

##
##
#######################################################################################
##
## Definimos la ruta relativa que usa para este modulo
##
#######################################################################################
relative_PATH := modules/$(DEVICES)

##
##
#######################################################################################
##
## Definimos los modulos del cual depende este, sumado al mismo modulo
##
#######################################################################################
lcd_DEP_PATH := version
lcd_version ?= $(ver_01v0d0)

##
##
#######################################################################################
##
## Definimos el PATH de este directorio
##
#######################################################################################
lcd_PATH := $(relative_PATH)/lcd
lcd_SYMBOLS := -D__lcd_version__=$(base_version)





####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
lcd_INC_FOLDERS = $(lcd_PATH)/inc
lcd_SRC_FOLDERS = $(lcd_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
# lcd_CPP_FILES := $(wildcard $(lcd_SRC_FOLDERS)/*.cpp)
lcd_C_FILES := $(wildcard $(lcd_SRC_FOLDERS)/*.c)
lcd_ASM_FILES = $(wildcard $(lcd_SRC_FOLDERS)/*.S)
lcd_HEADER_FILES = $(wildcard $(lcd_INC_FOLDERS)/*.h)
###
###


# lcd_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(lcd_CPP_FILES:.cpp=.o)))
lcd_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(lcd_C_FILES:.c=.o)))
lcd_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(lcd_ASM_FILES:.S=.o)))

lcd_OBJ_LIST := $(notdir $(lcd_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
lcd_DEBUG:
	$(CMD_PRINT) "\n==========[begin, lcd_DEBUG]=========="
	$(CMD_PRINT) "lcd_PATH: " $(lcd_PATH)
	$(CMD_PRINT) "lcd_INC_FOLDERS :" $(lcd_INC_FOLDERS)
	$(CMD_PRINT) "lcd_SRC_FOLDERS :" $(lcd_SRC_FOLDERS)
	$(CMD_PRINT) "lcd_OBJ_FILES :" $(lcd_OBJ_FILES)
	$(CMD_PRINT) "lcd_OBJ_LIST :" $(lcd_OBJ_LIST)
	$(CMD_PRINT) "lcd_HEADER_FILES :" $(notdir $(lcd_HEADER_FILES))	
	$(CMD_PRINT) "lcd_C_FILES :" $(notdir $(lcd_C_FILES))
	$(CMD_PRINT) "lcd_ASM_FILES :" $(notdir $(lcd_ASM_FILES))
	$(CMD_PRINT) "lcd_SYMBOLS: " $(lcd_SYMBOLS)
	$(CMD_PRINT) "==========[end, lcd_DEBUG]==========\n"
