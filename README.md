
# Sistema de Gestión de Jugadores del Cruz Azul (POO en C++).
Este programa fue creado para practicar los fundamentos de POO, usando un ejemplo cercano y fácil de entender: los jugadores del equipo Cruz Azul.

Aquí se puede registrar diferentes jugadores según su posición —porteros, defensas, mediocampistas y delanteros— y almacenar información básica como su nombre, dorsal y estadísticas individuales (goles, pases, atajadas o balones bloqueados).

Este proyecto es una base sólida que seguirá creciendo durante el semestre conforme se introduzcan nuevos temas de POO.
## Sobre Mi
Autor: Juan Pablo Romero Anaya
Carrera: Ingeniería en Tecnologías Computacionales (ITC)
Campus: Tecnológico de Monterrey, Querétaro
Fecha: 12/11/2025 - 5/12/2025

## Propósito del Programa

El Sistema de Gestión de Jugadores del Cruz Azul busca resolver una problemática común al aprender POO:

## Algoritmo (12/11/2025)
        1. Mostrar un mensaje que pida al usuario seleccionar una opción del menú.

        2. Preguntar qué tipo de jugador desea registrar:

            Portero

            Defensa

            Medio

            Delantero

        3. Verificar que la opción elegida sea válida; si no, mostrar error.

        4. Solicitar cuántos jugadores se registrarán (máximo dependiendo de la posición).

        5. Crear un arreglo de objetos de la clase correspondiente.

        6. PARA cada jugador:

            Pedir el nombre

            Pedir el dorsal

            Pedir la estadística específica según la posición

            Guardar estos datos con los setters


        7. Mostrar los datos de cada jugador con el método mostrarinfo().

        FIN
## Archivos .h personalizados (clases) 
Se incluyen archivos como:

portero.h

defensas.h

medios.h

delanteros.h.

## Instrucciones de Ejecución
    1. Asegúrate de tener instalado un compilador de C++ (g++, clang o MinGW).

    2. Guarda los archivos en una misma carpeta:

        CRUZAZUL.cpp (main)

        portero.h

        defensas.h

        medios.h

        delanteros.h

    3. Abre tu terminal y navega a esa carpeta.

    4. Compila el programa con:

        g++ CRUZAZUL.cpp -o cruzazul


    5. Ejecuta el programa:
        ./cruzazul
    
    6. Sigue las instrucciones del menú para registrar jugadores.

## ¿Para qué SÍ sirve este proyecto?
Practicar POO básica en C++ e ir avanzando poco a poco,
en el transcuros del mes.

## ¿Para qué NO sirve este proyecto (todavía)?

No guarda datos en archivos.

No maneja herencia (por ahora).

No tiene diagramas UML incorporados.

No permite editar o eliminar jugadores ya registrados.

No calcula estadísticas avanzadas del equipo.


## Authors

- [@JppRomero](https://github.com/JppRomero)


![Logo](https://javier.rodriguez.org.mx/itesm/2014/tecnologico-de-monterrey-blue.png)


## FAQ

#### Hay Una relacion con el Equipo de Cruz Azul

No, este proyecto es completamente con fines Academicos.


