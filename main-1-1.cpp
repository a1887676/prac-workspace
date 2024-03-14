#include <iostream>

int main() {

extern double arrayMin(double *array, int size);

double mainArray[5] = {1.0,2.0,3.0,4.0,5.0};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

double *p = &mainArray[0];

int result = arrayMin(p,arraySize);

std::cout << result << std::endl;
return 0;
}