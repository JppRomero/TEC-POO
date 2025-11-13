#include <iostream>
#include <string>
using namespace std;

// Porteros del Cruz Azul
class CAZporteros {

private:
    string nombrejug;
    int dorsaljug;
    int balonesparados;

public:
    // Constructor 
    CAZporteros (string nm = "", int dj = 0, int bp = 0)
    : nombrejug(nm), dorsaljug(dj), balonesparados(bp){}

    // Set
    void setNombres(string nm){
        nombrejug = nm;
    }

    void setDorsal(int dj){
        if (dj > 0 && dj <= 99)
            dorsaljug = dj;
        else
            cout << "El Dorsal Tiene que ser un Numero del 1 al 99" << endl;
    }

    void setBalonesParados(int bp){
        if (bp >= 0)
            balonesparados =  bp;
        else
            cout << "Las Atajadas no pueden ser negativas" << endl;
    }

    // Get

    string getNombres() const {
        return nombrejug;
    }

    int getDorsal() const {
        return dorsaljug;
    }

    int getBalonesParados() const {
        return balonesparados;
    }

    // Mostrar Info

    void mostrarinfo() const{
        cout << "\n ---Portero Del Cruz Azul---" << endl;
        cout << "Nombre del Portero : " << nombrejug << endl;
        cout << "Dorsal del Portero : " << dorsaljug << endl;
        cout << "Atajadas de " << nombrejug 
        << " Es de : " << balonesparados << endl;
    }
};