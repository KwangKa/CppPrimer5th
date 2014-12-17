#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Sales_data.h"

int main() {
    std::vector<Sales_data> vtrans;
    Sales_data trans;
    while (read(std::cin, trans))
        vtrans.push_back(trans);
    std::cout << "Original:" << std::endl;
    for (const auto &i : vtrans) {
        print(std::cout, i);
        std::cout << std::endl;
    }

    sort(vtrans.begin(), vtrans.end(),
         [](const Sales_data &trans1, const Sales_data &trans2)
         { return trans1.isbn() < trans2.isbn();});
    
    std::cout << std::endl;
    std::cout << "Sorted by isbn:" << std::endl;
    for (const auto &i : vtrans) {
        print(std::cout, i);
        std::cout << std::endl;
    }
    return 0;
}
