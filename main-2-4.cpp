#include <iostream> 

int main() {

extern bool is_ascending(int array[], int n);

int mainArray[] = {1, 2, 3, 4, 5};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = is_ascending(mainArray, arraySize);

std::cout << "Is ascending: " << result << std::endl;

return 0;
}