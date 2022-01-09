#include <iostream>

using namespace std;

void find_primo(int);

int main(){
    int n= 10;

    find_primo(n);

    return 0;
}

void find_primo(int n){
    int *dir_n;
    dir_n = &n;
    int cont = 0;

    for(int i=1;i<n; i+=1){
        if(n%i == 0){
            cont +=1;
        }
    }

    if(cont>2){
        cout<<"El número "<<n<<" No es primo";
        cout<<"Posición: "<<dir_n<<endl;
    }
    else{
        cout<<"El número es primo"<<endl;
        cout<<"El numero "<<dir_n<<endl;
    }

}