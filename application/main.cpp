#include "main.hpp"

int main()
{
    std::cout << "Hello world\n";
    std::cout << "Please enter a random number to choose your drink : ";

    int var;
    std::cin >>var;
    if(var)
    {
        std::cout << "it is Tea for you sir\n";
    }
    else
    {
        std::cout << "it is Coffee for you sir\n";
    }
    return 0; 
}