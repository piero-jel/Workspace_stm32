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
chip_DEP_PATH := version core chip

else ifeq ($(MAKEFILE_VER),1)
chip_DEP_PATH := version
else ifeq ($(MAKEFILE_VER),2)
	##Makefile del modulo chip no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
chip_DEP_PATH := version
else ifeq ($(MAKEFILE_VER),3)
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
chip_PATH := $(relative_PATH)/chip
#chip_version ?= 
chip_SYMBOLS := __chip_version__=$(ver_01v0d0) \
                __chip_gpio_version__=$(ver_01v0d0) \
                __chip_semihost_version__=$(ver_01v0d0) \
                __chip_systick_version__=$(ver_01v0d0)
                
                
                
                
                


##
##
####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
chip_INC_FOLDERS = $(chip_PATH)/inc
chip_SRC_FOLDERS = $(chip_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
ifeq ($(MAKEFILE_VER),0)
## -- creacion de librerias estaticas
chip_CPP_FILES = $(foreach VAR,$(chip_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.cpp))
chip_C_FILES = $(foreach VAR,$(chip_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.c))
chip_ASM_FILES = $(foreach VAR,$(chip_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*$(ASEXT)))
chip_HEADER_FILES = $(wildcard $(chip_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),1)
chip_CPP_FILES = $(wildcard $(chip_SRC_FOLDERS)/*.cpp)
chip_C_FILES := $(wildcard $(chip_SRC_FOLDERS)/*.c)
chip_ASM_FILES = $(wildcard $(chip_SRC_FOLDERS)/*.S)
chip_HEADER_FILES = $(wildcard $(chip_INC_FOLDERS)/*.h)
else ifeq ($(MAKEFILE_VER),2)
##Makefile del modulo chip no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
chip_CPP_FILES = $(wildcard $(chip_SRC_FOLDERS)/*.cpp)
chip_C_FILES := $(wildcard $(chip_SRC_FOLDERS)/*.c)
chip_ASM_FILES = $(wildcard $(chip_SRC_FOLDERS)/*.S)
chip_HEADER_FILES = $(wildcard $(chip_INC_FOLDERS)/*.h)
else ifeq ($(MAKEFILE_VER),3)
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
chip_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(chip_CPP_FILES:.cpp=.o)))
chip_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(chip_C_FILES:.c=.o)))
chip_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(chip_ASM_FILES:$(ASEXT)=.o)))
chip_OBJ_LIST := $(notdir $(chip_OBJ_FILES))

####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
chip_DEBUG:
	$(CMD_PRINT) "\n==========[begin, chip_DEBUG]=========="
	$(CMD_PRINT) "MAKEFILE_VER: " $(MAKEFILE_VER)
	$(CMD_PRINT) "chip_PATH: " $(chip_PATH)
	$(CMD_PRINT) "chip_INC_FOLDERS :" $(chip_INC_FOLDERS)
	$(CMD_PRINT) "chip_SRC_FOLDERS :" $(chip_SRC_FOLDERS)
	$(CMD_PRINT) "chip_OBJ_FILES :" $(chip_OBJ_FILES)
	$(CMD_PRINT) "chip_OBJ_LIST :" $(chip_OBJ_LIST)
	$(CMD_PRINT) "chip_HEADER_FILES :" $(notdir $(chip_HEADER_FILES))
	$(CMD_PRINT) "chip_CPP_FILES :" $(notdir $(chip_CPP_FILES))
	$(CMD_PRINT) "chip_C_FILES :" $(notdir $(chip_C_FILES))
	$(CMD_PRINT) "chip_ASM_FILES :" $(notdir $(chip_ASM_FILES))
	$(CMD_PRINT) "chip_SYMBOLS: " $(chip_SYMBOLS)
	$(CMD_PRINT) "==========[end, chip_DEBUG]==========\n"
