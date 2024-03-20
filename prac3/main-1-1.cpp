#include <iostream>
#include <string>

#include "Person.h"

int main() {

extern Person* createPersonArray(int n);

int size;

std::cin >> size;
std::cout << std::endl;

createPersonArray(size);

return 0;
}