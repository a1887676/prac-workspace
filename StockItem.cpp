#include <iostream>
#include <string>

#include "StockItem.h"

StockItem::StockItem() : description("") , code_num(0) {}

StockItem::StockItem(int code_num, std::string description) : description(description), code_num(code_num) {}

std::string StockItem::get_description() {
    return description;
}

int StockItem::get_item_code() {
    return code_num;
}