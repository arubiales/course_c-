#include <iostream>

using namespace std;

struct Etapa{
    float hora;
    float min;
    float seg;
} etapas[3], *puntero_etapa = etapas;


void pedir_tiempo();
void calcular_etapas(Etapa *);

int main(){

    pedir_tiempo();
    calcular_etapas(puntero_etapa);

    return 0;
}

void pedir_tiempo(){
    
    for(int i=0; i<3; i++){
        cout<<"Ingrese las horas: "; cin>>(puntero_etapa+i)->hora;
        cout<<"Ingrese los minutos: "; cin>>(puntero_etapa+i)->min;
        cout<<"Ingrese los segundos: "; cin>>(puntero_etapa+i)->seg;
    }
}

void calcular_etapas(Etapa *puntero_etapa){
    int horas=0, min=0, seg=0;
    
    for(int i=0; i<3; i++){
        horas += (puntero_etapa+i)->hora;
        min += (puntero_etapa+i)->min;
        if(min >= 60){
            min -= 60;
            horas +=1;
        }
        seg += (puntero_etapa+i)->seg;
        if(seg >=60){
            seg -= 60;
            min+=1;
        }
    }

    cout<<"\nEl tiempo total de etapa ha sido: "<<horas<<' '<<min<<' '<<seg<<endl;

}