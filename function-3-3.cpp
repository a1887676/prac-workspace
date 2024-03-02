#include <iostream>

double weighted_average(int array[], int n) {

if(n<1) {
    return 0.0;
}

double weightedSum = 0.0;

for(int i=0;i<n;i++) {
    
    int count = 0;
    
    for(int j=0;j<n;j++) {
        
        if (array[j] == array[i])
        count++;
    }
weightedSum = weightedSum+static_cast<double>(array[i]*count)/n;
}

return weightedSum;
}