#include <iostream>
#include <vector>

using std::vector;
int main() {
    vector<int> iv1;
    vector<int> iv2(5);
    vector<int> iv3(5, -1);
    vector<int> iv4 = {0, 1, 2, 3, 4};
    vector<int> iv5(iv4);
    vector<int> iv6(iv5.cbegin(), iv5.cbegin() + 3);

    for (auto i = iv1.cbegin(); i != iv1.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    for (auto i = iv2.cbegin(); i != iv2.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;
    
    for (auto i = iv3.cbegin(); i != iv3.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    for (auto i = iv4.cbegin(); i != iv4.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    for (auto i = iv5.cbegin(); i != iv5.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    for (auto i = iv6.cbegin(); i != iv6.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;
    
    return 0;
}
