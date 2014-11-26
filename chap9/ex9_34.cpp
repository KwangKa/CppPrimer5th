#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi = {0, 1, 2, 3};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }

    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
