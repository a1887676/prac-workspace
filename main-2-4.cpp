#include <iostream>

int main() {

extern int sum_min_max(int integers[], int length);
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);

int mainArray[] = {1,2,3,4,5,6,7,8,9};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = sum_min_max(mainArray,arraySize);

std::cout << result << std::endl;
return 0;
}