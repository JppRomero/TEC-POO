#include "CAZporteros.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZporteros
// Constructor
CAZporteros::CAZporteros(string nm, int dj, int bp) 
    :Jugador (nm, dj), balonesparados (bp) {}
// Set
void CAZporteros::setBalonesParados(int bp){
    balonesparados = bp;

}
// Get
int CAZporteros::getBalonesParados(){
    return balonesparados;
}
// Mostrar Info
void CAZporteros::mostrarinfo(){
    cout << "\n Portero Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Las Atajadas del portero es de: "<< balonesparados << endl;
}

