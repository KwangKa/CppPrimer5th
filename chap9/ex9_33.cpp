#include <iostream>
#include <vector>

int main() {
    std::vector<int> iv = {0, 1, 2, 3};
    auto begin = iv.begin();
    while (begin != iv.end()) {
        ++begin;
        begin = iv.insert(begin, 42);
        ++begin;
    }

    for (auto i = iv.begin(); i != iv.end(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
