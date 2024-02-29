#include <iostream>

bool is_fanarray(int array[], int n) {

if(n<1){
    return false;
}

for(int i=0;i<n/2;i++) {
if(array[i] != array[n-1-i]){
return false;  
 }
}

if(n%2==0) {

for(int i=1;i<n/2;i++) {
if(array[i]==array[i-1] || array[i]<array[i-1]){
return false;
 }
}
}

if(n%2==1) {
for(int i=1;i<n/2+1;i++) {
if(array[i]==array[i-1] || array[i]<array[i-1]){
return false;
 }
}    
}

//{1,2,1,2,1}

return true;
}


