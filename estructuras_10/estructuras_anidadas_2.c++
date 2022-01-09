#include <iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];


int main(){
    
    for(int i=0;i<2;i+=1){
        fflush(stdin); //vaciamos el buffer y permitir digitar los valores
        cout<<"Digite su nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout<<"digite su dirección: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
        cout<<"Ciudad: ";
        cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
        cout<<"Provincia: ";
        cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
        cout<<"Salario: ";
        cin>>empleados[i].salario;
        cout<<'\n';
    }

    for(int i=0; i<2; i+=1){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Dirección: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"salario: "<<empleados[i].salario<<endl;
    }

    return 0;
}