#include <iostream>
using namespace std;

int main(){
    int saldo_inicial, entrada, saldo_final;
    char tipo_movimiento;

    cout<<"Introduzca el tipo de movimienti 'I' para ingresar y 'R' para retirar dinero: "; cin>>tipo_movimiento;
    cout<<"Introduzca la cantidad de dinero"; cin>>entrada;

    saldo_inicial = 1000;
    if(tipo_movimiento == 'I'){
        saldo_final = 1000 + entrada;
    }

    else{
        saldo_final = 1000 - entrada;
    }

    cout<<"\nEl saldo actual es de: "<<saldo_final<<endl;



    return 0;
}