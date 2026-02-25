# UNO Game - Proyecto en C++

##  Descripción

Este proyecto implementa una versión simplificada del juego UNO en consola,
desarrollado en C++ utilizando programación orientada a objetos y estructuras
de datos dinámicas como listas enlazadas y listas circulares.

El juego permite múltiples jugadores y gestiona los turnos de manera circular
hasta que uno de los jugadores se queda sin cartas.


## Requisitos

- Compilador compatible con C++ (g++)
- GNU Make
- Sistema operativo:
  - Windows
  - Linux

#  Compilación y Ejecución

## En Windows (VS Code + MinGW / MSYS2)

1. Abrir la carpeta del proyecto en VS Code.
2. Asegurarse de usar la terminal de MinGW/MSYS2 (no CMD puro).
3. Verificar que g++ y make estén instalados:

   g++ --version
   make --version

4. Compilar el proyecto:

   make

   Esto generará el archivo:

   uno.exe

5. Ejecutar el programa:

   make run

   O bien haciendo doble click en el archivo uno.exe.
   
##  En Linux

1. Abrir una terminal en la carpeta del proyecto.
2. Instalar herramientas necesarias si no están instaladas:

   sudo apt install build-essential

3. Compilar:

   make

   Esto generará el ejecutable:

   uno

4. Ejecutar:

   make run

   O manualmente:

   ./uno

#  Limpiar Archivos Generados

Para eliminar el ejecutable generado:

make clean

# Estructura del Proyecto

- Carta.cpp / Carta.h  
- Jugador.cpp / Jugador.h  
- Mazo.cpp / Mazo.h  
- ListaCircularJugadores.cpp / ListaCircularJugadores.h  
- NodoCarta.cpp / NodoJugador.cpp  
- Juego.cpp / Juego.h  
- main.cpp  
- Makefile  

# Estructuras de Datos Utilizadas

- Lista enlazada simple (para cartas del mazo y mano del jugador)  
- Lista enlazada circular (para control de turnos)  
- Arreglo estático auxiliar (utilizado en el barajado del mazo)  

# Notas

- El juego corresponde a una versión simplificada de UNO.
- No incluye reglas avanzadas (cartas especiales acumulativas).
- Utiliza memoria dinámica para la gestión de estructuras.
- Es compatible con Windows y Linux.

## María Pérez 

Proyecto desarrollado como práctica académica de estructuras de datos.