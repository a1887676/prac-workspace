#include <iostream>

double* duplicateArray(double* array, int size) {

int funcArray[size];
double *newArray = &funcArray[0] 

for(int i=0;i<size;i++) {
    *(newArray+i) = *(array+i);
}

return newArray;
}