#include "Equipo.h"
#include <iostream>
#include <string>
using namespace std;

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
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            string nombre;
            int dorsal, stat;

            // usamos cin.ignore() para arreglar el problema 
            //de salto de linea al usar getline despues del cin

            cin.ignore();
            
            cout << "Nombre del Jugador: ";
            getline(cin, nombre);

            cout << "Dorsal del Jugador: ";
            cin >> dorsal;

            cout << "Estadistica del Jugador: ";
            cin >> stat;
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

        if (opcion == 5)
            CruzAzul.mostrarEquipo();

    }

    cout << "Hasta luego!!!!" << endl;
    return 0;
}
