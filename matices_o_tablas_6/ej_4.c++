#include <iostream>

using namespace std;

int main(){
    int matriz_3_3[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, traspuesta[3][3];

    for(int i=0; i<3; i+=1){
        for(int j=0; j<3; j+=1){
            traspuesta[j][i] = matriz_3_3[i][j];
        }
    }

    for(int i=0; i<3; i+=1){
        for(int j=0; j<3; j+=1){
            cout<<traspuesta[i][j];
        }
        cout<<"\n";
    }

    return 0;
}