#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"Introduzca el valor de x: ";cin>>x;
    cout<<"Introduzca el valor de y: ";cin>>y;

    resultado = sqrt(x) / (pow(y, 2) - 1);

    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;


    return 0;
}