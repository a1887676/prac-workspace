#include <iostream>

int num_count(int array[], int n, int number) {

int numAppeared = 0;

for(int i=0;i<n;i++) {
if(array[i]== number) {
numAppeared++;
 }
}

return numAppeared;
}