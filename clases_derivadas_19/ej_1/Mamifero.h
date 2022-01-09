#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>

using namespace std;

class Mamifero{

    private:
        int ano_nacimiento;
        string lugar_nacimiento, raza;

    public:
        Mamifero(int ano_nacimiento, string lugar_nacimiento, string raza){
            this->ano_nacimiento = ano_nacimiento;
            this->lugar_nacimiento = lugar_nacimiento;
            this->raza = raza;
        }

        ~Mamifero(){
            
        }

    int get_ano_nacimiento(){
        return ano_nacimiento;
    }
    
    string get_lugar_nacimiento(){
        return lugar_nacimiento;
    }

    string get_raza(){
        return raza;
    }

    virtual string imprimir_dieta()=0;


};

#endif