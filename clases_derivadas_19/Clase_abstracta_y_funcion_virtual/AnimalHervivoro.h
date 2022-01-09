#include <iostream>
#include "Animal.h"

using namespace std;


class AnimalHerbivoro : public Animal{
    public:
        void alimentarse(){
            cout<<"Se alimenta de hierba";
        }



};