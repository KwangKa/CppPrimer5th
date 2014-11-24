#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

int main(int argc, char **argv)
{
    Sales_data total;
    std::ifstream input(argv[1]);
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                print(std::cout, total);
                std::cout << std::endl;
                total = trans;
            }
        }
        print(std::cout, total);
        std::cout << std::endl;
    }
    else {
        std::cout << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
