#include <iostream>

int main() {

extern int count_evens(int number);

int suppliedNum = 12;

int result = count_evens(suppliedNum);

std::cout << result << " even number(s) between 1 and " << suppliedNum << std::endl;

return 0;
}