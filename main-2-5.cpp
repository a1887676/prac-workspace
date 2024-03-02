#include <iostream>

int main() {

extern bool is_descending(int array[], int n); 

int mainArray[] = {5, 4, 3, 2, 1};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = is_descending(mainArray, arraySize);

std::cout << "Is descending: " << result << std::endl;

return 0;
}