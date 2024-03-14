#include <iostream>

int main() {

extern void modifyArray(double* array, int size, double value);

double mainArray[5] = {1.0,2.0,3.0,4.0,5.0};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);
double add = 1.0;

double *p = &mainArray[0];

modifyArray(p,arraySize,add);

return 0;
}