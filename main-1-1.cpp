#include <iostream>

int main() {

extern int sum_diagonal(int array[4][4]);

int mainArray[4][4] = {
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16} };

int result = sum_diagonal(mainArray);

std::cout << "diagonal sum is: " << result << std::endl;
return 0;
}