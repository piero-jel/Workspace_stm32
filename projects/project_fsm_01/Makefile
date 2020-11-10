##
##
#######################################################################################
##
## Definimos el Nombre de la aplicacion por defecto
##
#######################################################################################
PROJECT_NAME ?= $(notdir $(PROJECT))

##
##
#####################################################################################
# Definimos la version para cada modulo que usaremos en el proyecto
#####################################################################################
main_version = $(ver_01v0d0)


##
##
#######################################################################################
##
## Establecemos el listado de modulos que utilizara el proyecto
##	"Modules needed by the application"
##
#######################################################################################
# PROJECT_MODULES ?= version base math
PROJECT_MODULES ?= core chip driver

##
##
#######################################################################################
##
## Establecemos el listado de las librerias externas que utiliza el proyecto
##	"libraies needed by the application"
##
#######################################################################################
# PROJECT_LIBRARIES ?= pqxx pq

##
##
#######################################################################################
##
## Establecemos la ruta de donde tomara los modulos
##
#######################################################################################
MODULES_PATH := modules/$(DEVICES)

##
#######################################################################################
##
## Establecemos la ruta para cada modulo que usaremos
##	"Modules needed by the application"
##
#######################################################################################
PROJECT_MODULES_PATH := $(foreach VAR,$(PROJECT_MODULES),\
			$(MODULES_PATH)/$(VAR))


##
#######################################################################################
##
## Estabelcemos el "source files folder"
##
#######################################################################################
PROJECT_SRC_PATH := $(PROJECT)/src

##
#######################################################################################
##
## Estabelcemos el "header files folder"
##
#######################################################################################
PROJECT_INC_PATH := $(PROJECT)/inc $(addsuffix /inc,$(PROJECT_MODULES_PATH))

