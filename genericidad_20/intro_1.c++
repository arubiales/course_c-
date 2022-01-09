#include <iostream>

using namespace std;

//Plantilla de función
template <class T, class T2> //Este T puede tomar la forma del tipo de dato que tu quieras

T2 mayor(T dato1, T2 dato2){
    if(dato1 >= dato2){
        return dato1;
    }
    else{
        return dato2;
    }
}


int main(int argc, char** argv){
    cout<<"El mayor de dos números enteros es: "<<mayor(5,9)<<endl;
    cout<<"El mayor de dos números flotantes es: "<<mayor(2.1, 3.6)<<endl;
    cout<<"El mayor de dos caracteres es: "<<mayor('r','z')<<endl;
    cout<<"El mayor de un número y un flotante es: "<<mayor(5,6.54)<<endl;

    return 0;
}