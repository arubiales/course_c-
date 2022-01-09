#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregar_pila(Nodo *&, int);
void sacar_pila(Nodo *&, int &);

int main(){
    Nodo *pila = NULL;
    int dato;
    char rpt;

    do{
        cout<<"Digite un número: "; cin>>dato;
        agregar_pila(pila, dato);

        cout<<"\nDesea agregar otro elemento a PILA(s/n): "; cin>>rpt;
    }while((rpt=='S')||(rpt=='s'));


    cout<<"\nSacando todos los elementos de pila: ";
    while(pila != NULL){
        sacar_pila(pila, dato);
        if(pila != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<".";
        }
    }

    return 0;
}



void agregar_pilar(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout<<"\tElemento "<<n<<" ha sido agregado a PILA correctamente";
}

void sacar_pila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}