#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <iostream>

int main() {
    std::vector<int> vi;
    std::list<int> li;
    int i;
    while (std::cin >> i)
        vi.push_back(i);

    auto istart = vi.crbegin() + 3;
    auto iend = vi.crend() - 2;

    copy(istart, iend, inserter(li, li.begin()));

    for (int i : li)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
