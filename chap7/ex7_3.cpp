#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data total;
    if (std::cin) {
        // Read first transacion
        std::cin >> total.bookNo >> total.units_sold >> total.revenue;
    }
    while (std::cin) {
        Sales_data trans;
        std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue;
        if (total.isbn() == trans.isbn()) {
            total.combine(trans);
        }
        else {
            std::cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " ";
            if (total.units_sold) {
                std::cout << total.revenue / total.units_sold << std::endl;
            }
            else {
                std::cout << 0 << std::endl;
            }
            total.bookNo = trans.bookNo;
            total.units_sold = trans.units_sold;
            total.revenue = trans.revenue;
        }
    }
    return 0;
}
