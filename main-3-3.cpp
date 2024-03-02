#include <iostream>

int main() {

extern double weighted_average(int array[], int n);

int mainArray[] = {1, 2, 1, 4, 1, 3};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = weighted_average(mainArray, arraySize);

std::cout << "Weighted Average: " << result << std::endl;

return 0;
}