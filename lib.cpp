#include <iostream>
#include "lib.h"
using namespace std;
int maggiore(int numeri[],int dim){
    int b=0,num=0;
    for(int i=0;i<dim;i++){
        num=0;
        cin>>num;
        numeri[i]=num;
    }
    b=numeri[0];
    for(int j=0;j<dim;j++){
        if(b<numeri[j]){
            b=numeri[j];
        }
    }
    return b;
}
