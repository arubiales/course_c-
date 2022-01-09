#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>


using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();

struct Datos{
    string nombre, apellido, telefono;
}datos;

int main(){

    menu();


}

void menu(){
    int opt;

    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Crear(nombrte,apellidos,telefono)"<<endl;
        cout<<"2. agregar más contactos (nombre,apèllidos,teléfono)"<<endl;
        cout<<"3. Visualizar contactos existentes"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opción: "; cin>>opt;

        switch(opt){
            case 1: crear_contacto();
                    cout<<"\n";
                    break;
            case 2: agregar_contacto();
                    cout<<"\n";
                    break;
        }
        system("cls");
    }while(opt ==! 4);
}

void crear_contacto(){
    ofstream archivo;
    char rpt;

    archivo.open("agenda_telefonica.txt", ios::out); //abrimos el archivo en modo escritura

    if(archivo.fail()){
        cout<<"Fallo al abrir un archivo";
        exit(1);
    }

    archivo<<"\tAgenda Telefonica\n"<<endl;

    do{
        fflush(stdin);
        cout<<"Digite su nombre: "; getline(cin, datos.nombre);
        cout<<"Digite su apellido: "; getline(cin, datos.apellido);
        cout<<"Digite su teléfono: "; getline(cin, datos.telefono);

        archivo<<"Nombre: "<<datos.nombre<<endl;
        archivo<<"Apellidos: "<<datos.apellido<<endl;
        archivo<<"Teléfono: "<<datos.telefono<<endl<<endl;

        cout<<"Desea agregar otro contacto(s/n): "; cin>>rpt;
    }while(rpt=='S' || rpt=='s');

    archivo.close();

}

void agregar_contacto(){
    ofstream archivo;
    char rpt;

    archivo.open("agenda_telefonica.txt", ios::app);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    do{
        fflush(stdin);
        cout<<"\nDigite su nombre: "; getline(cin, datos.nombre);
        cout<<"Digite su apellido: "; getline(cin, datos.apellido);
        cout<<"Digite su teléfono"; getline(cin, datos.telefono);
        cout<<"\n";

        archivo<<"\nNombre: "<<datos.nombre;
        archivo<<"Apellido: "<<datos.apellido;
        archivo<<"Teléfono: "<<datos.telefono;

        cout<<"Desea agregar un número contacto (s/n)", cin>>rpt;
    }while(rpt == 'S' || rpt == 's');

    archivo.close(); 

}

void visualizar_contacto(){
    ifstream archivo;
    string texto;

    archivo.open("agenda_telefonica.txt", ios::in);

    if(archivo.fail()){
        cout<<"Dio fallos al abrir el archivo";
        exit(1)
    }

    while(archivo.eof()){ //mientras no sea el final del archivo
        getline(archivo, texto);
        cout<<texto<endl;
    }

    archivo.close(); //Cerramos el archivo
    
}