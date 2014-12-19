#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> vi;
    std::istream_iterator<int> in_iter(std::cin), in_eof;
    while (in_iter != in_eof)
        vi.push_back(*in_iter++);

    std::cout << "Print a vector in reverse order with reverse_iterators:" << std::endl;
    for (auto it = vi.crbegin(); it != vi.crend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "Print a vector in reverse order with ordinary iterators:" << std::endl;
    for (auto it = vi.cend(); it != vi.cbegin(); --it)
        std::cout << *(it - 1) << " ";
    std::cout << std::endl;

    return 0;
}
