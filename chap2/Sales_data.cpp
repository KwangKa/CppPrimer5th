#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data1, data2;

    // Read data
    double price = 0.0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = price * data1.units_sold;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = price * data2.units_sold;

    // Sum up
    if (data1.bookNo == data2.bookNo) {
        double total_r = data1.revenue + data2.revenue;
        int total_u = data1.units_sold + data2.units_sold;
        std::cout << data1.bookNo << " " << total_u << " " << total_r << std::endl;
    }
    else {
        std::cerr << "Book ISBNs must be same" << std::endl;
        return -1;
    }

    return 0;
}
