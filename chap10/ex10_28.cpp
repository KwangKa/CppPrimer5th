#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

void disp(const std::vector<int> &vi) {
    for (int i : vi)
        std::cout << i << " ";
}

int main() {
    std::vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v2, v3;
    std::list<int> l1;
    copy(vi.begin(), vi.end(), front_inserter(l1));
    std::cout << "Front_inserter: ";
    for (int i : l1)
        std::cout << i << " ";
    std::cout << std::endl;

    copy(vi.begin(), vi.end(), back_inserter(v2));
    std::cout << "Back_inserter: ";
    disp(v2);
    std::cout << std::endl;

    copy(vi.begin(), vi.end(), inserter(v3, v3.begin()));
    std::cout << "Inserter: ";
    disp(v3);
    std::cout << std::endl;

    return 0;
}
