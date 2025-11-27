
# Sistema de Gestión de Jugadores del Cruz Azul (POO en C++).
Este programa fue creado para practicar los fundamentos de POO, usando un ejemplo cercano y fácil de entender: los jugadores del equipo Cruz Azul.

Aquí se puede registrar diferentes jugadores según su posición para juntarlos en un equipo —porteros, defensas, mediocampistas y delanteros— y almacenar información básica como su nombre, dorsal y estadísticas individuales (goles, pases, atajadas o balones bloqueados).

## Sobre Mi
Autor: Juan Pablo Romero Anaya
Carrera: Ingeniería en Tecnologías Computacionales (ITC)
Campus: Tecnológico de Monterrey, Querétaro
Fecha: 12/11/2025 - 5/12/2025

## Propósito del Programa

El Sistema de Gestión de Jugadores del Cruz Azul busca resolver una problemática común al aprender POO:

## Algoritmo (12/11/2025)
        1. Mostrar un mensaje que pida al usuario seleccionar una opción del menú.
                                            (ciclo)

        2. Preguntar qué tipo de jugador desea registrar:

            Portero

            Defensa

            Medio

            Delantero

            Salir del Programa

        3. Verificar que la opción elegida sea válida; si no, Sale del programa.

        4. Crear un arreglo de objetos de la clase correspondiente.

        6. PARA cada jugador:

            Pedir el nombre

            Pedir el dorsal

            Pedir la estadística específica según la posición

            Guardar estos datos 


        7. Repetir el Ciclo hasta que el usuario quiera

        8. Mostrar los datos de cada jugador por su posición

        FIN
## Archivos .h personalizados (clase base, herencia y agrupacion) y main.cpp
Se incluyen archivos como:

CAZporteros.h

CAZdefensas.h

CAZmedios.h

CAZdelanteros.h

Jugador.h

Equipo.h

main.cpp

## Instrucciones de Ejecución
    1. Asegúrate de tener instalado un compilador de C++ (g++, clang o MinGW).

    2. Guarda los archivos en una misma carpeta:

        CAZporteros.h (herencia)

        CAZdefensas.h (herencia)

        CAZmedios.h (herencia)

        CAZdelanteros.h (herencia)

        Jugador.h (clase base/padre)

        Equipo.h (composicion)

        main.cpp (main)

    3. Abre tu terminal y navega a esa carpeta.

    4. Compila el programa con:

        g++ main.cpp 


    5. Ejecuta el programa
    
    6. Sigue las instrucciones del menú para registrar jugadores y verlos.

## ¿Para qué SÍ sirve este proyecto?
Practicar POO básica en C++ e ir aprendiendo mas.

Poder poner informacion relevante sobre jugadores de futbol.

Poder ver la informacion dada de una manera mas sostificada.

## ¿Para qué NO sirve este proyecto (todavía)?

No permite editar o eliminar jugadores ya registrados.

No calcula estadísticas avanzadas del equipo.


## Authors

- [@JppRomero](https://github.com/JppRomero)


![Logo](https://javier.rodriguez.org.mx/itesm/2014/tecnologico-de-monterrey-blue.png)


## FAQ

#### Hay Una relacion con el Equipo de Cruz Azul

No, este proyecto es completamente con fines Academicos.



