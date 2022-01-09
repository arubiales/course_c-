#include <iostream>

using namespace std;

//prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero) //esto engloba todos los tipos de dato

int main(){
    int num1 = 4;
    float num2 = 56.67;
    double num3 = 123.5678;

    mostrarAbs(num1)
    mostrarAbs(num2)
    mostrarAbs(num3 )



    return 0;
}


template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero <0){
        numero = numero * -1
    }

    cout<<"El valor absoluto del numero es: "<<numero;
}