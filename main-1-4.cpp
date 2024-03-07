#include <iostream>

int main() {

extern void print_scaled(int array[3][3],int scale);

int mainArray[3][3] = {
{1,2,3},
{4,5,6},
{7,8,9}    
};

int scaleNumber = 2;

print_scaled(mainArray,scaleNumber);

return 0;
}