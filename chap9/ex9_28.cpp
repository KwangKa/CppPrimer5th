#include <iostream>
#include <forward_list>

using std::forward_list;
using std::string;

void findAndInsert(forward_list<string>&, string, string);
void printfl(forward_list<string>&);

int main() {
    forward_list<string> sfl = {"Do", "not", "go", "into", "that", "night"};
    printfl(sfl);
    std::cout << std::endl;

    findAndInsert(sfl, "go", "gentle");
    printfl(sfl);
    std::cout << std::endl;

    findAndInsert(sfl, "that", "good");
    printfl(sfl);
    std::cout << std::endl;

    findAndInsert(sfl, "XXX", "Dylan");
    printfl(sfl);
    std::cout << std::endl;

    return 0;
}

void findAndInsert(forward_list<string> &fl, string s1, string s2) {
    auto pre = fl.before_begin();
    auto cur = fl.begin();
    while (cur != fl.end()) {
        if (*cur == s1) {
            fl.insert_after(cur, s2);
            break;
        }
        else {
            pre = cur;
            cur++;
        }
    }
    if (cur == fl.end())
        fl.insert_after(pre, s2);
}

void printfl(forward_list<string> &fl) {
    for (auto i = fl.cbegin(); i != fl.cend(); i++)
        std::cout << *i << " ";
}
