#include <iostream>

using namespace std;

template <class T>
class Materia{

    private:
        string nombre_materia;
        int clave;
        T calificacion;

    public:
        Materia(string nombre_materia, int clave, T calificacion){
            this->nombre_materia = nombre_materia;
            this->clave = clave;
            this->calificacion = calificacion;
        }

        ~Materia(){

        }

        void mostra_datos(){
            cout<<nombre_materia<<endl;
            cout<<clave<<endl;
            cout<<calificacion<<endl;
        }

        void set_calificacion(T n){
            this->calificacion = n;
        }

        T get_calificacion(){
            return calificacion;
        }





};