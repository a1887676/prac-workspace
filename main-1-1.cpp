#include <iostream>
#include <string>

#include "Person.h"

int main() {

extern Person* createPersonArray(int n);

int size;

std::cin >> size;
std::cout << std::endl;

Person* people = createPersonArray(size);

for (int i=0; i<size; i++) {
        std::cout << "Name - " << people[i].name << ", Age - " << people[i].age << std::endl;
    }

return 0;
}