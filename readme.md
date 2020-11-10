    __ Arbol jeraquico del Proyecto __
    etc
    ~~~
     |
     +-> ld "Donde colgamos los linker script"
     |   ~~
     |   |
     |   +->stm32f10xxx
     |      ~~~~~~~~~~~
     |         |
     |         +-> stm32f103x8.ld
     |         +-> stm32f103x8_lib.ld
     |         +-> stm32f103x8_mem.ld
     |
     +-> version.mk
    modules
    ~~~~~~~
     |
     +-> stm32f10xxx
     |   ~~~~~~~~~~~
     |      |
     |      +-> chip
     |      |   ~~~~
     |      |    |
     |      |    +-> src {*.c/*.S}
     |      |    +-> inc {*.h}
     |      |    +-> Makefile "Reglas para copilar solo el modulo"
     |      +-> core
     |      |   ~~~~
     |      |    |
     |      |    +-> src {*.c/*.S}
     |      |    +-> inc {*.h}
     |      |    +-> Makefile
     |      +-> devstdio
     |      |   ~~~~~~~~
     |      |    |
     |      |    +-> src {*.c/*.S}
     |      |    +-> inc {*.h}
     |      |    +-> Makefile
     |      +-> freertos
     |      |   ~~~~~~~~
     |      |    |
     |      |    +-> src {*.c/*.S}
     |      |    +-> inc {*.h}
     |      |    +-> Makefile
     |      +-> lcd
     |      |   ~~~
     |      |    |
     |      |    +-> src {*.c/*.S}
     |      |    +-> inc {*.h}
     |      |    +-> Makefile
     |      +-> switch
     |          ~~~~~~
     |           |
     |           +-> src {*.c/*.S}
     |           +-> inc {*.h}
     |           +-> Makefile
     |      
    out
    ~~~
     |
     +-> app
     |   ~~~
     |    |   
     |    +-> <APP_NAME>.bin
     |    +-> <APP_NAME>.elf
     |    +-> <APP_NAME>.hex
     +-> lib "no esta en uso actualmente"
     |   ~~~
     +-> map "Donde colgaremos el mapa de memoria"
     |   ~~~
     |    |
     |    +-> <APP_NAME>.map
     +-> obj "Donde colgaremos los Object files de todos los sources files {*.c/*.S}"
     |   ~~~
     |    |
     |    +-> {*.d}
     |    +-> {*.o}
     |          
    projects "Directorio donde colocamos el proyecto"
    ~~~~~~~~
     |
     +-> project_001
     |   ~~~~~~~~~~~
     |     |
     |     +-> src
     |     |   ~~~
     |     |    |
     |     |    +-> main.c 
     |     |    +-> {*.c}
     |     +-> inc
     |     |   ~~~
     |     |    |
     |     |    +-> main.h
     |     |    +-> {*.h}     
     |     +-> Makefile "reglas de configrua solo al proyecto"     
     +-> freertos_prj_001
     |   ~~~~~~~~~~~~~~~~
     |     |
     |     +-> src
     |     |    |
     |     |    +-> main.c 
     |     |    +-> syscalls.c
     |     |    +-> {*.c}
     |     +-> inc
     |     |    |
     |     |    +-> main.h
     |     |    +-> FreeRTOSConfig.h
     |     |    +-> {*.h}     
     |     +-> Makefile "reglas de configrua solo al proyecto"     
    aplicaction.mk
    configuration.mk
    Makefile "reglas de compilacion principal"
    readme.md "este archivo"
    
    __I)- aplicaction.mk__ : Lo primero que nos permite establecer es que proyecto debe compilar, el nombre que le daremos al mismo.
    Tambien contiene la configuracion para compilar el proyecto seleccionado, determinar el microncontrolador los diferentes flags de compilacion y enlazado. La versiones para ciertos modulos, en caso de ser necesario. 
    No se aconseja modificar la variable MAKEFILE_VER, esta debe permacer con el valor '1'
        
    __II)- configuration.mk__ : este archivo nos permite establecer que compilador utilizaremos como asi tambien demas comandos necesarios para construir el proyecto. Incluyendo los comandos para descargar el archivo binario al microncontrolador, con sus respectivos FLAGS.
    
    __III)- Makefile__ : este es el mekefile principal del espacio de trabajo, este no debe ser modificado, al menos que se desean cambios drasticos en la operacion de compilacion. 
    Para obtenes mas informacion sobre el alcance del mismo podemos teclear desde una consola dentro del directorio principal del workspace :
        - make help
    __IV)- Eclipse__:
    En caso de Importar el workspace en eclipse debemos considerar agregar en:
           *Project*
            ~~~~~~~
              |
              +->*Properties*
                  ~~~~~~~~~~
                    |
                    +->*Paths And Symbols*
                          {solapa includes}
                           ~~~~~~ ~~~~~~~~
                             |
                             +->*Asembly* {add}
                             |              |
                             |              +-> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/sys/
                             |              +-> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/
                             | 
                             +->*GNU C* {add}
                                          |
                                          +-> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/sys/
                                          +-> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/
                             
    **path example**: PATH_ETC := /home/jel/eclipseARM, Este depende de la ubicacion donde descargamos el y descomprimimos la version de *arm-none-eabi-gcc*.
    **page**: https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads
