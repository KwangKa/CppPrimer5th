#include <vector>
#include <iostream>
#include <string>

int main() {
    std::vector<char> vc(10, 'a');
    std::string s(vc.cbegin(), vc.cend());
    std::cout << s << std::endl;

    return 0;
}
