#include <iostream>

using namespace std;

void ingresar_num();
int comprobar_par(int);

int n;

int main(){

    ingresar_num();
    comprobar_par(n);


    return 0;
}


void ingresar_num(){
    cout<<"Por favor introduzca un número: "; cin>>n;
}

int comprobar_par(int n){
    if(n%2 == 0){
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"Es impar"<<endl;
    }

    cout<<&n<<endl;
}