#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void elimDups(std::vector<std::string>&);
bool isShorter(const std::string&, const std::string&);
void dispvs(const std::vector<std::string>&);

int main() {
    std::vector<std::string> vs;
    std::string w;
    while (std::cin >> w) {
        vs.push_back(w);
    }
    elimDups(vs);
    dispvs(vs);
    stable_sort(vs.begin(), vs.end(), isShorter);
    dispvs(vs);

    return 0;
}

void elimDups(std::vector<std::string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

bool isShorter(const std::string &s1, const std::string &s2) {
    return s1.size() < s2.size();
}

void dispvs(const std::vector<std::string> &words) {
    for (auto i = words.cbegin(); i != words.cend(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}
