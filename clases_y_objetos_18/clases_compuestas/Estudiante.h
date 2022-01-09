#include<iostream>
#include "Expediente.h"
#include "Direccion.h"

using namespace std;

//Esta clase está compuesta por varias claseas
class Estudiante{
    private:
        string codigo;
        float promedio;
        Expediente exp;
        Direccion dir;

    public:
    //Esta sintaxis hace que c++ se vaya a nuestros distintos headers al inicializar la clase
        Estudiante(string codigo, float promedio, int nroExpediente, string direccion) : exp(nroExpediente), dir(direccion){
            this->codigo = codigo;
            this->promedio = promedio;
        }

        void mostrarDatos(){
            cout<<"Código: "<<codigo<<endl;
            cout<<"Promedio: "<<promedio<<endl;
            cout<<"Número de Expediente: "<<exp.getNroExpediente()<<endl;
            cout<<"Dirreccion: "<<dir.getDireccion()<<endl;
        }



};