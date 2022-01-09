#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main(int argc, char ** argv){
    DiaAnio* hoy;
    DiaAnio* cumple;
    int d, m;

    cout<<"Introduzca el día de hoy:"; cin>>d;
    cout<<"Introduzca el mes de hoy: "; cin>>m;

    hoy = new DiaAnio(d, m);

    cout<<"Introduzca el día de su cummpleaños: "; cin>>d;
    cout<<"Introduzca el mes de su cumpleaños: "; cin>>m;

    cumple = new DiaAnio(d, m);

    //Mostramos las fechas
    hoy->visualizar();
    cout<<endl;
    cumple->visualizar();;

    if(hoy->igual(*cumple)){
        cout<<"FELIZ CUMPLE!!"<<endl;
    }
    else{
        cout<<"\n Que tenga un buen día"<<endl;
    }


    return 0;
}