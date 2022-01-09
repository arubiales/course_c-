#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 0;

    for(int i=0; i<=10;i+=1){
        n = pow(i, 2) + n;
    }

    cout<<n<<endl;

    return 0;
}
