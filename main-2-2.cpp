#include <iostream> 

int main() {

extern int binary_to_int(int binary_digits[], int number_of_digits);

int mainArray[] = {1,0,0,1,0,1,0};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = binary_to_int(mainArray,arraySize);

std::cout << result << std::endl;

return 0;
}