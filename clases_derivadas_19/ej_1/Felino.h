#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"

using namespace std;

class Felino : public Mamifero{
    
    private:
        string nombre_circo;

    public:
        Felino(int ano_nacimiento, string lugar_nacimiento, string raza, string nombre_circo) : Mamifero(ano_nacimiento, lugar_nacimiento, raza){
            this->nombre_circo = nombre_circo;
        }
    
        Felino(int ano_nacimiento, string lugar_nacimiento, string raza) : Mamifero(ano_nacimiento, lugar_nacimiento, raza){

        }

        ~Felino(){
            
        }

        string get_nombre_circo(){
            return nombre_circo;
        }

        void set_nombre_circo(string n){
            this->nombre_circo = n;
        }

        string imprimir_dieta(){
            return "La dieta del Felino se basa en la carne";
        }

};

#endif