#include<iostream>
#include "Vehiculo.h"

using namespace std;


//HERENCIA PRIVADA
class Deportivo : private Vehiculo{
    private:
        int cilindrada;

    public:
        Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculo(marca, color, modelo){
            this->cilindrada = cilindrada;
        }

        ~Deportivo(){

        }

        int getCilindrada(){
            return cilindrada;
        }

        string reportar_marca(){
            string mensaje = getMarca();
            return mensaje;
        }
};
