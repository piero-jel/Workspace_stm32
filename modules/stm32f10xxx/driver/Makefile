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


ifeq ($(MAKEFILE_VER),1)
driver_SYMBOLS := __driver_version__=$(ver_01v0d0) \
                __drv_blink_version__=$(ver_01v0d0) \
                __drv_switch_version__=$(ver_01v0d1) \
                __driver_systick_version__=$(ver_01v0d0)
                
else ifeq ($(MAKEFILE_VER),2)
__drv_blink_version__=$(ver_01v0d0)
__drv_blink_version__=$(ver_01v0d0)
__drv_switch_version__=$(ver_01v0d1)
__drv_other_version__=$(ver_01v0d0)

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
ifeq ($(MAKEFILE_VER),0)
driver_DEP_PATH := version core chip driver

else ifeq ($(MAKEFILE_VER),1)
driver_DEP_PATH := version core chip driver
else ifeq ($(MAKEFILE_VER),2)
##Makefile del modulo driver no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
driver_DEP_PATH := version core chip driver
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
driver_PATH := $(relative_PATH)/driver


                
                
                
                
                


##
##
####################################################################################### 
##
## Definimos los PATH de los archivos fuente y header file
##
#######################################################################################
driver_INC_FOLDERS = $(driver_PATH)/inc
driver_SRC_FOLDERS = $(driver_PATH)/src

##
##
#######################################################################################
##
## Definimos todos los archivos fuentes de los cauales depende este modulo
##
#######################################################################################
ifeq ($(MAKEFILE_VER),0)
## -- creacion de librerias estaticas
driver_CPP_FILES = $(foreach VAR,$(driver_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.cpp))
driver_C_FILES = $(foreach VAR,$(driver_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*.c))
driver_ASM_FILES = $(foreach VAR,$(driver_DEP_PATH),$(wildcard $(relative_PATH)/$(VAR)/src/*$(ASEXT)))
driver_HEADER_FILES = $(wildcard $(driver_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),1)
driver_CPP_FILES = $(wildcard $(driver_SRC_FOLDERS)/*.cpp)
driver_C_FILES := $(wildcard $(driver_SRC_FOLDERS)/*.c)
driver_ASM_FILES = $(wildcard $(driver_SRC_FOLDERS)/*.S)
driver_HEADER_FILES = $(wildcard $(driver_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),2)
driver_CPP_FILES = $(wildcard $(driver_SRC_FOLDERS)/*.cpp)
driver_C_FILES := $(wildcard $(driver_SRC_FOLDERS)/*.c)
driver_ASM_FILES = $(wildcard $(driver_SRC_FOLDERS)/*.S)
driver_HEADER_FILES = $(wildcard $(driver_INC_FOLDERS)/*.h)

else ifeq ($(MAKEFILE_VER),3)
##Makefile del modulo driver no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
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
driver_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(driver_CPP_FILES:.cpp=.o)))
driver_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(driver_C_FILES:.c=.o)))
driver_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(driver_ASM_FILES:$(ASEXT)=.o)))
driver_OBJ_LIST := $(notdir $(driver_OBJ_FILES))




##
##
#######################################################################################
##
## Definimos la variable que contendra los simbolos necesarios para compilar 
## en funcion de la version de cada modulo
##
#######################################################################################
ifeq ($(MAKEFILE_VER),2)
driver_SYMBOLS := $(foreach NAME,$(notdir $(driver_HEADER_FILES:.h=)), __$(NAME)_version__=$(__$(NAME)_version__))
endif
####################################################################################### 
##
## Para depurar el mismo, llamamos al print de cada variable para verificar su contenido
##
#######################################################################################
driver_DEBUG:
	$(CMD_PRINT) "\n==========[begin, driver_DEBUG]=========="
	$(CMD_PRINT) "MAKEFILE_VER: " $(MAKEFILE_VER)
	$(CMD_PRINT) "driver_PATH: " $(driver_PATH)
	$(CMD_PRINT) "driver_INC_FOLDERS :" $(driver_INC_FOLDERS)
	$(CMD_PRINT) "driver_SRC_FOLDERS :" $(driver_SRC_FOLDERS)
	$(CMD_PRINT) "driver_OBJ_FILES :" $(driver_OBJ_FILES)
	$(CMD_PRINT) "driver_OBJ_LIST :" $(driver_OBJ_LIST)
	$(CMD_PRINT) "driver_HEADER_FILES :" $(notdir $(driver_HEADER_FILES))
	$(CMD_PRINT) "driver_CPP_FILES :" $(notdir $(driver_CPP_FILES))
	$(CMD_PRINT) "driver_C_FILES :" $(notdir $(driver_C_FILES))
	$(CMD_PRINT) "driver_ASM_FILES :" $(notdir $(driver_ASM_FILES))
	$(CMD_PRINT) "driver_SYMBOLS: " $(driver_SYMBOLS)
	$(CMD_PRINT) "==========[end, driver_DEBUG]==========\n"
