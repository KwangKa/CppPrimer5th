#include <algorithm>
#include <list>
#include <iostream>

int main() {
    std::string val, tmp;
    std::cin >> val;
    std::list<std::string>  ls;
    while (std::cin >> tmp)
        ls.push_back(tmp);
    auto result = count(ls.cbegin(), ls.cend(), val);
    std::cout << "The value " << val
              << " present " << result << " times" << std::endl;

    return 0;
}
