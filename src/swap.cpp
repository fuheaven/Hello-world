#include <swap.h>

void swap::run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp;
}

void swap::printInfo()
{
    std::cout << "a is:" << _a << std::endl;
    std::cout << "b is:" << _b << std::endl;
}