#include <iostream> 
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

using namespace std;


int main(int argc, char** argv){
    Turismo* t1 = new Turismo("Toyota", "Plomo", "Auris", 4);
    Deportivo* d1 = new Deportivo("Ferrari" , "Rojo", "Giullieta", 12);
    Furgoneta* f1 = new Furgoneta("Ford", "Blanco", "Fiesnardos", 200);
    
    //HERENCIA PÚBLICA
    cout<<"Color: "<<t1->getColor()<<endl;
    t1->set_color("Negro");
    cout<<"Nuevo color: "<<t1->getColor()<<endl;
    
    //método privado de la clase padre, usado en la clase hija, para poder acceder mediante un objeto de la clase turismo.
    cout<<"Modelo: "<<t1->retornar_modelo()<<endl;

    delete t1;

    //HERENCIA PRIVADA
    cout<<"Cilindros: "<<d1->getCilindrada()<<endl;
    cout<<"Marca: "<<d1->reportar_marca()<<endl;

    delete d1;

    //HERENCIA PROTEGIDA
    cout<<"Carga: "<<f1->getCarga()<<endl;
    cout<<"Color: "<<f1->reportarColor()<<endl;

    delete f1;

    return 0;
}