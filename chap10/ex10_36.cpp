#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
    std::list<int> li;
    std::istream_iterator<int> in_iter(std::cin), in_eof;
    while (in_iter != in_eof)
        li.push_back(*in_iter++);

    auto lastZero = find(li.crbegin(), li.crend(), 0);
    if (lastZero != li.crend())
        std::cout << "0 exists!" << std::endl;
    else
        std::cout << "No 0 exists!" << std::endl;

    return 0;
}
