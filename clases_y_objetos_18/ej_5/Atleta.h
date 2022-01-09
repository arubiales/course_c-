#include <iostream>

using namespace std;

class Atleta{
    
    private:
        int numero;
        string nombre;
        float tiempo;

    public:
        Atleta(int numero, string nombre, float tiempo){
            this->numero = numero;
            this->nombre = nombre;
            this->tiempo = tiempo;
        }

        Atleta(){

        }

        ~Atleta(){

        }

        float get_tiempo_carrera();
        static int mostrar_ganador(Atleta atletas[], int n);
        void mostrar_datos();

};