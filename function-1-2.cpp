#include <iostream>
#include <string>

#include "Person.h"

PersonList createPersonList(int n) {

PersonList list1;

list1.numPeople = n;
list1.people = new Person[n];

for(int i=0;i<n;i++) {
    list1.people[i].name = "Jane Doe";
    list1.people[i].age = 1;
}

return list1;    
}