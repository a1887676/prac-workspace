#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {

int base_tenNum = std::stoi(decimal_number);
int base = 2;
int base_twoArray[32];
int counter = 0;

while(base_tenNum != 1/2 || base_tenNum !=0 ) {

if(base_tenNum % base == 0) {   
base_twoArray[counter] = 0;
}

if(base_tenNum % base == 1) {   
base_twoArray[counter] = 1;  
}


base_tenNum = base_tenNum / 2;
counter++;
 }

for(int i=counter-1;i>-1;i--) {

std::cout << base_twoArray[i];

}
std::cout << std::endl; 
}