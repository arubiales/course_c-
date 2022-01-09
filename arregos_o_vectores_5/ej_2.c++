#include <iostream>

using namespace std;

int main(){
    int vector[7] = {7,8,1,51,1,4,4};

    for(int i=6; i>=0; i-=1){
        cout<<vector[i]<<endl;
    }

    return 0;
}