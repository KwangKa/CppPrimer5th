#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    int val, tmp;
    std::cin >> val;
    std::vector<int>  vi;
    while (std::cin >> tmp)
        vi.push_back(tmp);
    auto result = count(vi.cbegin(), vi.cend(), val);
    std::cout << "The value " << val
              << " present " << result << " times" << std::endl;

    return 0;
}
