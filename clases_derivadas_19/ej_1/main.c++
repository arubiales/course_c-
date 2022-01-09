#include <iostream>
#include "Felino.h"
#include "GatoDomestico.h"

using namespace std;

int main(int argc, char** argv){
    GatoDomestico* minino = new GatoDomestico(1993, "Badajoz", "humanoide", "Joaquín");
    Felino* estrellaCirco = new Felino(2000, "Cerdolandia", "puerco", "victoriasroom");

    
    cout<<"Dieta del minino: "<<minino->imprimir_dieta()<<endl;
    cout<<"Ano de nacimiento: "<<minino->get_ano_nacimiento()<<endl;
    cout<<"Raza del minino: "<<minino->get_raza()<<endl;

    cout<<"Dieta de la estralla del circo: "<<estrellaCirco->imprimir_dieta()<<endl;
    cout<<"Ano de nacimiento Estrella: "<<estrellaCirco->get_ano_nacimiento()<<endl;
    cout<<"Raza de la Estrella: "<<minino->get_raza()<<endl;

    cout<<"El nombre del minimo era: "<<minino->get_nombre_dueno()<<endl;
    minino->set_nombre_dueno("Dori");
    cout<<"Y ahora es: "<<minino->get_nombre_dueno()<<endl;

    cout<<"\n";

    cout<<"El nombre del circo era: "<<estrellaCirco->get_nombre_circo()<<endl;
    estrellaCirco->set_nombre_circo("victoriashouse");
    cout<<"Y ahora es: "<<estrellaCirco->get_nombre_circo()<<endl;
    
    // delete mamiferos;

    return 0;
}