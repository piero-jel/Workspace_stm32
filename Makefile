####################################################################################################################
## Do not edit this MAKEFILE file
## 2021, Luccioni Jesús Emanuel All rights reserved.
## Redistribution is not allowed with or without modification. 
## Use is permitted with prior authorization by the copyright holder.
####################################################################################################################
-include etc/version.mk
-include aplication.mk
-include configuration.mk

##
##
#######################################################################################
##
## BEGIN Definimos los directorios donde colocaremos los archivos compilados
##
#######################################################################################
OBJ_PATH := out/obj
APP_PATH := out/app
LIBS_PATH := out/lib



##
## END
#######################################################################################
##
## BEGIN incluimos el makefile del proyecto
##
#######################################################################################
include $(PROJECT)/Makefile
##
## END
#######################################################################################
##
## Definimos los simbolos para la compilacion
##
#######################################################################################
list_SYMBOLS = $(foreach VAR,$(PROJECT_MODULES),$($(VAR)_SYMBOLS))

# 
ifeq ($(MAKEFILE_VER),1)
SYMBOLS = -D__main_version__=$(main_version)
else ifeq ($(MAKEFILE_VER),2)
SYMBOLS = $(addprefix -D, $(main_SYMBOLS)) 
endif
SYMBOLS += $(addprefix -D, $(list_SYMBOLS))
#$(foreach VAR,$(PROJECT_MODULES),$(VAR)_SYMBOLS)
SYMBOLS += $(addprefix -D, $(SYMBOL_LIST))
SYMBOLS += $(addprefix -D, $(PROJECT_SYMBOLS))


##
##
#####################################################################################
# target all 
#####################################################################################
all: $(APP_NAME)

##
## -- incluimos los Makefile de cada modulo del cual depende el proyecto
include $(foreach VAR,$(PROJECT_MODULES_PATH), $(VAR)/Makefile)



 

