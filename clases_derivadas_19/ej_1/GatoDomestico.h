#include <iostream>
#include "Felino.h"

using namespace std;


class GatoDomestico : public Felino{
    private:
        string nombre_dueno;

    public:
        GatoDomestico(int ano_nacimiento, string lugar_nacimiento, string raza, string nombre_dueno) : Felino(ano_nacimiento, lugar_nacimiento, raza){
            this->nombre_dueno = nombre_dueno;
        }

        ~GatoDomestico(){
            
        }

        string get_nombre_dueno(){
            return nombre_dueno;
        }

        void set_nombre_dueno(string n){
            this->nombre_dueno = n;
        }

        string imprimir_dieta(){
            return "La dieta del Gato Domestico se basa en pienso";
        }


};