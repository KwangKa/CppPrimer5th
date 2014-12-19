#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::istream_iterator<std::string> str_iter(std::cin), eof;
    std::vector<std::string> words;
    while (str_iter != eof)
        words.push_back(*str_iter++);
    std::ostream_iterator<std::string> out_iter(std::cout, " ");
    for (auto &w : words)
        out_iter = w;
    std::cout << std::endl;

    return 0;
}
