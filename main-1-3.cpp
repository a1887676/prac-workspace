#include <iostream>
#include <string>

#include "Person.h"

int main() {

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int size;

std::cin >> size;
std::cout << std::endl;

PersonList list1 = createPersonList(size);
PersonList deepCopy = deepCopyPersonList(list1);

for (int i=0; i<size; i++) {
        std::cout << "Name - " << deepCopy.people[i].name << ", Age - " << deepCopy.people[i].age << std::endl;
    }

return 0;
}