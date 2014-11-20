#include <iostream>
#include <string>
#include "Person.h"
int main()
{
    std::cout << "name\taddress" << std::endl;
    Person p;
    while (read(std::cin, p)) {
        print(std::cout, p);
        std::cout << std::endl;
    }

    return 0;
}
