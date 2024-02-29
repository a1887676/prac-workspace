#include <iostream> 

int main() {

extern bool is_fanarray(int array[], int n);

int mainArray[] = {1, 2, 3, 2, 1};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = is_fanarray(mainArray, arraySize);

std::cout << "fanarray: " << result << std::endl;

return 0;
}