####################################################################################################################
## 2021, Luccioni Jesús Emanuel All rights reserved.
## Redistribution is not allowed with or without modification. 
## Use is permitted with prior authorization by the copyright holder.
####################################################################################################################
##
#######################################################################################
## BEGIN Definimos el Nombre de la aplicacion por defecto 
##
#######################################################################################
PROJECT_NAME ?= $(notdir $(PROJECT))

##
## END
#####################################################################################
## BEGIN Definimos la version para cada modulo que usaremos en el proyecto
#####################################################################################
main_version = $(ver_01v0d0)


##
## END
#######################################################################################
## BEGIN Establecemos el listado de modulos que utilizara el proyecto
##	"Modules needed by the application"
##
#######################################################################################
# PROJECT_MODULES ?= version base math
PROJECT_MODULES ?= core chip driver

##
## END
#######################################################################################
## BEGIN Establecemos el listado de las librerias externas que utiliza el proyecto
##	"libraies needed by the application"
##
#######################################################################################
# PROJECT_LIBRARIES ?= mcore

##
## END
#######################################################################################
## BEGIN Establecemos la ruta de donde tomara los modulos
##
#######################################################################################
MODULES_PATH := modules/$(DEVICES)

##
## END
#######################################################################################
## BEGIN Establecemos la ruta para cada modulo que usaremos
##	"Modules needed by the application"
##
#######################################################################################
PROJECT_MODULES_PATH := $(foreach VAR,$(PROJECT_MODULES),\
			$(MODULES_PATH)/$(VAR))


##
## END
#######################################################################################
## BEGIN Estabelcemos el "source files folder"
##
#######################################################################################
PROJECT_SRC_PATH := $(PROJECT)/src

##
## END
#######################################################################################
## BEGIN
## Estabelcemos el "header files folder"
##
#######################################################################################
PROJECT_INC_PATH := $(PROJECT)/inc $(addsuffix /inc,$(PROJECT_MODULES_PATH))

##
## END
