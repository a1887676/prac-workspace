#include <iostream>

double array_mean(double array[], int n) {

double mean = 0;
double sum = 0;

if(n<1){
    return 0.0;
}

for(int i=0; i<n;i++) {
    sum = array[i]+sum;    
}

mean = sum/n;
//std::cout << array
return mean;
}
