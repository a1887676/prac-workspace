#include <iostream>

int main() {

extern int num_count(int array[], int n, int number);

int mainArray[] = {1, 2, 5, 3, 5};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);
int chosenNum = 5;

int result = num_count(mainArray, arraySize, chosenNum);

std::cout << chosenNum << " appears "<< result << " times" << std::endl;

return 0;
}