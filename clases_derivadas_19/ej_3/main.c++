#include <iostream>
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

void menu();

Persona* equipo[3];

int main(int argc, char** argv){
    equipo[0]= new Futbolista("Andres", "Ocasion", 25, 7, "Delantero");
    equipo[1] = new Entrenador("Mou", "Da silva", 49, "Contrataque");
    equipo[2] = new Medico("Antonasio", "antonin", 80, "Medicina deportiva", 55)



    cout<<"Introduzca la opción a escoger"


    return 0;
}

void menu(){
    int opt;

    do{ 
        cout<<"\n\tIntroduzca la opción a escoger"<<endl;
        cout<<"1. Viaje en equipo"<<endl;
        cout<<"2. Entrenamiento"<<endl;
        cout<<"3. Partido Futbol"<<endl;
        cout<<"4. Planificar entrenamiento"<<endl;
        cout<<"5. Entrevista"<<endl;
        cout<<"6. Curar lesión"<<endl;
        cout<<"7. Salir"<<endl;
        cin>>opt;

        switch(opt){
            case 1:
                for(int i=0; i<3; i++){
                    equipo[i]->viaje_equipo();
                }
                break;
            case 2:
                for(int i=0; i<3; i++){
                    equipo[i]->entrenamiento();
                }
                break;
            case 3:
                for(int i=0; i<3; i++){
                    equipo[i]->partido();
                }
                break;
            case 4:
                ((Entrenador *))equipo[2]->planificar;

        }


    }


}