#include <iostream>
#include <string>

#include "Person.h"

int main() {

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int size;

std::cin >> size;
std::cout << std::endl;

PersonList list1 = createPersonList(size);
PersonList shallowCopy = shallowCopyPersonList(list1);

for (int i=0; i<size; i++) {
        std::cout << "Name - " << shallowCopy.people[i].name << ", Age - " << shallowCopy.people[i].age << std::endl;
    }

return 0;
}