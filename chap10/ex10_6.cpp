#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vi;
    int tmp;
    while (std::cin >> tmp)
        vi.push_back(tmp);
    fill_n(vi.begin(), vi.size(), 0);

    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
