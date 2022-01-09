#include<iostream>
#include "Cuadrilatero.h"

using namespace std;


float Cuadrilatero::obtener_perimetro(){
    float perimetro = 2*(lado1+lado2);
    return perimetro;
}

float Cuadrilatero::obtener_area(){
    float area = (lado1*lado2);
    return area;
}