#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHervivoro.h"

using namespace std;

int main(int argc, char** argv){
    Planta* planta1 = new Planta();
    AnimalCarnivoro* animal1 = new AnimalCarnivoro();
    AnimalHerbivoro* animal2 = new AnimalHerbivoro();

    planta1->alimentarse();
    animal1->alimentarse();
    animal2->alimentarse();

    return 0;
}