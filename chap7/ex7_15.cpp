#include <iostream>
#include "Person.h"
int main() {
    std::cout << "Test constructor" << std::endl;
    Person p1("David", "HEMC");
    print(std::cout, p1) << std::endl;
    Person p2(std::cin);
    print(std::cout, p2) << std::endl;
    return 0;
}
