#include <iostream>
#include "Estatico.h"

using namespace std;

 int main(int argc, char** argv){
     Estatico* ob1 = new Estatico();
     Estatico* ob2 = new Estatico();
     Estatico* ob3 = new Estatico();

     cout<<ob1->getContador()<<endl;

     //LLamar métodos estáticos, como pertenece a la clase, no hace falta llamar al objeto
     cout<<Estatico::sumar(4,5)<<endl;

     return 0;
 }