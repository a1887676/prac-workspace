#include <iostream> 

int main() {

extern int is_identity(int array[10][10]);

int mainArray[10][10] = {
{1,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0},
{0,0,0,1,0,0,0,0,0,0},
{0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,1,0,0},
{0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,0,0,0,0,1}};

int result = is_identity(mainArray);
std::cout << "Is identity: " << result << std::endl;

return 0;
}