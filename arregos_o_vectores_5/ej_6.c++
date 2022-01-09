#include <iostream>

using namespace std;

int main(){
    int vect_1[5] = {0,1,2,3,4}, vect_2[5];

    for(int i=0; i<5; i+=1){
        vect_2[i] = vect_1[i] * 2;
        cout<<vect_2[i]<<endl;
    }

    return 0;
}
