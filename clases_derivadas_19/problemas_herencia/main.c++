#include <iostream>
#include "ClaseDerivada.h"


using namespace std;



int main(int argc, char** argv){

    ClaseDerivada* cd1 = new ClaseDerivada(5, 10, 15);

    cout<<"x: "<<cd1->getX()<<endl;

    delete cd1;
    return 0;
}