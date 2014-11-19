#include <iostream>
#include <string>
#include "Person.h"
int main()
{
    while (std::cin) {
        Person p;
        std::cin >> p.name >> p.address;
        std::cout << p.getName() << " + " << p.getAddress() << std::endl;
    }
    return 0;
}