##
#######################################################################################
##
## Estabelcemos el "list project source files {cpp,c,S|s}"
##
#######################################################################################
PROJECT_CPP_FILES = $(wildcard $(PROJECT_SRC_PATH)/*.cpp)
PROJECT_CC_FILES = $(wildcard $(PROJECT_SRC_PATH)/*.c)
PROJECT_AS_FILES = $(wildcard $(PROJECT_SRC_PATH)/*.$(AS_EXT))
## 
PROJECT_SRC_FILES += $(PROJECT_CPP_FILES)\
	$(PROJECT_CC_FILES)\
	$(PROJECT_AS_FILES) 

##
#######################################################################################
##
## Obtenemos los Object file del proyecto 
##
#######################################################################################
PROJECT_OBJ_FILES = $(addprefix $(OBJ_PATH)/,$(notdir $(PROJECT_CPP_FILES:.cpp=.o)))
PROJECT_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(PROJECT_CC_FILES:.c=.o)))
PROJECT_OBJ_FILES += $(addprefix $(OBJ_PATH)/,$(notdir $(PROJECT_AS_FILES:.$(AS_EXT)=.o)))
PROJECT_OBJS := $(notdir $(PROJECT_OBJ_FILES))

##
##
#####################################################################################
# 
#####################################################################################	
## Definimos el listado de directoris donde debe buscar
## Los header files
INCLUDES = -Iinclude $(addprefix -I,$(PROJECT_INC_PATH))
##
##
#####################################################################################
# 
#####################################################################################
vpath %.o $(OBJ_PATH)
vpath %.c $(PROJECT_SRC_PATH) $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_SRC_FOLDERS))
vpath %.cpp $(PROJECT_SRC_PATH) $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_SRC_FOLDERS))
vpath %.S $(PROJECT_SRC_PATH) $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_SRC_FOLDERS))
vpath %.a $(LIBS_PATH)

ifeq ($(MAKEFILE_VER),0)
define makemod
lib$(1).a: $(2)
	$(CMD_PRINT) "\n********************* Inicio del armado de la Libreria estatica : $(1) *********************"
	$(CMD_PRINT) "\tArgumentos 1 de ar : lib$(1).a "
	$(CMD_PRINT) "\tArgumentos 2 de ar : $(2)"
	$(AR) $(ARFLAGS) $(LIBS_PATH)/lib$(1).a $(addprefix $(OBJ_PATH)/,$(2))
	$(CMD_PRINT) 'Finished building: lib$(1).a'
	$(SIZE) -B $(LIBS_PATH)/lib$(1).a
	$(CMD_PRINT) "\n********************* Fin del armado de la Libreria estatica : $(1) *********************\n"	
endef
#
$(foreach MOD,$(PROJECT_MODULES),$(eval $(call makemod,$(MOD),$($(MOD)_OBJ_LIST))))
endif


ifeq ($(MAKEFILE_VER),1)
define make_name_mod
	$(CMD_PRINT) $(addsuffix _version, $(notdir $(1:.$2=)))\
	" = " $($(addsuffix _version__, $(addprefix __,$(notdir $(1:.$2=)))))
endef
else ifeq ($(MAKEFILE_VER),2)

define make_name_mod
	$(CMD_PRINT) $(addsuffix _version__, $(addprefix __,$(notdir $(1:.$2=))))\
	" = " $($(addsuffix _version__, $(addprefix __,$(notdir $(1:.$2=)))))
endef
endif

##
##
#####################################################################################
# Creamos todos los Archivos objetos necesarios, compilamos sin llamar al linker
#####################################################################################
ifeq ($(MAKEFILE_VER),0)
%.o : %.cpp
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C++ file $< ]=========="
	$(CPP) $(SYMBOLS) $(CPPFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CPP) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -MM > $(OBJ_PATH)/$(@:.o=.d)
	$(CMD_PRINT) "==========[ END, compiling C++ file $< ]==========\n"

%.o: %.c
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C file $< ]=========="
	$(CC) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CC) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -MM > $(OBJ_PATH)/$(@:.o=.d)
	$(CMD_PRINT) "==========[ END, compiling C file $< ]==========\n"

%.o: %.S
	$(CMD_PRINT) "\n==========[ BEGIN, compiling assembler file $< ]=========="
	$(AS) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	@$(AS) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -MM > $(OBJ_PATH)/$(@:.o=.d)
	$(CMD_PRINT) "==========[ END, compiling assembler file $< ]==========\n"

else ifeq ($(MAKEFILE_VER),1)
%.o : %.cpp
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C++ file $< ]=========="
	$(CPP) $(SYMBOLS) $(CPPFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling C++ file $< ]==========\n"

%.o: %.c
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C file $< ]=========="
	$(CC) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling C file $< ]==========\n"

%.o: %.S
	$(CMD_PRINT) "\n==========[ BEGIN, compiling assembler file $< ]=========="
	$(AS) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling assembler file $< ]==========\n"
	
else ifeq ($(MAKEFILE_VER),2)
%.o : %.cpp
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C++ file $< ]=========="
	$(call make_name_mod,$<,c++)
	$(CPP) $(SYMBOLS) $(CPPFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling C++ file $< ]==========\n"

%.o: %.c
	$(CMD_PRINT) "\n==========[ BEGIN, compiling C file $< ]=========="
	$(call make_name_mod,$<,c)
	$(CC) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling C file $< ]==========\n"

%.o: %.S
	$(CMD_PRINT) "\n==========[ BEGIN, compiling assembler file $< ]=========="
	$(call make_name_mod,$<,S)
	$(AS) $(SYMBOLS) $(ASFLAGS) $(INCLUDES) -c $< -o $(OBJ_PATH)/$@
	$(CMD_PRINT) "==========[ END, compiling assembler file $< ]==========\n"
else


endif

ifeq ($(MAKEFILE_VER),0)
$(APP_NAME): $(foreach MOD,$(PROJECT_MODULES),lib$(MOD).a) $(PROJECT_OBJS)
	$(CMD_PRINT) "\n===========[BEGIN, compiling: \"$(PROJECT)\", ver: "$(main_version)"]=========="
	$(CC) $(LDFILE) $(LDFLAGS) -o $(APP_PATH)/$(APP_NAME)$(APPEXT) $(PROJECT_OBJ_FILES)\
	-L $(LIBS_PATH) $(addprefix -l,$(PROJECT_MODULES)) $(addprefix -l, $(PROJECT_LIBRARIES)) \
	$(addprefix -L, $(LIBRARY_EXT_PATH)) $(addprefix -l,$(LIBRARY_EXT))
	$(CMD_PRINT) "\nTamaño del archivo ejecutable formato:" $(SIZE_FORMAT)
	$(SIZE) $(SIZEFLAGS) $(APP_PATH)/$(APP_NAME)$(APPEXT)
	$(SIZE) -B $(APP_PATH)/$(APP_NAME)$(APPEXT)
	@$(OBJCOPY) -v -O binary $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).bin
	@$(OBJCOPY) -O ihex $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).hex
	$(CMD_PRINT) "===========[END, compiling: \"$(PROJECT)\"]==========\n"
	
else ifeq ($(MAKEFILE_VER),1)
$(APP_NAME): $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_OBJ_LIST)) $(PROJECT_OBJS)
	$(CMD_PRINT) "\n===========[BEGIN, compiling: \"$(PROJECT)\", ver: "$(main_version)"]=========="
	$(CC) $(LDFLAGS) $(LDFILE) -o $(APP_PATH)/$(APP_NAME)$(APPEXT) \
	$(foreach MOD,$(PROJECT_MODULES),$(addprefix $(OBJ_PATH)/,$($(MOD)_OBJ_LIST))) \
	$(addprefix $(OBJ_PATH)/,$(PROJECT_OBJS))\
	$(addprefix -L, $(LIBRARY_EXT_PATH)) $(addprefix -l,$(LIBRARY_EXT))
	$(CMD_PRINT) "\nTamaño del archivo ejecutable formato:" $(SIZE_FORMAT)
	$(SIZE) $(SIZEFLAGS) $(APP_PATH)/$(APP_NAME)$(APPEXT)
	$(CMD_PRINT) "\nTamaño del archivo ejecutable, __main_version__ = "$(main_version)
	$(SIZE) -B $(APP_PATH)/$(APP_NAME)$(APPEXT)
	@$(OBJCOPY) -v -O binary $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).bin
	@$(OBJCOPY) -O ihex $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).hex
	$(CMD_PRINT) "===========[END, compiling: \"$(PROJECT)\"]==========\n"
	
else ifeq ($(MAKEFILE_VER),2)
$(APP_NAME): $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_OBJ_LIST)) $(PROJECT_OBJS)
	$(CMD_PRINT) "\n===========[BEGIN, compiling: \"$(PROJECT)\", ver: "$(__main_version__)"]=========="
	$(CC) $(LDFLAGS) $(LDFILE) -o $(APP_PATH)/$(APP_NAME)$(APPEXT) \
	$(foreach MOD,$(PROJECT_MODULES),$(addprefix $(OBJ_PATH)/,$($(MOD)_OBJ_LIST))) \
	$(addprefix $(OBJ_PATH)/,$(PROJECT_OBJS))\
	$(addprefix -L, $(LIBRARY_EXT_PATH)) $(addprefix -l,$(LIBRARY_EXT))
	$(CMD_PRINT) "\nTamaño del archivo ejecutable formato:" $(SIZE_FORMAT)
	$(SIZE) $(SIZEFLAGS) $(APP_PATH)/$(APP_NAME)$(APPEXT)
	$(CMD_PRINT) "\nTamaño del archivo ejecutable, __main_version__ = "$(__main_version__)
	$(SIZE) -B $(APP_PATH)/$(APP_NAME)$(APPEXT)
	@$(OBJCOPY) -v -O binary $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).bin
	@$(OBJCOPY) -O ihex $(APP_PATH)/$(APP_NAME)$(APPEXT) $(APP_PATH)/$(APP_NAME).hex
	$(CMD_PRINT) "===========[END, compiling: \"$(PROJECT)\"]==========\n"

else ifeq ($(MAKEFILE_VER),3)
else
$(APP_NAME): 
	$(CMD_PRINT) "\n===========[BEGIN, compiling: \"$(PROJECT)\", ver: "$(main_version)"]=========="
	$(CMD_PRINT) "MAKEFILE_VER: "$(MAKEFILE_VER) " Definida de forma Incorreta"
	$(CMD_PRINT) "===========[END, compiling: \"$(PROJECT)\"]==========\n"
endif
##
##
#####################################################################################
# target info, print info sobre la configuracion actual 
#####################################################################################
info:
	$(CMD_PRINT) "\n"
	$(CMD_PRINT) "\t APP_NAME:" $(APP_NAME) 
	$(CMD_PRINT) "\t MAKEFILE_VER:" $(MAKEFILE_VER)
	$(CMD_PRINT) "\t PROJECT_SRC_FILES:" $(PROJECT_SRC_FILES) 
	$(CMD_PRINT) "\t source_file:" $(source_file) 	
	$(CMD_PRINT) "\t INCLUDES:" $(INCLUDES) 
	$(CMD_PRINT) "\t OBJ_PATH:" $(OBJ_PATH) 
	$(CMD_PRINT) "\t APP_PATH:" $(APP_PATH) 
	$(CMD_PRINT) "\t PROJECT_OBJ_FILES:" $(PROJECT_OBJ_FILES)
	$(CMD_PRINT) "\t PROJECT_OBJS:" $(PROJECT_OBJS) 
	$(CMD_PRINT) "\t Compiladores CCPP,CC,ASC:" $(CPP)"\t"$(CC)"\t"$(AS)
	$(CMD_PRINT) "\t PROJECT_CPP_FILES:" $(PROJECT_CPP_FILES) 
	$(CMD_PRINT) "\t PROJECT_CC_FILES:" $(PROJECT_CC_FILES) 
	$(CMD_PRINT) "\t PROJECT_AS_FILES:" $(PROJECT_AS_FILES) 
	$(CMD_PRINT) "\t PROJECT_SRC_FOLDERS:" $(PROJECT_SRC_FOLDERS)
	$(CMD_PRINT) "\t SYMBOLS:" $(patsubst -D%,"  "%,$(SYMBOLS)) "\n"
##
##
#####################################################################################
# target clean, limpiar los directorios de compilacion
#####################################################################################
clean:
	$(CMD_CLEAN) $(OBJ_PATH)/*.*
	$(CMD_CLEAN) $(LIBS_PATH)/*.*
	$(CMD_CLEAN) $(APP_PATH)/$(APP_NAME).hex
	$(CMD_CLEAN) $(APP_PATH)/$(APP_NAME).bin
	$(CMD_CLEAN) $(APP_PATH)/$(APP_NAME)$(APPEXT)
	$(CMD_CLEAN) out/map/$(APP_NAME).map
	$(CMD_PRINT) "Archivos Borrados de Forma Sastifactoria"
##
##
#####################################################################################
# target new, limpiar y recostruye el proyecto
#####################################################################################	
new: clean all


debug: $(foreach MOD,$(PROJECT_MODULES), $(MOD)_DEBUG)
	$(CMD_PRINT) "\n==========[ begin, main debug ]=========="
	$(CMD_PRINT) "list_SYMBOLS:" $(list_SYMBOLS) 
	$(CMD_PRINT) "MAKEFILE_VER:" $(MAKEFILE_VER)
	$(CMD_PRINT) "PROJECT: " $(PROJECT)
	$(CMD_PRINT) "CCFLAGS: " $(CCFLAGS)
	$(CMD_PRINT) "ASFLAGS: " $(ASFLAGS)
	$(CMD_PRINT) "main_version: " $(main_version)
	$(CMD_PRINT) "LIBRARY: $(PROJECT_MODULES)"
	$(CMD_PRINT) "PROJECT_LIBRARIES: $(PROJECT_LIBRARIES)"
	$(CMD_PRINT) "SYMBOLS: $(SYMBOLS)"
	$(CMD_PRINT) "INCLUDES: "  $(INCLUDES)
	$(CMD_PRINT) "objets files project: $(foreach MOD,$(PROJECT_MODULES),$($(MOD)_OBJ_LIST)) $(PROJECT_OBJS)"
	$(CMD_PRINT) "==========[ end, main debug ]==========\n"
	$(CMD_PRINT) "main_SYMBOLS = " $(main_SYMBOLS)
# 	$(CMD_PRINT) "/cygdrive/c/Documents and Settings/jluccioni/Desktop/libpq/0W-Workspace_01"


download: # clean all
	$(CMD_PRINT) "\n\t Downloading $(PROJECT_NAME).bin to $(DEV_MEM_LAYER), through stm32flash"
	$(DOWNLOAD) $(DOWNLOADFLAGS) $(APP_PATH)/$(APP_NAME).hex $(DOWNLOADPORT)
# 	stm32flash -w ./$(OUT_PATH)/$(PROJECT_NAME).hex -R /dev/ttyUSB0

help:
	$(CMD_PRINT) "\n==========[ begin, help and target ]=========="
	$(CMD_PRINT) "make   \t \t: compila el proyecto, solo  contemplamdo los ultimos cambios. \n\t\t  Si otros modulos dependen de este no es aconsejable usar este target"
	$(CMD_PRINT) "make all\t: Idem al anterior \"make\""
	$(CMD_PRINT) "make new\t: Este borra todos los archivos compilados y recompila  \n\t\t  todo el proyecto desde el inicio"
	$(CMD_PRINT) "make clean\t: Limpia todos los directorios donde genera los archivos \n\t\t  de de compilacion, para poder compilar desde cero"
	$(CMD_PRINT) "make info\t: imprime informacion resumida del Workspace_01"
	$(CMD_PRINT) "make debug\t: imprime informacion detallada para depurar la compilacion del proyecto"
	$(CMD_PRINT) "\n==========[ End, help and target ]=========="
