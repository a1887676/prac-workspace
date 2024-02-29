#include <iostream>

int main() {

extern int min_element(int array[], int n);

int mainArray[] = {1, 2, 3, 4, 5};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = min_element(mainArray, arraySize);

std::cout << "Smallest element is: " << result << std::endl;

return 0;
}