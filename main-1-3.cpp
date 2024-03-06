#include <iostream> 

int main() {

extern void count_digits(int array[4][4]);

int mainArray[4][4] = {
{1,2,3,4},
{5,6,7,8},
{1,2,3,4},
{5,6,7,8},    
};

count_digits(mainArray);

return 0;
}