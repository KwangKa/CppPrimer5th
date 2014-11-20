#include <iostream>
//#include <string>
#include "Sales_data.h"

int main() {
    std::cout << "Default Constructor" << std::endl;
    Sales_data sd1;
    print(std::cout, sd1);
    std::cout << std::endl;
    
    std::cout << "Construct with bookNo" << std::endl;
    Sales_data sd2("978-7-121");
    print(std::cout, sd2);
    std::cout << std::endl;
    
    std::cout << "Construct with bookNo, units_sold, price" << std::endl;
    Sales_data sd3("978-7-121", 3, 25);
    print(std::cout, sd3);
    std::cout << std::endl;

    std::cout << "Construct with istream std::cin" << std::endl;
    Sales_data sd4(std::cin);
    print(std::cout, sd4);
    std::cout << std::endl;

    return 0;
}
