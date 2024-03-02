#include <iostream>

int median_array(int array[], int n) {

if(n<1 || n%2==0) {
    return 0;
}

for(int i=0;i<n;i++) {
    for(int j=i+1; j<n;j++) {
        if(array[i]>array[j]) {
            int temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}

int medianIndex = n/2;
int median = array[medianIndex];

return median;
}