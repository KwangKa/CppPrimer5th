#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> vi;
    std::istream_iterator<int> inIter(std::cin), eof;
    std::ostream_iterator<int> outIter(std::cout, " ");
    while (inIter != eof)
        vi.push_back(*inIter++);
    sort(vi.begin(), vi.end());
    
    copy(vi.begin(), vi.end(), outIter);
    std::cout << std::endl;
    return 0;
}
