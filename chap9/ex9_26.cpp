#include <iostream>
#include <list>
#include <vector>

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    std::vector<int> iv;
    std::list<int> il;
    for (int *i = std::begin(ia); i != std::end(ia); i++) {
        iv.push_back(*i);
        il.push_back(*i);
    }

    auto it1 = il.begin();
    while (it1 != il.end()) {
        if (*it1 % 2)
            it1 = il.erase(it1);
        else
            it1++;
    }

    auto it2 = iv.begin();
    while (it2 != iv.end()) {
        if (*it2 % 2)
            it2++;
        else
            it2 = iv.erase(it2);
    }

    for (int *i = std::begin(ia); i != std::end(ia); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "Even: ";
    for (auto i = il.cbegin(); i != il.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "Odd: ";
    for (auto i = iv.cbegin(); i != iv.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
