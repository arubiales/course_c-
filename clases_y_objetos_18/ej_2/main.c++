#include <iostream>
#include "Cuadrilatero.h"

using namespace std;

int main(int argc, char** argv){
    Cuadrilatero* c1;
    float lado1, lado2;

    cout<<"Introduzca el lado 1 del cuadrilatero: "; cin>>lado1;
    cout<<"Introduzca el lado 2 del cuadrilatero: "; cin>>lado2;

    if(lado1 == lado2){
        c1 = new Cuadrilatero(lado1);
    }
    else{
        c1 = new Cuadrilatero(lado1, lado2);
    }

    cout<<"El perimetro es: "<<c1->obtener_perimetro()<<endl;
    cout<<"El area es: "<<c1->obtener_area()<<endl;

    return 0;
}