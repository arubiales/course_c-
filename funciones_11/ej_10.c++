#include <iostream>

using namespace std;

void calc_anos(int, int&, int&, int&);

int main(){
    int total_dias = 0, dias, meses, anos;

    cout<<"Pase un número de días: "; cin>>total_dias;

    calc_anos(total_dias, dias, meses, anos);

    cout<<"Añós: "<<anos<<endl;
    cout<<"Meses: "<<meses<<endl;
    cout<<"Días: "<<dias<<endl;
    
    return 0;
}


void calc_anos(int total_dias, int& dias, int& meses, int& anos){

    anos = total_dias/365;
    total_dias %= 365;
    meses = total_dias / 30;
    total_dias %= 30;
    dias = total_dias;
}