#include <iostream>

double arrayMin(double* array, int size) {

double minVal = *array; 

for(int i=0;i<size;i++) {
if(*(array+i)<minVal) {
    minVal = *(array+i);
 } 
}

return minVal;
}