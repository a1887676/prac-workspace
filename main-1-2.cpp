#include <iostream>

int main() {

extern double array_mean(int array[], int n);

int mainArray[] = {1,2};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

double result = array_mean(mainArray,arraySize);

std::cout << "Average sum of array elements: " << result << std::endl;

return 0;
}