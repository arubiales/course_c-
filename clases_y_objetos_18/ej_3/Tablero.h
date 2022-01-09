#include <iostream>

using namespace std;

class Tablero{

    private:
        int x, y;

    public:
        Tablero(int x, int y ){
            this->x = x;
            this->y = y;
        }

        void mover_arriba(int);
        void mover_abajo(int);
        void mover_derecha(int);
        void mover_izquierda(int);
        int getX();
        int getY();


};