#include <iostream>
#include "lib.h"
using namespace std;
int maggiore(int numeri[],int dim){
    int b=0;
    b=numeri[0];
    for(int j=0;j<dim;j++){
        if(b<numeri[j]){
            b=numeri[j];
        }
    }
    return b;
}
