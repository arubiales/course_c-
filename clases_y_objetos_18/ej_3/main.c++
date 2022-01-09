#include <iostream>
#include "Tablero.h"

using namespace std;

int main(int argc, char** argv){
    int x, y, opt, n;
    Tablero* ob1;

    cout<<"Introduzca una posición X y una posición Y: "; cin>>x>>y;

    ob1 = new Tablero(x, y);

    do{
        cout<<"\n\t.:MENU:."<<endl;
        cout<<"1. Mover arriba"<<endl;
        cout<<"2. Mover abajo"<<endl;
        cout<<"3. Mover izquierda"<<endl;
        cout<<"4. Mover derechas"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opt;

        if(opt>=1 && opt<=4){
            cout<<"\nDigite cuantas posiciones desea mover: "; cin>>n;
        }
        
        switch(opt){
            case 1: ob1->mover_arriba(n); break;
            case 2: ob1->mover_abajo(n); break;
            case 3: ob1->mover_izquierda(n); break;
            case 4: ob1->mover_derecha(n); break;
            case 5: break;
            default: cout<<"\nSe equivocó de opción de menu";
        }

        cout<<"\nPosicion Actual (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl;

    }while(opt !=5);

    
    return 0;
}