#include <iostream>
#include <list>

int main() {
    std::string s;
    std::list<std::string> ds;
    while (std::cin >> s)
        ds.push_back(s);

    for (auto i = ds.cbegin(); i != ds.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
