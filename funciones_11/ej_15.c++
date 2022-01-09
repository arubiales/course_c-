#include <iostream>

using namespace std;

void calc_simetria(int m[][3], int, int);


int main(){
    int m[3][3] = {{1,2,3}, {3,3,5}, {3,5,6}};
    const int NROW = 3, NCOL = 3;

    calc_simetria(m, NROW, NCOL);

    return 0;
}

void calc_simetria(int m[][3], int r, int c){

    if(r!=c){
        cout<<"Las matrices NO son simétricas: ";
    }

    char band = 'V';

    for(int i=0; i<r; i+=1){
        for(int j=0; j<c; j+=1){
            if(m[i][j] != m[j][i]){
                band = 'F';
            }
        }
    }

    if(band == 'V'){
        cout<<"Las matrices son simétricas: ";
    }
    else{
        cout<<"Las matrices NO son simétricas: ";
    }
}