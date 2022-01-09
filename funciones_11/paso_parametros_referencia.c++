#include <iostream>

using namespace std;

void valNuevo(int&, int&);

int main(){
    int num1, num2;

    cout<<"Digite 2 numeros: "; cin>>num1>>num2;
    
    valNuevo(num1, num2);

    cout<<"Los valores han cambiado a: "<<num1<<' '<<num2<<endl;


    return 0;
}

void valNuevo(int& xnum, int& ynum){ //el & significa la "dirección de" sirve para indicar direcciones en memoria
    cout<<"El valor de ambos números son: "<<xnum<<' '<<ynum;

    xnum = 89;
    ynum = 85;
}

//esto nos permite cambiar el valor de la variable, porque sabemos exactamente donde se está almacenando.