#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vi;
    int i;
    while (std::cin >> i)
        vi.push_back(i);

    std::vector<int> desVi;
    unique_copy(vi.begin(), vi.end(), inserter(desVi, desVi.begin()));

    for (int i : desVi)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
