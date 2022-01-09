#include <iostream>
#include <math.h> //nos traemos la librería math.h para tener la raiz cuadrada y la elevación
using namespace std;

int main(){
    float cateto1, cateto2, hipotenusa = 0;

    cout<<"Introduzca el primer cateto: "; cin>>cateto1;
    cout<<"Introduzca el segundo cateto: "; cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    
    cout.precision(2);
    cout<<"La hipotenusa del triangulo es: "<<hipotenusa<<endl;

    return 0;
}