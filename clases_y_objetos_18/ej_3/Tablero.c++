#include <iostream>
#include "Tablero.h"

using namespace std;

void Tablero::mover_arriba(int n){
    y += n;
}

void Tablero::mover_abajo(int n){
    y -= n;
}

void Tablero::mover_izquierda(int n){
    x -=n;
}

void Tablero::mover_derecha(int n){
    x += n;
}

int Tablero::getX(){
    return x;
}

int Tablero::getY(){
    return y;
}