#include <iostream>


int main( void )
{
    char str[] = "hello world";
    unsigned int *ing = reinterpret_cast<unsigned int*>(str);
    int strt = reinterpret_cast<int>(ing);
    std::cout << *ing << std::endl;
    std::cout << strt << std::endl;
}