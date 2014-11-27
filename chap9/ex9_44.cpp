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

    unsigned int i = 0;
    while (i < s.size()) {
        std::string tmp = s.substr(i, oldStr.size());
        if (tmp.compare(oldStr) == 0)
            s.replace(i, oldStr.size(), newStr);
        ++i;
    }

    return 0;
}
