#include <iostream>
#include <fstream>
#include <string>
#include "Sales_data.h"

int main(int argc, char **argv)
{
    Sales_data total;
    std::ifstream input(argv[1]);
    std::ofstream output(argv[2], std::ofstream::app);
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                print(output, total);
                output << '\n';
                total = trans;
            }
        }
        print(output, total);
        output << '\n';
    }
    else {
        std::cout << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
