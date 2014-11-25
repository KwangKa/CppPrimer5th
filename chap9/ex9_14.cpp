#include <iostream>
#include <vector>
#include <list>
#include <string>

using std::vector;
using std::list;
using std::string;

int main() {
    list<char *> lc = {"Do", "not", "go", "gentle", "into", "that", "good", "night"};
    vector<string> vs;
    vs.assign(lc.cbegin(), lc.cend());
    for (auto i = vs.cbegin(); i != vs.cend(); i++)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
