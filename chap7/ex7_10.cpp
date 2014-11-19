#include <iostream>
#include <string>
#include "Person.h"

int main()
{
    Person p1, p2;
    if (read(read(std::cin, p1), p2)) {
        print(std::cout, p1);
        std::cout << std::endl;
        print(std::cout, p2);
        std::cout << std::endl;
    }
    else {
        std::cout << "Too few data\n";
    }
    return 0;
}
