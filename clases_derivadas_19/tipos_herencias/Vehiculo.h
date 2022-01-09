#ifndef VEHICULO_H //estás cosas se ponen en herencia multiple, para que C++ no se confunda. Se llama GUARDIAN DE INCLUSIÓN MULTIPLE
#define VEHICULO_H
//Basicamente esto lo que le dice a C++ es que la clase Vehiculo, existe, y cuando la uses para otra clase, no la vuelvas a compilar de nuevo, usa la que ya tienes y no te confuncdas.


#include<iostream>
using namespace std;


class Vehiculo{
    private:
    string marca;
    string color;

    protected:
        string modelo;
        string getModelo(){
            return modelo;
        }

    public:
        Vehiculo(string marca, string color, string modelo){
            this->marca = marca;
            this->color = color;
            this->modelo = modelo;
        }

        string getMarca(){
            return marca;
        }

        string getColor(){
            return color;
        }

        void set_color(string color){
            this->color = color;
        }

};


#endif