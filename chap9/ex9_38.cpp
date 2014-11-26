#include <vector>
#include <iostream>

void printSC(std::vector<int>&);

int main() {
    std::vector<int> ivec;
    std::cout << "std::vector<int> ivec;" << std::endl;
    printSC(ivec);

    for (std::vector<int>::size_type ix = 0; ix != 24; ++ix)
        ivec.push_back(ix);
    std::cout << "for (std::vector<int>::size_type ix = 0; ix != 24; ++ix)\n\t"
                 "ivec.push_back(ix);" << std::endl;
    printSC(ivec);

    ivec.reserve(50);
    std::cout << "ivec.reserve(50);" << std::endl;
    printSC(ivec);

    while (ivec.size() != ivec.capacity())
        ivec.push_back(0);
    std::cout << "while (ivec.size() != ivec.capacity())\n\t"
                 "ivec.push_back(0);" << std::endl;
    printSC(ivec);

    ivec.push_back(42);
    std::cout << "ivec.push_back(42);" << std::endl;
    printSC(ivec);

    ivec.shrink_to_fit();
    std::cout << "ivec.shrink_to_fit();" << std::endl;
    printSC(ivec);

    return 0;
}

void printSC(std::vector<int> &vi) {
    std::cout << "size: " << vi.size() << "\tcapacity: " << vi.capacity() << std::endl;
    std::cout << std::endl;
}
