#include <iostream>
#include "Deportista.h"
#include "Alumno.h"

using namespace std;

class BDDeporte : public Alumno, public Deportista{

    private:
        float monto_beca;

    public:
        BDDeporte(string nombre_carrera, string nombre_entrenador, float monto_beca) : Alumno(nombre_carrera), Deportista(nombre_entrenador){
            this->monto_beca = monto_beca;
        }

        ~BDDeporte(){

        }

        void mostrar_datos(){
            Alumno::mostrar_datos();
            Deportista::mostrar_datos();
            cout<<monto_beca;
        }

        float get_monto_beca(){
            return monto_beca;
        }

        void set_monto_beca(float n){
            float incremento = n;
            this->monto_beca += monto_beca *(n/100);
        }
};