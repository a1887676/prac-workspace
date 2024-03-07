#include <iostream>
#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits) {

int digitVar = 0;
for(int i=0;i<number_of_digits;i++) {
    digitVar = digitVar+binary_digits[i]*pow(2,number_of_digits-1-i);
}

return digitVar;
}