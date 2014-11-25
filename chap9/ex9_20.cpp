#include <list>
#include <deque>
#include <iostream>

int main() {
    std::list<int> li;
    int elements;
    while (std::cin >> elements)
        li.push_back(elements);

    std::deque<int> di1;
    std::deque<int> di2;

    for (auto i = li.cbegin(); i != li.cend(); i++) {
        if ((*i) % 2 == 0)
            di1.push_back(*i);
        else
            di2.push_back(*i);
    }

    std::cout << "Even elements: ";
    for (auto i = di1.cbegin(); i != di1.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    std::cout << "Odd elements: ";
    for (auto i = di2.cbegin(); i != di2.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
