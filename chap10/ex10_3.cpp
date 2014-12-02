#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vi;
    int i;
    while (std::cin >> i)
        vi.push_back(i);
    i = accumulate(vi.cbegin(), vi.cend(), 0);
    std::cout << "Sum of vecor is : " << i << std::endl;
    
    return 0;
}
