#include <iostream>
#include <stdlib.h>

using namespace std;

struct Cliente{
    char nombre[30];
    char clave[10];
    int edad;
};

struct Nodo{
    Cliente c; //NUestro dato es tipo estructura
    Nodo *siguiente;
};


void cargar_clientes(Cliente &);
void insertar_cola(Nodo *&, Nodo*&, Cliente);
bool cola_vacia(Nodo *);
bool eliminar_cola(Nodo *&, Nodo *&, Cliente &);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char rpt;


    do{
        cargar_clientes(c); //Cargamos los datos
        insertar_cola(frente, fin, c); //Agregar un cliente a la cola

        cout<<"\nDesea agregar un nuevo cliente(s/n): "; cin>>rpt;
    }while(rpt == 'S' || rpt == 's');

    cout<<"\n===Carga de clientes exitosa===\n\n\n";

    cout<<"\tClientes agregados a cola\n\n";
    while(frente != NULL){
        eliminar_cola(frente, fin, c);
        cout<<"Nombre: "<<c.nombre<<endl;
        cout<<"Clave: "<<c.clave<<endl;
        cout<<"Edad: "<<c.edad<<endl;
        cout<<"\n";
    }

    return 0;
}

void cargar_clientes(Cliente &c){
    cout<<"\tAgregar nevo cliente\n";
    cout<<"Nombre: "; cin.getline(c.nombre, 30, '\n');
    cout<<"Clave: "; cin.getline(c.clave, 10, '\n');
    cout<<"Edad: ", cin>>c.edad;
    cout<<"\n";
}


//Agregamos nuevos clientes a la cola
void insertar_cola(Nodo *&frente, Nodo *&fin, Cliente c){
    Nodo *nuevo_nodo = new Nodo(); //le asignamos la memoria necesaria

    nuevo_nodo->c = c;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    
    fin = nuevo_nodo;
}

//Función para determinar si la cola está vacia
bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;

}


//Función para sacar los elementos de la cola
void eliminar_cola(Nodo *&frente, Nodo *&fin, Cliente &c){
    c = frente->c;

    Nodo *aux = frente;

    if(frente == fin){
        frente == NULL;
        fin == NULL;
    }
    else{
        frente = frente->siguiente;
    }
    delete aux;
}