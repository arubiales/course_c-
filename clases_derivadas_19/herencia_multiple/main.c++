#include<iostream>
#include "Hidroavion.h"

using namespace std;


int main(int argc, char** argv){
    HidroAvion* ob1 = new HidroAvion("Veloz12", "HA99", "123OP");

    ob1->mostrar_datos();
    cout<<endl;

    ob1->indicar_avion();
    cout<<endl;
    ob1->indicar_barco();

    delete ob1;
    return 0;
}

