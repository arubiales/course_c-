#include <iostream>
#include <string.h>

using namespace std;

struct Empleados{
    char nombre[20];
    float salario;
}emp[100];


int main(){
    int n_empleados, pos_mayor, pos_menor;
    float mayor=0, menor=9999;

    cout<<"Introduzca el número de empleados: "; cin>>n_empleados;

    for(int i=0; i<n_empleados; i+=1){
        fflush(stdin);
        cout<<"Introduzca su nombre: "; cin.getline(emp[i].nombre, 20, '\n');
        cout<<"Introduzca su salario: ";  emp[i].salario;

        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            pos_mayor = i;
        }

        if(emp[i].salario < menor){
            menor = emp[i].salario;
            pos_menor = i;
        }

        cout<<'\n';
    }

    
    cout<<emp[pos_mayor].nombre<<endl;
    cout<<emp[pos_mayor].salario<<endl;
    cout<<'\n';
    cout<<emp[pos_menor].nombre<<endl;
    cout<<emp[pos_menor].salario<<endl;


    return 0;
}