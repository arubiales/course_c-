#include <iostream>
#include "Punto.h"

using namespace std;

int main(int argc, char** argv){
    Punto p1(2, 1); //usamos el primer constructor y creamos un primer objeto estático (es igual que crear una variables)

    cout<<"El valor de X es: "<<p1.getX()<<endl;
    cout<<"El valor de Y es: "<<p1.getY()<<endl;
    
    //Creamos un objeto pero ahora DINÁMICO. Aquí no se puede usar el punto, se usa la flecha. PORQUE ES DINÁMICO
    Punto* p2 = new Punto();

    p2->setX(5);
    p2->setY(8);

    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;

    return 0;
}