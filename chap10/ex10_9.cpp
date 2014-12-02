#include <algorithm>
#include <vector>
#include <iostream>

void disp(std::vector<std::string>&);
void elimDups(std::vector<std::string>&);

int main() {
    std::vector<std::string> vs;
    std::string word;
    while (std::cin >> word)
        vs.push_back(word);
    disp(vs);
    std::cout << std::endl;
    elimDups(vs);

    return 0;
}

void disp(std::vector<std::string> &vs) {
    for (auto i = vs.cbegin(); i != vs.cend(); i++)
        std::cout << *i << " ";
}

void elimDups(std::vector<std::string> &vs) {
    sort(vs.begin(), vs.end());
    std::cout << "Sort: ";
    disp(vs);
    std::cout << std::endl;

    auto end_unique = unique(vs.begin(), vs.end());
    std::cout << "Unique(not erase): ";
    disp(vs);
    std::cout << std::endl;

    vs.erase(end_unique, vs.end());
    std::cout << "Unique(erased): ";
    disp(vs);
    std::cout << std::endl;
}
