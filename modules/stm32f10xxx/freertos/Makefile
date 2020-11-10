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
ifeq ($(MAKEFILE_VER),0)
freertos_DEP_PATH := version core chip freertos
freertos_version ?= $(ver_01v0d0)

else ifeq ($(MAKEFILE_VER),1)
freertos_DEP_PATH := version core chip freertos
freertos_version ?= $(ver_01v0d0)

else ifeq ($(MAKEFILE_VER),2)
freertos_DEP_PATH := version core chip freertos
freertos_version ?= $(ver_01v0d0)

else ifeq ($(MAKEFILE_VER),3)
##Makefile del modulo freertos no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
else
	## "MAKEFILE_VER: "$(MAKEFILE_VER) " Definido de forma Incorreta"

endif

##
##
#######################################################################################
##
## Definimos el PATH de este directorio
##
#######################################################################################
freertos_PATH := $(relative_PATH)/freertos
freertos_SYMBOLS := __freertos_version__=$(base_version)


##
##
####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
freertos_INC_FOLDERS = $(freertos_PATH)/inc
freertos_SRC_FOLDERS = $(freertos_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
ifeq ($(MAKEFILE_VER),0)
## -- creacion de librerias estaticas
freertos_CPP_FILES = $(foreach VAR,$(freertos_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.cpp))
freertos_C_FILES = $(foreach VAR,$(freertos_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.c))
freertos_ASM_FILES = $(foreach VAR,$(freertos_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*$(ASEXT)))
freertos_HEADER_FILES = $(wildcard $(freertos_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),1)
freertos_CPP_FILES = $(wildcard $(freertos_SRC_FOLDERS)/*.cpp)
freertos_C_FILES := $(wildcard $(freertos_SRC_FOLDERS)/*.c)
freertos_ASM_FILES = $(wildcard $(freertos_SRC_FOLDERS)/*.S)
freertos_HEADER_FILES = $(wildcard $(freertos_INC_FOLDERS)/*.h)
else ifeq ($(MAKEFILE_VER),2)
freertos_CPP_FILES = $(wildcard $(freertos_SRC_FOLDERS)/*.cpp)
freertos_C_FILES := $(wildcard $(freertos_SRC_FOLDERS)/*.c)
freertos_ASM_FILES = $(wildcard $(freertos_SRC_FOLDERS)/*.S)
freertos_HEADER_FILES = $(wildcard $(freertos_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),3)
##Makefile del modulo freertos no definido para MAKEFILE_VER: "$(MAKEFILE_VER)

else
	## "MAKEFILE_VER: "$(MAKEFILE_VER) " Definido de forma Incorreta"

endif

##
##
####################################################################################### 
##
## Establecemos el listado de los archivos objetos del modulo y de los 
## cuales depende este
##
#######################################################################################
freertos_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(freertos_CPP_FILES:.cpp=.o)))
freertos_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(freertos_C_FILES:.c=.o)))
freertos_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(freertos_ASM_FILES:$(ASEXT)=.o)))
freertos_OBJ_LIST := $(notdir $(freertos_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
freertos_DEBUG:
	$(CMD_PRINT) "\n==========[begin, freertos_DEBUG]=========="
	$(CMD_PRINT) "MAKEFILE_VER: " $(MAKEFILE_VER)
	$(CMD_PRINT) "freertos_PATH: " $(freertos_PATH)
	$(CMD_PRINT) "freertos_INC_FOLDERS :" $(freertos_INC_FOLDERS)
	$(CMD_PRINT) "freertos_SRC_FOLDERS :" $(freertos_SRC_FOLDERS)
	$(CMD_PRINT) "freertos_OBJ_FILES :" $(freertos_OBJ_FILES)
	$(CMD_PRINT) "freertos_OBJ_LIST :" $(freertos_OBJ_LIST)
	$(CMD_PRINT) "freertos_HEADER_FILES :" $(notdir $(freertos_HEADER_FILES))
	$(CMD_PRINT) "freertos_CPP_FILES :" $(notdir $(freertos_CPP_FILES))
	$(CMD_PRINT) "freertos_C_FILES :" $(notdir $(freertos_C_FILES))
	$(CMD_PRINT) "freertos_ASM_FILES :" $(notdir $(freertos_ASM_FILES))
	$(CMD_PRINT) "freertos_SYMBOLS: " $(freertos_SYMBOLS)
	$(CMD_PRINT) "==========[end, freertos_DEBUG]==========\n"
