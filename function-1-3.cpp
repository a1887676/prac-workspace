#include <iostream>

void count_digits(int array[4][4]) {

int countArray[10] = {0};

for(int i=0;i<4;i++) {
    for(int j=0;j<4;j++) {
        if(array[i][j]==0) {
            countArray[0]++;
        }

        if(array[i][j]==1) {
            countArray[1]++;
        }

         if(array[i][j]==2) {
            countArray[2]++;
        }

         if(array[i][j]==3) {
            countArray[3]++;
        }

         if(array[i][j]==4) {
            countArray[4]++;
        }

         if(array[i][j]==5) {
            countArray[5]++;
        }

         if(array[i][j]==6) {
            countArray[6]++;
        }

         if(array[i][j]==7) {
            countArray[7]++;
        }

         if(array[i][j]==8) {
            countArray[8]++;
        }

         if(array[i][j]==9) {
            countArray[9]++;
        }
    }
}

std::cout << "0:" << countArray[0] << ";1:" << countArray[1] << ";2:" << countArray[2] << ";3:" << countArray[3] <<";4:" << countArray[4] <<";5:" << countArray[5] <<";6:" << countArray[6] <<";7:" << countArray[7] <<";8:" << countArray[8] <<";9:" << countArray[9] << std::endl;
}