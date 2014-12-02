#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vc(10);
    //vc.reserve(10);
    fill_n(vc.begin(), 10, 1);
    
    for (auto i = vc.cbegin(); i != vc.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    return 0;
}
