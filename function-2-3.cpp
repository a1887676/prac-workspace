#include <iostream>

int sum_if_palindrome(int integers[], int length) {

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);

int resultPalin = is_palindrome(integers,length);

if(length<1) {
return -1;
}

if(resultPalin==0)
return -2;

if(resultPalin==1) {
int resultSum = sum_array_elements(integers,length);
return resultSum; 
}


}



bool is_palindrome(int integers[], int length) {

for(int i=0;i<length;i++) {
    if(integers[i] != integers[length-1-i]) {
        return false;
    }
}

return true;
}



int sum_array_elements(int integers[], int length) {

int sum=0;
for(int i=0;i<length;i++) {
    sum=sum+integers[i];
}

return sum;
}