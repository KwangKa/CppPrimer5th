#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "../include/Sales_item.h"

int main() {
    std::istream_iterator<Sales_item> in_iter(std::cin), in_eof;
    std::ostream_iterator<Sales_item> out_iter(std::cout, "\n");
    std::vector<Sales_item> vtrans;
    while (in_iter != in_eof)
        vtrans.push_back(*in_iter++);

    sort(vtrans.begin(), vtrans.end(), compareIsbn);
    for (auto &t : vtrans)
        out_iter = t;
    std::cout << std::endl;
    for (auto idx_start = vtrans.cbegin(), idx_end = idx_start;
         idx_start != vtrans.cend(); idx_start = idx_end) {
        idx_end = find_if(idx_start, vtrans.cend(),
                          [idx_start](const Sales_item &t)
                          { return t.isbn() != idx_start->isbn(); });
        out_iter = accumulate(idx_start, idx_end, Sales_item(idx_start -> isbn()));
    }
    
    return 0;
}
