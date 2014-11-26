#include <iostream>
#include <vector>

int main() {
    std::vector<int> iv;
    std::cout << "Get first element from an EMPTY vector, choose one method bellow: " << std::endl;
    std::cout << "[1]at  [2]index  [3]front  [4]begin\n";
    int choice;
    std::cin >> choice;
    if (choice == 1)
        std::cout << iv.at(0) << std::endl;
    else if (choice == 2)
        std::cout << iv[0] << std::endl;
    else if (choice == 3)
        std::cout << iv.front() << std::endl;
    else if (choice == 4)
        std::cout << *iv.begin() << std::endl;
    else
        std::cout << "Illegal choice" << std::endl;

    return 0;
}
