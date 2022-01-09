#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include <iostream>

using namespace std;

class Deportista{
    
    private:
        string nombre_entrenador;

    public:
        Deportista(string nombre_entrenador){
            this->nombre_entrenador = nombre_entrenador;
        }

        ~Deportista(){

        }

        void mostrar_datos(){
            cout<<nombre_entrenador<<endl;
        }

        string get_nombre_entrenador(){
            return nombre_entrenador;
        }

        void set_nombre_entrenador(string n){
            this->nombre_entrenador = n;
        }
};

#endif