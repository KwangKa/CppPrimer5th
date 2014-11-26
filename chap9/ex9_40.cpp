#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    std::vector<std::string> svec;
    svec.reserve(1024);
    std::string word = "python";
    int i = std::atoi(argv[1]);
    while (--i >= 0)
        svec.push_back(word);
    svec.resize(svec.size() + svec.size()/2);

    std::cout << "size: " << svec.size() << "\tcapacity: " << svec.capacity() << std::endl;
    return 0;
}
