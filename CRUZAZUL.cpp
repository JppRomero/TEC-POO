#include <iostream>
#include <string>
#include "portero.h"
#include "defensas.h"
#include "medios.h"
#include "delanteros.h"
using namespace std;

//Cruz Azul

int main(){
    cout << "=== CRUZ AZUL - LIGA MX ===" << endl;
    int opcion;
    cout << "Digite la Opcion: "
    "1 Porteros, 2 Defensas, 3 MedioCampistas, 4 Delanteros, 5 Nada: ";
    cin >> opcion;

    switch(opcion){

        case 1: {
            int cantidad;
            cout << "Cuantos Porteros quiere digitar (max 3): ";
            cin >> cantidad;
            while (cantidad < 1 || cantidad > 3){
                cout << "Cantidad Erronea, Ingresa entre 1 y 3: ";
                cin >> cantidad;
            }
            
            cin.ignore();

            CAZporteros porteros[3];
            for (int i = 0; i < cantidad; i ++){

                string nombre;
                int dorsal,  balones;

                cout << "Ingrese Nombre del Portero " << i+1 << ": " ;
                getline (cin, nombre);
                cout << "Ingrese el Dorsal del Portero " << i+1 << ": ";
                cin >> dorsal;
                cout << "Ingrese las Atajadas del Portero "<< i+1 << ": ";
                cin >> balones;
                cin.ignore();

                porteros[i].setNombres(nombre);
                porteros[i].setDorsal(dorsal);
                porteros[i].setBalonesParados(balones);

            }
            
            cout << "=== Cruz Azul ==="<< endl;

            for (int i = 0; i < cantidad; i++){
                porteros[i].mostrarinfo();

            }
            
            break;
        }

        case 2: {
            int cantidad;
            cout << "Cuantos Defensas quiere digitar (max 7): ";
            cin >> cantidad;
            while (cantidad < 1 || cantidad > 7){
                cout << "Cantidad Erronea, Ingresa entre 1 y 7: ";
                cin >> cantidad;
            }
            
            cin.ignore();

            CAZdefensas defensas[7];
            for (int i = 0; i < cantidad; i ++){

                string nombre;
                int dorsal,  balones;

                cout << "Ingrese Nombre del Defensa " << i+1 << ": " ;
                getline (cin, nombre);
                cout << "Ingrese el Dorsal del Defensa " << i+1 << ": ";
                cin >> dorsal;
                cout << "Ingrese los Balones Bloquedados: ";
                cin >> balones;
                cin.ignore();

                defensas[i].setNombres(nombre);
                defensas[i].setDorsal(dorsal);
                defensas[i].setBalonesBloqueados(balones);

            }
            
            cout << "=== Cruz Azul ==="<< endl;

            for (int i = 0; i < cantidad; i++){
                defensas[i].mostrarinfo();

            }
            break;
        }

        case 3: {
            int cantidad;
            cout << "Cuantos MedioCampistas quiere digitar (max 13): ";
            cin >> cantidad;
            while (cantidad < 1 || cantidad > 13){
                cout << "Cantidad Erronea, Ingresa entre 1 y 13: ";
                cin >> cantidad;
            }
            
            cin.ignore();

            CAZmedios medios[13];
            for (int i = 0; i < cantidad; i ++){

                string nombre;
                int dorsal,  pases;

                cout << "Ingrese Nombre del MedioCampista " << i+1 << ": " ;
                getline (cin, nombre);
                cout << "Ingrese el Dorsal del MedioCampista " << i+1 << ": ";
                cin >> dorsal;
                cout << "Ingrese los Pases: ";
                cin >> pases;
                cin.ignore();

                medios[i].setNombres(nombre);
                medios[i].setDorsal(dorsal);
                medios[i].setPases(pases);

            }
            
            cout << "=== Cruz Azul ==="<< endl;

            for (int i = 0; i < cantidad; i++){
                medios[i].mostrarinfo();

            }
            break;
        }


        case 4: {
            int cantidad;
            cout << "Cuantos Delanteros quiere digitar (max 3): ";
            cin >> cantidad;
            while (cantidad < 1 || cantidad > 3){
                cout << "Cantidad Erronea, Ingresa entre 1 y 3: ";
                cin >> cantidad;
            }
            
            cin.ignore();

            CAZdelanteros delanteros[3];
            for (int i = 0; i < cantidad; i ++){

                string nombre;
                int dorsal,  goles;

                cout << "Ingrese Nombre del Delantero " << i+1 << ": " ;
                getline (cin, nombre);
                cout << "Ingrese el Dorsal del Delantero " << i+1 << ": ";
                cin >> dorsal;
                cout << "Ingrese los Goles: ";
                cin >> goles;
                cin.ignore();

                delanteros[i].setNombres(nombre);
                delanteros[i].setDorsal(dorsal);
                delanteros[i].setGoles(goles);

            }
            
            cout << "=== Cruz Azul ==="<< endl;

            for (int i = 0; i < cantidad; i++){
                delanteros[i].mostrarinfo();

            }
        
            break;
        }
        case 5: {
            cout << "Saliendo";
            break;
        }

        default: {
            cout << "Opcion no valida";
            break;

        }
    }

    return 0;
}