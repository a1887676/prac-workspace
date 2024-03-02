#include <iostream>

int main() {

extern double sum_even(double array[], int n);

double mainArray[] = {2, 1, 2, 1, 2};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = sum_even(mainArray, arraySize);

std::cout << "Sum of even index: " << result << std::endl;

return 0;
}