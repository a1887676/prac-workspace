#include <iostream>

int main() {

extern int sum_two_arrays(int array[], int secondarray[], int n);

int mainArray1[] = {1, 2, 3};
int mainArray2[] = {4, 5, 6};
int arraySize = sizeof(mainArray1)/sizeof(mainArray1[0]);

int result = sum_two_arrays(mainArray1, mainArray2, arraySize);

std::cout << "Sum of the two arrays: " << result << std::endl;

return 0;
}