#include<iostream>
#include "Figura.h"
#include<math.h>

using namespace std;


class Triangulo : public Figura{ //Con esta linea hacemos la herencia.
    
    private:
        float lado1, lado2, lado3;

    public:
    //primero ponemos los atributos de la clase padre
        Triangulo(int nLados, float lado1, float lado2, float lado3) : Figura(nLados){
            //No tenemos que inicializar el nLados, porque ya lo hicimos en la clase padre
            this->lado1 = lado1;
            this->lado2 = lado2;
            this->lado3 = lado3;
        }

        float areaTriangulo(){
            float p = (lado1+lado2+lado3) /2;
            float area =  sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));

            return area;
        }


};