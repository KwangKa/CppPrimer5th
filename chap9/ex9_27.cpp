#include <forward_list>
#include <iostream>

int main() {
    std::forward_list<int> ifl = {1, 9, 8, 8, 2, 0, 4, 6, 7, 9, 8};
    for (auto i = ifl.cbegin(); i != ifl.cend(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    auto pre = ifl.before_begin();
    auto cur = ifl.begin();
    while (cur != ifl.end()) {
        if (*cur % 2) {
            cur = ifl.erase_after(pre);
        }
        else {
            pre = cur;
            cur ++;
        }
    }
    for (auto i = ifl.cbegin(); i != ifl.cend(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
