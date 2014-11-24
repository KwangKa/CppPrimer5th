#include <iostream>
#include <sstream>
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
    std::istringstream data("Do not go gentle into that good night");
    readStream(data);
    return 0;
}
