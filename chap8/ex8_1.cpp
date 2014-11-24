#include <iostream>
#include <string>

std::istream &readStream(std::istream &in) {
    std::string s;
    while (!in.eof() && in >> s) { 
        std::cout << s << std::endl;
    }
    in.clear();
    return in;
}

int main() 
{
    readStream(std::cin);
    return 0;
}
