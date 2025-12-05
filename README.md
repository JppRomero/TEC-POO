
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

## Algoritmo
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
## Diagrama de Clases
![](https://raw.githubusercontent.com/JppRomero/TEC-POO/refs/heads/main/diagrama%20de%20clasess.png)
## Archivos .h personalizados (clase base, herencia y agrupacion) y main.cpp
Se incluyen archivos como:

CAZporteros.h
CAZporteros.cpp

CAZdefensas.h
CAZdefensas.cpp

CAZmedios.h
CAZmedios.cpp

CAZdelanteros.h
CAZdelanteros.cpp

Jugador.h
Jugador.cpp

Equipo.h
Equipo.cpp

main.cpp

## Instrucciones de Ejecución
        1. Instalar un compilador de C++

        Puedes usar cualquiera de los siguientes:

                g++ (Linux / Windows MinGW / MSYS2)

                clang++ (MacOS)

                MinGW-w64 (Windows)

        Cualquiera funciona con este proyecto.

        2. Asegúrate de tener todos los archivos juntos en una sola carpeta:
                CAZporteros.h
                CAZdefensas.h
                CAZmedios.h
                CAZdelanteros.h
                Jugador.h
                Equipo.h
                CAZporteros.cpp
                CAZdefensas.cpp
                CAZmedios.cpp
                CAZdelanteros.cpp
                Jugador.cpp
                Equipo.cpp
                main.cpp


                Los .h contienen las clases.
                Los .cpp contienen las implementaciones.

        3. Abrir una terminal dentro de la carpeta del proyecto

        Ejemplos:

                Windows PowerShell / CMD

                cd ruta\de\tu\carpeta


                MSYS2 / Linux / Mac

                cd /ruta/de/tu/carpeta

        4. Compilar el proyecto

                Compila todos los archivos a la vez:

                g++ -std=c++17 *.cpp -o cruzazul


        En Windows puede ser:

                g++ -std=c++17 *.cpp -o cruzazul.exe

        5. Ejecutar el programa

                Windows PowerShell / CMD

                        .\cruzazul.exe


                MSYS2 / Linux / Mac

                        ./cruzazul

        6. Uso del programa

        Una vez iniciado:

        Elige la opción del menú.

                Registra jugadores por tipo (portero, defensa, medio, delantero).

                Consulta la lista completa del equipo.
## Link de Videos de Apoyo para Ejecucion (Windows y Mac)
[![Windows](https://articles-img.sftcdn.net/auto-mapping-folder/sites/2/2022/11/Windows-11-momento.jpg)](https://www.youtube.com/watch?v=mvrCoPSg_FE " Windows ")

[![MacOs](https://upload.wikimedia.org/wikipedia/commons/f/fa/Apple_logo_black.svg)](https://m.youtube.com/watch?v=wCCRmx3JTWU "MacOs")

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



