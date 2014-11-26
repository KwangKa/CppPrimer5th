#include <iostream>
#include <vector>

int main() {
    std::vector<int> vi = {3};
    int val = *vi.cbegin();
    int val2 = vi.front();
    int val3 = vi.back();
    std::vector<int>::iterator it = vi.end();
    int val4 = *(--it);

    std::cout << val << " " << val2 << " "
              << val3 << " " << val4 << std::endl;

    return 0;
}
