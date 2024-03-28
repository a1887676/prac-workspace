#ifndef STOCKITEM_H
#define STOCKITEM_H

#include <iostream>
#include <string>

class StockItem {

private: 

int code_num;
std::string description;

public:

StockItem();                 
StockItem(int code_num, std::string description);      
std::string get_description();    
int get_item_code();       
~StockItem();              

};

#endif