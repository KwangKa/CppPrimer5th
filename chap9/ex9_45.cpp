#include <string>
#include <iostream>

std::string fullName(std::string, std::string, std::string);

int main() {
    std::string s("Cooper");
    std::string fname;
    fname = fullName("Cooper", "Mr. ", " III");
    std::cout << fname << std::endl;

    return 0;
}

std::string fullName(std::string s, std::string s1, std::string s2) {
    std::string fname(s);
    s.insert(s.begin(), s1.begin(), s1.end());
    s.append(s2);

    return s;
}
