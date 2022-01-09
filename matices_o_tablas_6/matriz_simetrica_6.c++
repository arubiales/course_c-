#include <iostream>

using namespace std;

int main(){
    int matriz[3][3] = {1,2,3 , 123,10,343 , 323,5,6}, is_simetric=0, result=1; 

    for(int i=0; i<3; i+=1){
        for(int j=0; j<3; j+=1){
            if(matriz[i][j] == matriz[j][i]){
                is_simetric = 1;
                cout<<is_simetric;
            }
            if(is_simetric == 0){
                result = 0;
            }
        }
    }
    
    if(result == 0){
        cout<<"La matriz NO es simétrica"<<endl;
    }
    else{
        cout<<"La matriz es simétrica"<<endl;
    }


    return 0;
}