# Pilas

Es una estructura de datos de entradas ordenadas tales que solo se pueden introducir y eliminar por un extremo, llamado cima.  

Las operaciones usadas en una pila son **insertar** y **quitar**.  

Siempre que entra un dato en una pila se ingresa, primero el puntero apuntando hacia el dato anterior (si es el primero, será hacia NULL), y después el dato. **Cada uno e estas estructuras dato -- puntero, se le llama nodo**

**Los nodos:** Se crean con estructuras (struct)

**4 pasos para insertar elementos en una pila:**  

1. Crear el espacio en memoria para un nodo, con la sintaxis **new**
2. Cargar el valor dentro del nodo(dato).
3. Cargar el puntero de pila dentro del nodo (*siguiente)
4. Asignar el nuevo nodo pila.


**Pasos para quitar elementos de la pila:**

1. Creamos una variable auxiliar tipo Nodo que señale a la cima
2. Igualar n el dato de auxiliar
3. Pasamso pila al siguiente nodo, ya que hemos eliminado y si no lo hacemos señalaría a la nada.
4. Eliminamos la varible auxiliar.




```
#include <iostream>
#include <stdlib.h>

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

    cout<<"Digite un número: "; cin>>dato;
    agregar_pila(pila, dato);

    cout<<"Digite otro número: "; cin>>dato;
    agregar_pila(pila, dato);

    cout<<"\nSacando los elementos de la pila: ";
    
    while(pila != NULL){ //mientras no sea el final de la pila, eliminamos datos
        sacar_pila(pila, dato);
        if(pila !=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<"."<<endl;
        }
    }

    return 0;
}


void agregar_pila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo(); //reservamos memoria para un nodo
    nuevo_nodo -> dato = n; //cargamos valor dentro del nodo
    nuevo_nodo -> siguiente = pila; //Cargamos el puntero dentro del nodo (*siguiente)
    pila = nuevo_nodo; //Asignamos el nuevo nodo pila
} 

void sacar_pila(Nodo *&pila, int &n){
    Nodo *aux = pila; //creamos la variable auxiliar
    n = aux->dato; //le pasamos el dato de auxiliar
    pila = aux->siguiente;
    delete aux;
}
```