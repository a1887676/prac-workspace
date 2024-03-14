#include <iostream>

int main() {

extern double* duplicateArray(double* array, int size);

double mainArray[] = {1.0,2.0,3.0,4.0,5.0};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);
double *p = &mainArray[0];


double *pointer = duplicateArray(p,arraySize);

return 0;
}