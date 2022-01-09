#include<iostream>
#include"Barco.h"
#include "Avion.h"

using namespace std;

class HidroAvion : public Barco, public Avion{
    private:
        string codigo;

    public:
        HidroAvion(string nombre, string modelo, string codigo) : Barco(nombre) , Avion(modelo){
            this->codigo = codigo;
        }

        ~HidroAvion(){

        }

        string get_codigo(){
            return codigo;
        }

        void mostrar_datos(){
            cout<<"Nombre: "<<get_nombre()<<endl;
            cout<<"Modelo: "<<get_modelo()<<endl;
            cout<<"Código: "<<codigo<<endl;
        }


};