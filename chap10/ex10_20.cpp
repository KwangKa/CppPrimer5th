#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, char **argv) {
    std::vector<std::string> words;
    std::string w;
    while (std::cin >> w)
        words.push_back(w);
    for (auto &w : words)
        std::cout << w << " ";
    std::cout << std::endl;
    int sz = atoi(argv[1]);
    auto count = count_if(words.begin(), words.end(),
                          [sz] (const std::string &s) { return s.size() >= sz;});
    std::cout << count << " word(s) of length " << atoi(argv[1]) << " or longer" << std::endl;

    return 0;
}
