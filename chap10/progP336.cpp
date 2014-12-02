#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    int val = 42;
    std::vector<int>  vi = {1, 2, 3, 43, 42, 33};
    auto result = find(vi.cbegin(), vi.cend(), val);
    std::cout << "The value " << val
              << (result == vi.cend() ? " is not present" : " is present")
              << std::endl;

    return 0;
}
