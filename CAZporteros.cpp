// CAZporteros.cpp el cual contiene la implementacion
// de los metodos de la clase CAZporteros.

#include "CAZporteros.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZporteros
// Llamado del constructor de la clase CAZporteros.
CAZporteros::CAZporteros(string nm, int dj, int bp) 
    :Jugador (nm, dj), balonesparados (bp) {}
    
// Llamado del Setter de la clase CAZporteros.
void CAZporteros::setBalonesParados(int bp){
    balonesparados = bp;

}
// Llamado del Getter de la clase CAZporteros.
int CAZporteros::getBalonesParados(){
    return balonesparados;
}
// Llamado del metodo mostrarinfo de la clase CAZporteros.
void CAZporteros::mostrarinfo(){
    cout << "\n Portero Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Las Atajadas del portero es de: "<< balonesparados << endl;
}
// Fin de la implementacion de los metodos de la clase CAZporteros.
