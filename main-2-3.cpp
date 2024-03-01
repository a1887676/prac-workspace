#include <iostream>

int main() {

extern void two_five_nine(int array[], int n);

int mainArray[] = {1, 3, 2, 2, 5, 9, 8, 9, 9};
int arraySize = sizeof(mainArray)/sizeof(mainArray[0]);

two_five_nine(mainArray, arraySize);

return 0;
}