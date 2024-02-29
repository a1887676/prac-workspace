#include <iostream>

int count_evens(int number) {

int amount = 0;

if(number<1) {
    return 0;
}

for(int i=1;i<number+1;i++) {
 if(i%2==0) {
amount++;
 }   
}

return amount;
}