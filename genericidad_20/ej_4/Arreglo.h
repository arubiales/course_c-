#include <iostream>

using namespace std;

template <class T>
class Arreglo{
    private:
        T* arreglo;
        int indice;
        int nElementos;

    public:
        Arreglo(int n){
            arreglo = new T[n];
            indice = 0;
            nElementos = n; 
        }

        ~Arreglo(){
            delete[] arreglo;
        }

        void agregar(T elemento){
            arreglo[indice++] = elemento;
        }

        bool arreglo_lleno(){
            if(indice >=nElementos){
                return true;
            }
            else{
                return false;
            }
        }
        
        void mostrar_arreglo(){
            for(int i=0; i<indice; i++){
                cout<<arreglo[i]<<' ';
            }
        }

        void vaciar_arreglo(){
            for(int i=0; i<indice; i++){
                arreglo[i] = NULL;
            }

            indice = 0;
        }

};