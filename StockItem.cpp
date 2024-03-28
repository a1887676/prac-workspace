#include <iostream>
#include <string>

#include "StockItem.h"

StockItem::StockItem() : code_num(0) , description("") {}

StockItem::StockItem(int code_num, std::string description) : code_num(code_num), description(description) {}

std::string StockItem::get_description() {
    return description;
}

int StockItem::get_item_code() {
    return code_num;
}

StockItem::~StockItem() {}