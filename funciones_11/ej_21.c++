#include <iostream>

using namespace std;

int potenciacion(int, int);

int main(){
    int x = 2, y=4;

    cout<<potenciacion(x, y);

    return 0;
}

int potenciacion(int x, int y){
    int pot;

    if(y == 1){
        pot = x;
    }
    else{
        pot = x * potenciacion(x, y-1);
    }

    return pot;
}
