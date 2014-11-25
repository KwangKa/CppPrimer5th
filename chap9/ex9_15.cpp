#include <iostream>
#include <vector>
using std::vector;

void printv(vector<int> &);

int main() {
    vector<int> v1 = {1, 3, 5, 7, 9};
    vector<int> v2 = {1, 3, 5, 7, 9};
    vector<int> v3 = {1, 3, 5, 7};
    vector<int> v4 = {1, 3, 5, 7, 8};

    printv(v1);
    if (v1 == v2)
        std::cout << " == ";
    else
        std::cout << " != ";
    printv(v2);
    std::cout << std::endl;


    printv(v1);
    if (v1 == v3)
        std::cout << " == ";
    else
        std::cout << " != ";
    printv(v3);
    std::cout << std::endl;
    
    printv(v1);
    if (v1 == v4)
        std::cout << " == ";
    else
        std::cout << " != ";
    printv(v4);
    std::cout << std::endl;

    return 0;
}

void printv(vector<int> &vi) {
    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
}
