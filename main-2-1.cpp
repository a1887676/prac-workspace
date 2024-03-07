#include <iostream>
#include <string>

int main() {

extern void print_binary_str(std::string decimal_number);

std::string str = "37";

print_binary_str(str);
return 0;    
}