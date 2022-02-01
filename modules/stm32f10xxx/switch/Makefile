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
switch_DEP_PATH := version
switch_version ?= $(ver_01v0d0)

##
##
#######################################################################################
##
## Definimos el PATH de este directorio
##
#######################################################################################
switch_PATH := $(relative_PATH)/switch
switch_SYMBOLS := -D__switch_version__=$(base_version)





####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
switch_INC_FOLDERS = $(switch_PATH)/inc
switch_SRC_FOLDERS = $(switch_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
# switch_CPP_FILES := $(wildcard $(switch_SRC_FOLDERS)/*.cpp)
switch_C_FILES := $(wildcard $(switch_SRC_FOLDERS)/*.c)
switch_ASM_FILES = $(wildcard $(switch_SRC_FOLDERS)/*.S)
switch_HEADER_FILES = $(wildcard $(switch_INC_FOLDERS)/*.h)
###
###


# switch_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(switch_CPP_FILES:.cpp=.o)))
switch_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(switch_C_FILES:.c=.o)))
switch_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(switch_ASM_FILES:.S=.o)))

switch_OBJ_LIST := $(notdir $(switch_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
switch_DEBUG:
	$(CMD_PRINT) "\n==========[begin, switch_DEBUG]=========="
	$(CMD_PRINT) "switch_PATH: " $(switch_PATH)
	$(CMD_PRINT) "switch_INC_FOLDERS :" $(switch_INC_FOLDERS)
	$(CMD_PRINT) "switch_SRC_FOLDERS :" $(switch_SRC_FOLDERS)
	$(CMD_PRINT) "switch_OBJ_FILES :" $(switch_OBJ_FILES)
	$(CMD_PRINT) "switch_OBJ_LIST :" $(switch_OBJ_LIST)
	$(CMD_PRINT) "switch_HEADER_FILES :" $(notdir $(switch_HEADER_FILES))
	$(CMD_PRINT) "switch_C_FILES :" $(notdir $(switch_C_FILES))
	$(CMD_PRINT) "switch_ASM_FILES :" $(notdir $(switch_ASM_FILES))
	$(CMD_PRINT) "switch_SYMBOLS: " $(switch_SYMBOLS)
	$(CMD_PRINT) "==========[end, switch_DEBUG]==========\n"
