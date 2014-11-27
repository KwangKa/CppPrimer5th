#include <iostream>
#include <string>

int abbrReplace(std::string&, const std::string&, const std::string&);

int main() {
    std::string s = "tho, thrutho, tho, thru";
    std::cout << s << std::endl;
    abbrReplace(s, "tho", "though");
    std::cout << s << std::endl;
    abbrReplace(s, "thru", "through");
    std::cout << s << std::endl;

    return 0;
}

int abbrReplace(std::string &s, const std::string &oldStr, const std::string &newStr) {
    if (s.size() < oldStr.size())
        return -1;

    auto it = s.begin();
    while (it != s.end()) {
        std::string tmp = s.substr(it - s.begin(), oldStr.size());
        if (tmp.compare(oldStr) == 0) {
            auto offset = it - s.begin();
            it = s.erase(it, it + oldStr.size());
            s.insert(it, newStr.begin(), newStr.end());
            it = s.begin() + offset + newStr.size();
        }
        else
            ++it;
    }

    return 0;
}
