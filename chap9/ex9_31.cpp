#include <vector>
#include <list>
#include <forward_list>
#include <iostream>

int main() {
    // vecotr<int>
    std::cout << "vector version:" << std::endl;
    std::vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    auto iter = vi.begin();
    while (iter != vi.end()) {
        if ( *iter % 2) {
            iter = vi.insert(iter, *iter);
            iter += 2;
        }
        else {
            iter = vi.erase(iter);
        }
    }

    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    // list<int>
    std::cout << "list version:" << std::endl;
    std::list<int> li = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i = li.cbegin(); i != li.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    auto iter2 = li.begin();
    while (iter2 != li.end()) {
        if ( *iter2 % 2) {
            iter2 = li.insert(iter2, *iter2);
            iter2++;
            iter2++;
        }
        else {
            iter2 = li.erase(iter2);
        }
    }

    for (auto i = li.cbegin(); i != li.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;
    
    // forward_list<int>
    std::cout << "forward_list version:" << std::endl;
    std::forward_list<int> fli = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto i = fli.cbegin(); i != fli.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    auto pre = fli.before_begin();
    auto cur = fli.begin();
    while (cur != fli.end()) {
        if (*cur % 2) {
            //cur = fli.insert_after(pre, *cur);
            //cur++; cur++;
            //pre++; pre++;
            cur = fli.insert_after(cur, *cur);
            pre++; pre++;
            cur++;
        }
        else {
            cur = fli.erase_after(pre);
        }
    }

    for (auto i = fli.cbegin(); i != fli.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
