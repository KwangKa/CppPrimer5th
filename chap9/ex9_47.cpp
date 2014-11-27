#include <string>
#include <iostream>

int main() {
    std::string s("ab2c3d7R4E6");
    //std::string s;
    //std::cin >> s;
    std::string numbers("0123456789");
    std::string::size_type pos = 0;
    if (s.find_first_of(numbers, 0) == std::string::npos)
        std::cout << "No digits" << std::endl;
    else
        while((pos = s.find_first_of(numbers, pos)) != std::string::npos) {
            std::cout << s[pos];
            ++pos;
        }
    std::cout << std::endl;

    std::string::size_type pos1 = 0, pos2 = 0;
    while((pos2 = s.find_first_of(numbers, pos2)) != std::string::npos) {
        std::cout << s.substr(pos1, pos2-pos1);
        pos2++;
        pos1 = pos2;
        if (pos2 >= s.size() - 1) 
            std::cout << s.substr(pos1);
    }
    std::cout << std::endl;

    return 0;
}
