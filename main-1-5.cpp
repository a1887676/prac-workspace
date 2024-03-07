#include <iostream>

int main() {

extern void print_summed(int array1[3][3],int array2[3][3]);

int mainArray1[3][3] = {
{1,2,3},
{4,5,6},
{7,8,9},
};

int mainArray2[3][3] = {
{0,1,2},
{3,4,5},
{6,7,8},    
};

print_summed(mainArray1,mainArray2);
return 0;
}