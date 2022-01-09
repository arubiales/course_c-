#include <iostream>

using namespace std;

int main(){
    int matrix1[2][2] = {{1,2}, {3,4}}, matrix2[2][2];

    for(int i=0; i<2; i+=1){
        for(int j=0; j<2; j+=1){
            matrix2[i][j] = matrix1[i][j];
            cout<<matrix2[i][j];
        }
        cout<<endl;
    }

    return 0;
}