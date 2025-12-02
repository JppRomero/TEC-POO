#include "Equipo.h"
#include <iostream>
#include <string>
using namespace std;
// Funciones para validar entradas del usuario
// La primera valida que la entrada sea un entero
// usamos ampersand para pasar la variable por referencia

bool validarEntero(int &x) {
    if (cin >> x) {
        return true;
    }
    // Si la entrada no es un entero, limpiamos el estado de cin
    cin.clear();
    // Y descartamos la entrada invalida y esperamos una nueva
    cin.ignore(1000, '\n');
    return false;
}

// La segunda valida que el entero este dentro de un rango
// especifico para el uso del menu interactivo.
bool validarRango(int x, int min, int max) {
    return (x >= min && x <= max);
}

int main() {
    Equipo CruzAzul;

    int opcion = 0;
    // Ciclo del menu principal creado con 
    // while para repetir hasta que el usuario quiera salir

    while (opcion != 6) {
        cout << "\n--- MENU DEL EQUIPO CRUZ AZUL ---\n";
        cout << "\n 1. Agregar Portero";
        cout << "\n 2. Agregar Defensa";
        cout << "\n 3. Agregar MedioCampista";
        cout << "\n 4. Agregar Delantero";
        cout << "\n 5. Mostrar Equipo";
        cout << "\n 6. SALIR\n";
        
        // funcion para validar la opcion del usuario
        // El ! invierte el resultado: 
        // repetimos mientras la opcion sea invalida.

        while (!validarEntero(opcion) || !validarRango(opcion, 1, 6)) {
            cout << "Opcion invalida. Intenta de nuevo: ";
        }


        if (opcion >= 1 && opcion <= 4) {
            string nombre;
            int dorsal, stat;

            // usamos cin.ignore() para arreglar el problema 
            //de salto de linea al usar getline despues del cin

            cin.ignore(1000, '\n');
            
            cout << "Nombre del Jugador: ";
            getline(cin, nombre);
            // Validacion del dorsal y estadistica del jugador
            cout << "Dorsal del Jugador: ";
            while (!validarEntero(dorsal)) {
                cout << "Dorsal invalido. Intenta de nuevo: ";
            }
            cout << "Estadistica del Jugador: ";
            while (!validarEntero(stat)) {
                cout << "Estadistica invalida. Intenta de nuevo: ";
            }
            // Agregar jugador segun la opcion elegida

            if (opcion == 1)
                CruzAzul.agregarPortero(nombre, dorsal, stat);

            if (opcion == 2)
                CruzAzul.agregarDefensa(nombre, dorsal, stat);

            if (opcion == 3)
                CruzAzul.agregarMedio(nombre, dorsal, stat);

            if (opcion == 4) 
                CruzAzul.agregarDelantero(nombre, dorsal, stat);
        }
        // Mostrar equipo si la opcion es 5
        if (opcion == 5)
            CruzAzul.mostrarEquipo();

    }
    // Mensaje de despedida
    cout << "Hasta luego!!!!" << endl;
    return 0;
}
