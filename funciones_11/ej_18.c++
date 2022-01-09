#include <iostream>

using namespace std;

struct Fecha{
    int ano;
    int mes;
    int dia;
} f1, f2;

void pedir_fecha();
Fecha mayor(Fecha, Fecha);


int main(){
    
    pedir_fecha();
    mayor(f1, f2);


    return 0;
}


void pedir_fecha(){
    cout<<"Introduzca el año 1: "; cin>>f1.ano;
    cout<<"Introduzca el mes 1: "; cin>>f1.mes;
    cout<<"Introduzca el día 1: "; cin>>f1.dia;

    cout<<"Introduzca el año 2: "; cin>>f2.ano;
    cout<<"Introduzca el mes 2: "; cin>>f2.mes;
    cout<<"Introduzca el día 2: "; cin>>f2.dia;
}


Fecha mayor(Fecha f1, Fecha f2){
    int mayor;

    if(f1.ano > f2.ano){
        cout<<"La primera fecha es mayor que la segunda"<<endl;
    }
    else{ if(f1.ano < f2.ano){
        cout<<"La segunda fecha es mayor que la primera"<<endl;
    }
        else{ if(f1.mes > f2.mes){
            cout<<"La primera fecha es mayor que la segunda"<<endl;
        }
            else{ if(f1.mes < f2.mes){
                cout<<"La segunda fecha es mayor que la primera"<<endl;
            }
                else{ if(f1.dia > f2.dia){
                    cout<<"La primera fecha es mayor que la segunda"<<endl;
                }
                    else{
                        cout<<"La segunda fecha es mayor que la primera"<<endl;
                    }
                    }
                }
            }
        }
    }
