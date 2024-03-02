#include <iostream>

int main() {

extern int median_array(int array[], int n);

int mainArray[] = {3, 5, 6, 2, 7, 1, 4};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = median_array(mainArray, arraySize);

std::cout << "Median is: " << result << std::endl;

return 0;
}