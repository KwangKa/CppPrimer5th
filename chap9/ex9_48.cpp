#include <string>
#include <iostream>

int main()
{
    std::string numbers("0123456789");
    std::string name("45");

    std::string::size_type pos = 0;
    pos = numbers.find(name);
    std::cout << pos;
    std::cout << std::endl;

    return 0;
}
