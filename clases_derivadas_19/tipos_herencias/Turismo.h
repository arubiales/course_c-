#include <iostream> 
#include "Vehiculo.h"

using namespace std;

//Heredamos lo público como público, lo protegido como protegido y los privado NO se hereda
class Turismo : public Vehiculo{
    private:
        int npuertas;

    public:
        Turismo(string marca, string color, string modelo, int npuertas) : Vehiculo(marca, color, modelo){
            this->npuertas = npuertas;
        }

        ~Turismo(){

        }

        int get_npuertas(){
            return npuertas;
        }

        //Los metodos protegidos, no pueden ser usados fuera de la clase, pero si que pueden ser usados desde la propia clase, por ello podemos crear otro método que lo use.
        string retornar_modelo(){
            string mensaje = getModelo();
            return mensaje;
        }

};