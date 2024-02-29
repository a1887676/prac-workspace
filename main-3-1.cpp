#include <iostream> 

int main() {

bool is_fanarray(int array[], int n);

int mainArray[] = {1, 2, 3, 2, 1};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = is_fanarray(mainArray, arraySize);

std::cout << "The fan array: " << mainArray;
std::cout << "is a fanarray: " << result << std::endl;

return 0;
}