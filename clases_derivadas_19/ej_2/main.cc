#include<iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BDDeporte.h"

using namespace std;

int main(int argc, char** argv){
    Alumno* alumnoJuan = new Alumno("Marketing");
    Alumno* alumnoPedro = new Alumno("Big Data");
    Deportista* DeporLuis = new Deportista("Mou");
    BDDeporte* bdAna = new BDDeporte("Sirena", "Mireia", 100);
    BDDeporte* bdCarmen = new BDDeporte("Fortazgo", "Malinavis", 300);
    string nueva_carrera, nuevo_entrenador;
    float nuevo_monto;

    cout<<"\n\tImprimimos los datos de todos los objetos declarados"<<endl<<endl;
    alumnoJuan->mostrar_datos();
    alumnoPedro->mostrar_datos();
    DeporLuis->mostrar_datos();
    bdAna->mostrar_datos();
    bdCarmen->mostrar_datos();

    cout<<"\n\tActualizamos los nombre de las carreras de Juan y Ana"<<endl<<endl;
    cout<<"Introduzca el nuevo nombre de la carrera de Juan: "; getline(cin, nueva_carrera);
    alumnoJuan->set_nombre_carrera(nueva_carrera);
    cout<<"Introduzca el nuevo nombre de la carrera de Ana: "; getline(cin, nueva_carrera);
    bdAna->set_nombre_carrera(nueva_carrera);
    
    cout<<"\n\tActualizamos los nombre del entrenador"<<endl<<endl;
    cout<<"Introduzca el nuevo entrenador para Ana: "; getline(cin, nuevo_entrenador);
    bdAna->set_nombre_entrenador(nuevo_entrenador);
    cout<<"Introduzca el nuevo entrenador para Carmen: "; getline(cin, nuevo_entrenador);
    bdCarmen->set_nombre_entrenador(nuevo_entrenador);

    cout<<"\n\tActualizamos los el monto de la beca"<<endl<<endl;
    cout<<"Introduzca el incremento de la beca de Ana: "; cin>>nuevo_monto;
    bdAna->set_monto_beca(nuevo_monto);
    cout<<"Introduzca el incremente de la beca de Carmen: "; cin>>nuevo_monto;
    bdCarmen->set_monto_beca(nuevo_monto);


    cout<<"\n\tImprimimos los datos de todos los objetos Actualizados"<<endl<<endl;
    alumnoJuan->mostrar_datos();
    alumnoPedro->mostrar_datos();
    DeporLuis->mostrar_datos();
    bdAna->mostrar_datos();
    bdCarmen->mostrar_datos();


    delete bdCarmen;
    delete bdAna;
    delete DeporLuis;
    delete alumnoJuan;
    delete alumnoPedro;
    return 0;
}