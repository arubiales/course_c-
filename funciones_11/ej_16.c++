#include <iostream>

using namespace std;

int less_row(int m[][3]);



int main(){
    int m[3][3] = {1,2,3 , 4,8,6 , 12,11,4};

    less_row(m);


    return 0;
}


int less_row(int m[][3]){
    int user_r, menor=999999;

    cout<<"Indique un número de fila: "; cin>>user_r;

    for(int i=0; i<3; i+=1){
        if(m[user_r][i]< menor){
            menor = m[user_r][i];
        }
    }    

    cout<<"El menor número de fila es: "<<menor<<endl;

}