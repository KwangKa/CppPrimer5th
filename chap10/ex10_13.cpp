#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool longerThan5(std::string&);

int main() {
    std::vector<std::string> words;
    std::string s;
    while (std::cin >> s)
        words.push_back(s);
    for (auto &word : words)
        std::cout << word << " ";
    std::cout << std::endl;

    auto it = partition(words.begin(), words.end(), longerThan5);
    for (auto i = words.cbegin(); i != it; ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}

bool longerThan5(std::string &s) {
    return s.size() >= 5;
}
