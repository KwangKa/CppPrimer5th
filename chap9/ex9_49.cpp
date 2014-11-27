#include <string>
#include <fstream>
#include <iostream>

int wLen(std::string&);

int main(int argc, char** argv) {
    std::ifstream inFile(argv[1]);
    std::string word;
    std::string maxWord;
    int maxLen = 0;
    while (inFile >> word) {
        if (wLen(word) > maxLen) {
            maxWord = word;
            maxLen = wLen(word);
        }
    }

    std::cout << "Longest word without ascender and descener: " << maxWord << std::endl;

    return 0;
}

int wLen(std::string &w) {
    std::string ascDesc = "bdfghjklpqtyABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (w.find_first_of(ascDesc, 0) == std::string::npos)
        return w.size();
    else
        return -1;
}
