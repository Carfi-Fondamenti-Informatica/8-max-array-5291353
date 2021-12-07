#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int a=0,num=0;
    cin>> a;
    if(a<=0){
        return 0;
    }
    int numeri[a];
        for (int i = 0; i < a; i++) {
            num = 0;
            cin >> num;
            numeri[i] = num;
        }
    cout<<maggiore(numeri,a)<<endl;
    return 0;
}
