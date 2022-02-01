# Contenido
* [Seleccionando el Proyecto](#seleccionando-el-proyecto)
* [Proyectos disponibles](#proyectos-disponibles)
* [Estableciendo el nombre del Ejecutable](#estableciendo-el-nombre-del-ejecutable)
* [Compilando y corriendo el proyecto seleccionado](#compilando-y-corriendo-el-proyecto-seleccionado)
* [Configuracion](#configuracion)
* [Requirements](#requirements)
* [Install cross compiler](#install-cross-compiler)
* [Local Setup and Running on Windows, Linux and Mac OS](#local-setup-and-running-on-windows,-linux-and-mac-os)
* [Arbol jeraquico del Proyecto](#arbol-jeraquico-del-proyecto)



# Seleccionando el Proyecto
Dentro del archivo **aplication.mk** debemos establecer la variable **PROJECT = __path/folder_project__**. 

- Por ejemplo:
~~~  
  PROJECT = projects/project_fsm_01
  #PROJECT = projects/freertos_prj_001
~~~
~~~
  #PROJECT = projects/project_fsm_01
  PROJECT = projects/freertos_prj_001
~~~
## Proyectos disponibles:  
  1. project_fsm_01 [project_fsm_01](./projects/project_fsm_01/readme.md)
    
  2. freertos_prj_001 [freertos_prj_001](./projects/freertos_prj_001/readme.md)

 
## Estableciendo el nombre del Ejecutable
  Dentro del archivo [**aplication.mk**](./aplication.mk) debemos establecer la variable **APP_NAME ?= Name.extension**.
  
  La extension dependera de loader para el microncontrolador para sistemas genericos podemos colocar __hex__, o para sistemas mas avanzadso __elf__
  
  
## Compilando y corriendo el proyecto seleccionado:
  ~~~
  make new
  ~~~
  ~~~
  make run
  ~~~
  ~~~
  make download
  ~~~
## Configuracion

To run this app, you will need to follow these 3 steps:

# Requirements
  - a Laptop

  - Text Editor or IDE (eg. [vscode](https://code.visualstudio.com/download), [kate](https://kate-editor.org/es/), [vi/vim](https://www.vim.org/download.php)), [eclipse CDT](https://www.eclipse.org/downloads/)
  - [Git Bash Windows](https://git-scm.com/downloads)
  - [Git Command in Linux](https://git-scm.com/book/en/v2/Getting-Started-The-Command-Line)
  
    * opt 1
    ~~~
      sudo apt-get update && sudo apt-get upgrade -y          
      sudo apt-get install git
    ~~~
    
    * opt 2
    ~~~
      sudo apt update && sudo apt upgrade -y          
      sudo apt install git
    ~~~

# Install cross compiler
  
  - [Linux ARM-Platform](https://platformio.org/platforms/linux_arm) 
  ~~~
    sudo apt update && sudo apt upgrade -y
    sudo apt-get install gcc-arm-none-eabi -y
    sudo apt-get install stm32flash -y
    sudo apt-get install openocd -y
    sudo apt install crossbuild-essential-armhf
    sudo apt install crossbuild-essential-arm64
  ~~~
  
  
  * others tools
  ~~~
    sudo apt-get install -y build-essential
    sudo apt-get install -y libc6-armhf-cross
    sudo apt-get install -y libc6-dev-armhf-cross
    sudo apt-get install -y binutils-arm-linux-gnueabihf
    sudo apt-get install -y linux-libc-dev-armhf-cross
    sudo apt-get install -y libstdc++6-armhf-cross
    sudo apt-get install -y gdb-multiarch
  ~~~
  
  - Linux mingw, windows executables:
  ~~~
    sudo apt-get install mingw-w64
  ~~~
  
  - [Windows - CyG Win](https://www.cygwin.com/setup-x86_64.exe) installers.
  
  
# Local Setup and Running on Windows, Linux and Mac OS

  - Crating new directory, optional
  ~~~
    mkdir workspaces
  ~~~
  
  - Move to the new directory, optional
  ~~~
    cd ./workspaces
  ~~~
  
  - Clone this repository into the directory of your choice
  ~~~
    git clone https://github.com/piero-jel/Workspace_stm32.git
  ~~~

  - Move into project folder
  ~~~
    cd ./Workspace_stm32
  ~~~

  - Test workspace
  ~~~
    make help
    make new
  ~~~
  

# Arbol jeraquico del Proyecto
~~~ 
  ./
  │
  ├─> aplicaction.mk
  ├─> configuration.mk
  ├─> Makefile "reglas de compilacion principal"
  ├─> readme.md "este archivo"
  ├─> etc
  │   ───
  │   │
  │   ├─> ld "Donde colgamos los linker script"
  │   │   ──
  │   │   │
  │   │   └─>stm32f10xxx
  │   │      ───────────
  │   │         │
  │   │         ├─> stm32f103x8.ld
  │   │         ├─> stm32f103x8_lib.ld
  │   │         └─> stm32f103x8_mem.ld
  │   │
  │   └─> version.mk
  ├─> modules
  │   ───────
  │     │
  │     └─> stm32f10xxx
  │         ───────────
  │            │
  │            ├─> chip
  │            │   ────
  │            │    │
  │            │    ├─> src {*.c/*.S}
  │            │    ├─> inc {*.h}
  │            │    └─> Makefile "Reglas para copilar solo el modulo"
  │            ├─> core
  │            │   ────
  │            │    │
  │            │    ├─> src {*.c/*.S}
  │            │    ├─> inc {*.h}
  │            │    └─> Makefile
  │            ├─> devstdio
  │            │   ────────
  │            │    │
  │            │    ├─> src {*.c/*.S}
  │            │    ├─> inc {*.h}
  │            │    └─> Makefile
  │            ├─> freertos
  │            │   ────────
  │            │    │
  │            │    ├─> src {*.c/*.S}
  │            │    ├─> inc {*.h}
  │            │    └─> Makefile
  │            ├─> lcd
  │            │   ───
  │            │    │
  │            │    ├─> src {*.c/*.S}
  │            │    ├─> inc {*.h}
  │            │    └─> Makefile
  │            └─> switch
  │                ──────
  │                 │
  │                 ├─> src {*.c/*.S}
  │                 ├─> inc {*.h}
  │                 └─> Makefile
  │          
  ├─> out
  │   ───
  │   │
  │   ├─> app
  │   │   ───
  │   │    │   
  │   │    ├─> <APP_NAME>.bin
  │   │    ├─> <APP_NAME>.elf
  │   │    └─> <APP_NAME>.hex
  │   ├─> lib "no esta en uso actualmente"
  │   │   ───
  │   ├─> map "Donde colgaremos el mapa de memoria"
  │   │   ───
  │   │    │
  │   │    └─> <APP_NAME>.map
  │   ├─> obj "Donde colgaremos los Object files de todos los sources files {*.c/*.S}"
  │   │   ───
  │   │    │
  │   │    ├─> {*.d}
  │   │    └─> {*.o}
  │   │          
  └─> projects "Directorio donde colocamos el proyecto"
      ────────
      │
      ├─> project_001
      │   ───────────
      │     │
      │     ├─> src
      │     │   ───
      │     │    │
      │     │    ├─> main.c 
      │     │    └─> {*.c}
      │     ├─> inc
      │     │   ───
      │     │    │
      │     │    ├─> main.h
      │     │    └─> {*.h}     
      │     └─> Makefile "reglas de configrua solo al proyecto"     
      ├─> freertos_prj_001
      │   ────────────────
      │     │
      │     ├─> src
      │     │    │
      │     │    ├─> main.c 
      │     │    ├─> syscalls.c
      │     │    └─> {*.c}
      │     ├─> inc
      │     │    │
      │     │    ├─> main.h
      │     │    ├─> FreeRTOSConfig.h
      │     │    └─> {*.h}     
      │     └─> Makefile "reglas de configrua solo al proyecto"
      ├─> other
      │     │
      │     ├─> src
      │     │   ───
      │     │    │
      │     │    ├─> main.c 
      │     │    └─> {*.c}
      │     ├─> inc
      │     │   ───
      │     │    │
      │     │    ├─> main.h
      │     │    └─> {*.h}   
      │     └─> Makefile "reglas de configrua solo al proyecto"
~~~ 
 
# Descripcion de los Archivos
## I)- aplicaction.mk 
Lo primero que nos permite establecer es que proyecto debe compilar, el nombre que le daremos al mismo.
Tambien contiene la configuracion para compilar el proyecto seleccionado, determinar el microncontrolador los diferentes flags de compilacion y enlazado. La versiones para ciertos modulos, en caso de ser necesario. 
No se aconseja modificar la variable MAKEFILE_VER, esta debe permacer con el valor '1'
        
## II)- configuration.mk
Este archivo nos permite establecer que compilador utilizaremos como asi tambien demas comandos necesarios para construir el proyecto. Incluyendo los comandos para descargar el archivo binario al microncontrolador, con sus respectivos FLAGS.
    
## III)- Makefile
Este es el mekefile principal del espacio de trabajo, este no debe ser modificado, al menos que se desean cambios drasticos en la operacion de compilacion. 

Para obtenes mas informacion sobre el alcance del mismo podemos teclear desde una consola dentro del directorio principal del workspace :
  - make help : muestra el mensaje de ayuda.
  - make : compila el proyecto, solo  contemplamdo los ultimos cambios. Si otros modulos dependen de este no es aconsejable usar este target
  - make all : Idem al anterior "make"
  - make new : Borra todos los archivos resultado de la compilacion y recompila todo el proyecto desde el inicio
  - make clean : Limpia todos los directorios donde genera los archivos de compilacion, para poder compilar desde cero
  - make info : imprime informacion resumida del **Workspace**
  - make debug : imprime informacion detallada para depurar la compilacion del proyecto
        
## IV)- Eclipse :
    En caso de Importar el workspace en eclipse debemos considerar agregar en:
~~~    
  Project
  ───────
    │
    └─> Properties
        ──────────
          │
          └─> Paths And Symbols 
                {solapa includes}
                  ────── ────────
                    │
                    ├─> Asembly  {add}
                    │              │
                    │              ├─> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/sys/
                    │              └─> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/
                    │ 
                    └─> GNU C  {add}
                                │
                                ├─> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/sys/
                                └─> $(PATH_ETC)/opt/gcc-arm-none-eabi/arm-none-eabi/include/
~~~

**path example**: PATH_ETC := /home/*Username*/eclipseARM, Este depende de la ubicacion donde descargamos y descomprimimos la version de *arm-none-eabi-gcc*.

![GNU Arm Embedded Toolchain Downloads] (https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
