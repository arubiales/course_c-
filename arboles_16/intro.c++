#include<iostream>
#include<stdlib.h>

using namespace std;

struct  Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre; //referenciamos quien es su padre
};

//prototipos
Nodo *crear_nodo(int, Nodo*);
void insertar_nodo(Nodo *&, int, Nodo *);
void menu();
void mostrar_arbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(){

    menu();

    return 0;
}


//Función para crear un nuevo nodo
Nodo *crear_nodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}


void insertar_nodo(Nodo *&arbol, int n, Nodo *padre){
    if(arbol == NULL){ //si el árbol está vacio, creame un nuevo nodo
        Nodo *nuevo_nodo = crear_nodo(n, padre);
        arbol = nuevo_nodo;
    }
    else{
        int valorRaiz = arbol->dato; //obtenemos el valor de la raiz.
        if(n < valorRaiz){
            insertar_nodo(arbol->izq, n, arbol);
        }
        else{ //sie le elemento es mayor a la raiz insertamos en el lado derecho
            insertar_nodo(arbol->der, n, arbol);

        }
    }
}


void menu(){
    int dato, opt, cont=0;

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo."<<endl;
        cout<<"2. Mostrar el arbol completo"<<endl;
        cout<<"3. Buscar un elemento en el árbol"<<endl;
        cout<<"4. Recorrer el arbol en preorden"<<endl;
        cout<<"5. Recorrer el árbol en InOrder"<<endl;
        cout<<"6. Recorrer el árbol en PostOrden"<<endl;
        cout<<"7. Eliminar un nodo del árbol";
        cout<<"8. Salir"<<endl;
        cout<<"Opción: "; cin>>opt;

        switch(opt){
            case 1: cout<<"\nDigite un número: "; cin>>dato;
                    insertar_nodo(arbol, dato, NULL);
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: cout<<"\nMostrando el arbol completo:\n\n";
                    mostrar_arbol(arbol, cont);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\nDigite el elemento a buscar: "; cin>>dato;
                    if(busqueda(arbol, dato) == true){
                        cout<<"Hemos encontrado el dato "<<dato<<endl;
                    }
                    else{
                        cout<<"El elemento "<<dato<<" NO ha sido encontrado en el árbol"<<endl;
                    }
                    system("pause");
                    break;
            case 4: cout<<"\nRecorrido en PreOrden: ";
                    preOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 5: cout<<"\nRecorrido InOrder: ";
                    inOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 6: cout<<"\nRecorrido en PostOrden: ";
                    postOrden(arbol);
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 7: cout<<"\nDigite el numero a eliminar: "; cin>>dato;
                    eliminar(arbol, dato);
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls");

    }while(opt != 8);
}


void mostrar_arbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    else{
        mostrar_arbol(arbol->der, cont+1); //imprimimos el lado derecho
        for(int i=0;i<cont; i++){ //para que la impresión sea bonita
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrar_arbol(arbol->izq, cont+1); //mostramos el lado izquierdo
    }
}


bool busqueda(Nodo *arbol, int n){
    if(arbol == NULL){
        return false;
    } else if(arbol->dato == n){
        return true;
    } else if(n < arbol->dato){
        return busqueda(arbol->izq, n);
    }
    else{
        return busqueda(arbol->der, n);
    }
}


void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}


void eliminar(Nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }
    else if(n < arbol->dato){ //buscamos por la izquierda
        eliminar(arbol->izq, n);
    }
    else if(n > arbol->dato) {// buscamos por la derecha
        eliminar(arbol->der, n);
    }
    else{ //si ya e4ncontramos el valor, lo eliminamos
        eliminarNodo(arbol);
    }
}


//Función para determinar el nodo más izquierdo posible
Nodo *minimo(Nodo *arbol){
    if(arbol==NULL){
        return NULL;
    }
    if(arbol->izq){ //si tiene hijo izquierdo
        return minimo(arbol->izq); //buscamos la parte más izquierda posible
    }
    else{ //si no tiene hijo izq retornamos el mismo nodo
        return arbol;
    }
}

// Función para reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if(arbol->padre){
        //arbol->padre hay que asignarle su nuevo yhijo
        if(arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //procedemos a asignarle su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}


//función eliminar nodo
void eliminarNodo(Nodo *nodoEliminar){ //aquí nos tenemos que fijar si es hoja, si tiene un hijo izq, o derecho, o ambos porque todos son casos diferentes
    if(nodoEliminar->izq && nodoEliminar->der){
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if(nodoEliminar->izq){ //si tiene un hijo izq
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if(nodoEliminar->der){
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else{ //no tiene hijos, por lo que es un nodo hoja
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}

//Función para destruir un nodo
void destruirNodo(Nodo *nodo){
    nodo->izq = NULL;
    nodo->der = NULL;
    
    delete nodo;
}