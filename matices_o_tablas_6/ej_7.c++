#include <iostream>
using namespace std;

int main(){
    int matriz1[3][3] = {1,1,1 , 1,2,1 , 1,1,1}, matriz2[3][3] = {1,1,1 , 1,1,1 ,1,1,1}, resultado[3][3];

    for(int i=0; i<3; i+=1){
        for(int j=0; j<3; j+=1){
            resultado[i][j] = 0;
            for(int k=0; k<3; k+=1){
                resultado[i][j] += matriz1[i][k]* matriz2[k][i];
            }
            cout<<resultado[i][j];
        }
        cout<<endl;
    }


    
    return 0;
}