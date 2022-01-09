#include <iostream>
#include <string.h>

using namespace std;



struct
{
    char nombre[20];
    int edad;
    float promedio;
} alum[3];


int main(){
    float calc_promedio = 0;
    char nombre_calc_promedio[20];
    int edad_calc_promedio;

    for(int i=0; i<3; i+=1){
        cout<<"Rellene la edad del primer alumno: "; cin.getline(alum[i].nombre, 20, '\n');
        cout<<"Edad: "; cin>>alum[i].edad;
        cout<<"Provincia: "; cin>>alum[i].promedio;
    }

    for(int i=0; i<3; i+=1){
        if(alum[i].promedio > calc_promedio){
            calc_promedio = alum[i].promedio;
            nombre_calc_promedio = alum[i].nombre;
            edad_calc_promedio = alum[i].edad;
        }
    };

    cout<<"Datos del alumno con mejor promedio";
    cout<<nombre_calc_promedio<<endl;
    cout<<edad_calc_promedio<<endl;
    cout<<calc_promedio<<endl;

    return 0;
}