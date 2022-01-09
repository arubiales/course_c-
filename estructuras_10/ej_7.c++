#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

struct Etapa{
    int horas;
    int min;
    int seg;
}etp[100];

int main(){
    int n_etapas;
    float horas_total, minutos_total, segundos_total;

    cout<<"Introduzca el número de etapas: "; cin>>n_etapas;

    for(int i=0; i<n_etapas; i+=1){
        cout<<"Etapa número: "<<i<<endl;
        cout<<"Introduzca las horas: "; cin>>etp[i].horas;
        horas_total += etp[i].horas;
        cout<<"\nIntroduzca los minutos: "; cin>>etp[i].min;
        minutos_total += etp[i].min;
        if(minutos_total >= 60){
            minutos_total-= 60;
            horas_total+=1;
        }
        cout<<"\nIntroduzca los segundo: "; cin>>etp[i].seg;
        segundos_total +=  etp[i].seg;
        if(segundos_total>=60){
            segundos_total-=60;
            minutos_total+=1;
        }
    }

    cout<<"\nTiempo total empleados\n";
    cout<<"Horas: "<<horas_total<<endl;
    cout<<"Minutos: "<<minutos_total<<endl;
    cout<<"Segundos: "<<segundos_total<<endl;

    return 0;
}


