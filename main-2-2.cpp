#include <iostream>

int main() {

extern int max_element(int array[], int n);

int mainArray[] = {1, 2, 3, 4, 5};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = max_element(mainArray, arraySize);

std::cout << "Largest element is: " << result << std::endl;

return 0;
}