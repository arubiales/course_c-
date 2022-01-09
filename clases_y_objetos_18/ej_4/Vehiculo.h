#include <iostream>

using namespace std;

class Vehiculo{

    private:
        string marca, modelo;
        float precio;

    public:
        Vehiculo(string marca, string modelo, float precio){
            this->marca = marca;
            this->modelo = modelo;
            this->precio = precio;
        }

        Vehiculo(){

        }

        ~Vehiculo(){
            
        }

        float get_precio();
        void mostrar_datos();
        static int indiceMBarato(Vehiculo coches[], int n);
};