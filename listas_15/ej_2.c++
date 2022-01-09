#include<iostream>
#include<stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_elemento(Nodo *&, float);
void calc_sum_mean(Nodo *);



int main(){
    Nodo *lista = NULL;
    float dato;
    char rpt;

    do{
        cout<<"Ingrese un número: "; cin>>dato;
        insertar_elemento(lista, dato);
        cout<<"\nDesea ingresar otro número más (s/n): "; cin>>rpt;
    }while(rpt == 's' || rpt == 'S');

    calc_sum_mean(lista);


    return 0;
}

void insertar_elemento(Nodo *&lista, float n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista==NULL){
        lista = nuevo_nodo;
    }
    else{
        aux = lista;
        while(aux->siguiente != NULL){
            aux = aux->siguiente;
        }
    aux->siguiente = nuevo_nodo;
    }
    lista->dato = n;

}


void calc_sum_mean(Nodo *lista){
    int counter=0;
    float prom=0.0, sum=0;

    while(lista != NULL){
        sum += lista->dato;
        counter++;
        lista = lista->siguiente;
    }

    prom = sum/counter;

    cout<<"\nLa suma de la lista es: "<<sum;
    cout<<"\nLa media de la lista es: "<<prom<<endl;


}