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
core_DEP_PATH := version
core_version ?= $(ver_01v0d0)

##
##
#######################################################################################
##
## Definimos el PATH de este directorio
##
#######################################################################################
core_PATH := $(relative_PATH)/core
core_SYMBOLS := __core_version__=$(ver_01v0d0)





####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
core_INC_FOLDERS = $(core_PATH)/inc
core_SRC_FOLDERS = $(core_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
# core_CPP_FILES := $(wildcard $(core_SRC_FOLDERS)/*.cpp)
core_C_FILES := $(wildcard $(core_SRC_FOLDERS)/*.c)
core_ASM_FILES = $(wildcard $(core_SRC_FOLDERS)/*.S)
core_HEADER_FILES = $(wildcard $(core_INC_FOLDERS)/*.h)
###
###


# core_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(core_CPP_FILES:.cpp=.o)))
core_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(core_C_FILES:.c=.o)))
core_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(core_ASM_FILES:.S=.o)))

core_OBJ_LIST := $(notdir $(core_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
core_DEBUG:
	$(CMD_PRINT) "\n==========[begin, core_DEBUG]=========="
	$(CMD_PRINT) "core_PATH: " $(core_PATH)
	$(CMD_PRINT) "core_INC_FOLDERS :" $(core_INC_FOLDERS)
	$(CMD_PRINT) "core_SRC_FOLDERS :" $(core_SRC_FOLDERS)
	$(CMD_PRINT) "core_OBJ_FILES :" $(core_OBJ_FILES)
	$(CMD_PRINT) "core_OBJ_LIST :" $(core_OBJ_LIST)
	$(CMD_PRINT) "core_HEADER_FILES :" $(notdir $(core_HEADER_FILES))
	$(CMD_PRINT) "core_C_FILES :" $(notdir $(core_C_FILES))
	$(CMD_PRINT) "core_ASM_FILES :" $(notdir $(core_ASM_FILES))
	$(CMD_PRINT) "core_SYMBOLS: " $(core_SYMBOLS)
	$(CMD_PRINT) "==========[end, core_DEBUG]==========\n"
