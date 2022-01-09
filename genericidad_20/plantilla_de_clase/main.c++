#include <iostream>
#include "EjemploPlantilla.h"

using namespace std;

int main(int argc, char** argv){
    //así se crean objetos de plantilla de clase
    EjemploPlantila <int, float> ob1(5, 9.87);

    ob1.mostrar_datos();

    ob1.set_dato1(10);
    ob1.set_dato2(8.78);
+
    ob1.mostrar_datos();


    return 0;
}