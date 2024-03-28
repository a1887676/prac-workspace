#include <iostream>
#include <string>

#include "StockItem.h"

int main() {

StockItem s1;

std::cout << "Item 1 description: " << s1.get_description() << std::endl;
std::cout << "Item 1 code: " << s1.get_item_code() << std::endl;

StockItem s2(1234,"water");

std::cout << "Item 2 description: " << s2.get_description() << std::endl;
std::cout << "Item 2 code: " << s2.get_item_code() << std::endl;



return 0;
}