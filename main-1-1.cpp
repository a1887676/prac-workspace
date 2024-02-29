#include <iostream>

int array_sum(int array[], int n);

int main() {

    int mainArray[] = {1, 2, 3, 4, 5};
    int sizeArray = sizeof(mainArray)/sizeof(mainArray[0]);
    

    int mainSum = array_sum(mainArray, sizeArray);

    std::cout << "Sum of array: " << mainSum << std::endl;

    return 0;
}