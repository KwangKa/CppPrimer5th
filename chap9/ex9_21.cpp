#include <vector>
#include <iostream>

int main() {
    std::string word;
    std::vector<std::string> vs;
    auto iter = vs.begin();
    while (std::cin >> word)
        iter = vs.insert(iter, word);

    for (auto i = vs.cbegin(); i != vs.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
