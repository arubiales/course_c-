#include <iostream>;

using namespace std;

int main(){
    int matriz1[3][3]{{1,2,3}, {4,5,6}, {7,8,9}}, matriz2[3][3]{{-1,-2,-3,}, {-4,-5,-6}, {-7,-8,-9}};

    for(int i=0; i<3; i+=1){
        for(int j=0; j<3; j+=1){
            cout<<matriz1[i][j] + matriz2[i][j];
        }
    cout<<"\n";
    }

    return 0;
}