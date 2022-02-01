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
devstdio_DEP_PATH := version
devstdio_version ?= $(ver_01v0d0)

##
##
#######################################################################################
##
## Definimos el PATH de este directorio
##
#######################################################################################
devstdio_PATH := $(relative_PATH)/devstdio
devstdio_SYMBOLS := -D__devstdio_version__=$(base_version)





####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
devstdio_INC_FOLDERS = $(devstdio_PATH)/inc
devstdio_SRC_FOLDERS = $(devstdio_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
# devstdio_CPP_FILES := $(wildcard $(devstdio_SRC_FOLDERS)/*.cpp)
devstdio_C_FILES := $(wildcard $(devstdio_SRC_FOLDERS)/*.c)
devstdio_ASM_FILES = $(wildcard $(devstdio_SRC_FOLDERS)/*.S)
devstdio_HEADER_FILES = $(wildcard $(devstdio_INC_FOLDERS)/*.h)
###
###


# devstdio_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(devstdio_CPP_FILES:.cpp=.o)))
devstdio_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(devstdio_C_FILES:.c=.o)))
devstdio_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(devstdio_ASM_FILES:.S=.o)))

devstdio_OBJ_LIST := $(notdir $(devstdio_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
devstdio_DEBUG:
	$(CMD_PRINT) "\n==========[begin, devstdio_DEBUG]=========="
	$(CMD_PRINT) "devstdio_PATH: " $(devstdio_PATH)
	$(CMD_PRINT) "devstdio_INC_FOLDERS :" $(devstdio_INC_FOLDERS)
	$(CMD_PRINT) "devstdio_SRC_FOLDERS :" $(devstdio_SRC_FOLDERS)
	$(CMD_PRINT) "devstdio_OBJ_FILES :" $(devstdio_OBJ_FILES)
	$(CMD_PRINT) "devstdio_OBJ_LIST :" $(devstdio_OBJ_LIST)	
	$(CMD_PRINT) "devstdio_HEADER_FILES :" $(notdir $(devstdio_HEADER_FILES))
	$(CMD_PRINT) "devstdio_C_FILES :" $(notdir $(devstdio_C_FILES))
	$(CMD_PRINT) "devstdio_ASM_FILES :" $(notdir $(devstdio_ASM_FILES))
	$(CMD_PRINT) "devstdio_SYMBOLS: " $(devstdio_SYMBOLS)
	$(CMD_PRINT) "==========[end, devstdio_DEBUG]==========\n"
