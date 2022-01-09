#include <iostream>

using namespace std;

template <class TIPOD>
void despliege(TIPOD n);


int main(){
    int n=4;

    despliege(n);

    return 0;
}

template <class TIPOD>
void despliege(TIPOD n){
    cout<<n<<endl;
}