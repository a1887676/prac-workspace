#include <iostream>

int main() {

extern int sum_if_palindrome(int integers[], int length);
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int mainArray[] = {1,2,2,1};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

int result = sum_if_palindrome(mainArray,arraySize);

std::cout << result << std::endl;
}