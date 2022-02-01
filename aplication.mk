#####################################################################################
# BEGIN Definimos el proyecto a compilar
#####################################################################################
# PROJECT = projects/project_001
PROJECT = projects/project_fsm_01
# PROJECT = projects/freertos_prj_001


##
## END
#####################################################################################
# BEGIN Establecemos la version del Makefile que utilizaremos
#####################################################################################
# MAKEFILE_VER ?= 0hbnb
MAKEFILE_VER ?= 2
##
## END
#####################################################################################
## BEGIN Definimos el nombre para la App
#####################################################################################
#APP_NAME = $(notdir $(PROJECT))
APP_NAME ?= app
# ARGS ?=
##
## END
#####################################################################################
# BEGIN Definimos la version para cada modulo que usaremos en el proyecto
#####################################################################################
# main_version ?= $(ver_01v0d1)
# main_version = $(ver_01v0d0)
__main_version__ = $(ver_01v0d0) 

##
## END
#####################################################################################
# BEGIN
# Definimos los modulos que usaremos en el proyecto, si es que el mismo 
# no se definio en el Makefile del proyecto.
# Cada proyecto en su Makefile debe tener definida esta variable, solo para
# depuracion del proyecto la definimos desde aqui.
#####################################################################################

# PROJECT_MODULES = core chip driver

##
## END
#####################################################################################
# BEGIN Definimos el tipo de dispositivo
#####################################################################################
DEVICES :=stm32f10xxx
FAMILY := STM32F10X_MD
DEV_MEM_LAYER := stm32f103x8

#SYMBOL_LIST:= STM32F10X_MD HSE_VALUE=8000000 NDEBUG USE_STDPERIPH_DRIVER
SYMBOL_LIST := CORE_M3 __USE_CMSIS __CODE_RED \
               $(FAMILY) USE_STDPERIPH_DRIVER __ARM_ARCH_7M__ HSE_VALUE=8000000 _REENT_ONLY
GDB_DEBUG := NO





ifeq ($(MAKEFILE_VER),0)
# -Xlinker -Map=out/map/$(APP_NAME).map
LDFLAGS := -nostdlib -fno-builtin -mcpu=cortex-m3 -mthumb -Xlinker -Map=out/map/$(APP_NAME).map -Wl,--gc-sections
# LDFLAGS := -nostdlib 
# LDFILE := -Tetc/ld/$(DEVICES)/stm32f103r8.ld
# LDFLAGS := -Os -Wl,--gc-sections -mcpu=cortex-m3 -Wl,-Map,out/map/$(APP_NAME).map
LDFILE := -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_lib.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_mem.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER).ld

else ifeq ($(MAKEFILE_VER),1)
LDFLAGS := -nostdlib -fno-builtin -mcpu=cortex-m3 -mthumb -Xlinker -Map=out/map/$(APP_NAME).map -Wl,--gc-sections
# LDFLAGS := -nostdlib 
LDFILE := -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_lib.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_mem.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER).ld

else ifeq ($(MAKEFILE_VER),2)
##Makefile del modulo gpio no definido para MAKEFILE_VER: "$(MAKEFILE_VER)
LDFLAGS := -nostdlib -fno-builtin -mcpu=cortex-m3 -mthumb -Xlinker -Map=out/map/$(APP_NAME).map -Wl,--gc-sections
# LDFLAGS := -nostdlib 
LDFILE := -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_lib.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER)_mem.ld \
           -Tetc/ld/$(DEVICES)/$(DEV_MEM_LAYER).ld

else ifeq ($(MAKEFILE_VER),3)
else
	## "MAKEFILE_VER: "$(MAKEFILE_VER) " Definido de forma Incorreta"

endif

##
## END
#####################################################################################
# BEGIN Establecemos el listado de librerias esternas que usaremos
#####################################################################################
	# 
	#
# LIBRARY_EXT = 
# LIBRARY_EXT_PATH = 
##


ifeq ($(GDB_DEBUG),YES)
#arm-none-eabi-g++ -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections 
#-ffreestanding -Wall -Wextra  -g -T mem.ld -T libs.ld -T sections.ld -nostartfiles 
# -Xlinker --gc-sections -L"../ldscripts" -Wl,-Map,"STM3210x_example_02.map" --specs=nano.specs -o "STM3210x_example_02.elf" $(OBJS) $(USER_OBJS) $(LIBS)
#CFLAGS := -mcpu=cortex-m3 -mthumb -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -Wall -Wextra  -g -nostartfiles 

## opt 2
#CFLAGS := -c -march=armv7-m -mcpu=cortex-m3 -mthumb -fno-common -nostdlib -fno-builtin -ffreestanding -Wall -O0 -g

# -c -g -Os -w -std=gnu11 -MMD -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -mcpu=cortex-m3 -mthumb -march=armv7-m

CCFLAGS := -Wall -ggdb3 -mcpu=cortex-m3 -mthumb -fdata-sections -ffunction-sections
SYMBOLS += -DDEBUG
else
# CCFLAGS := -Wall -mcpu=cortex-m3 -mthumb -fdata-sections -ffunction-sections -c
# CCFLAGS := -c -g -Os -w -std=gnu11 -MMD -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -mcpu=cortex-m3 -mthumb -march=armv7-m
CCFLAGS := -c -g -w -std=gnu11 -MMD -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -mcpu=cortex-m3 -mthumb -march=armv7-m
SYMBOLS = -DNDEBUG
endif

ASFLAGS = $(CCFLAGS)

##
## END
