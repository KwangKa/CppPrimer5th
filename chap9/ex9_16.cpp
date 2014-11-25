#include <iostream>
#include <vector>
#include <list>

int compare(std::vector<int>&, std::list<int>&);
void printv(std::vector<int>&);
void printl(std::list<int>&);

int main() {
    std::vector<int> vi = {1, 9, 8, 8};
    std::list<int> li1 = {1, 9, 8, 9};
    std::list<int> li2 = {1, 9, 8};
    std::list<int> li3 = {1, 9, 8, 8};

    std::string joinstr;
    int cmp = compare(vi, li1);
    if (cmp == 0)
        joinstr = " == ";
    else if (cmp > 0)
        joinstr = " > ";
    else
        joinstr = " < ";
    printv(vi);
    std::cout << joinstr;
    printl(li1);
    std::cout << std::endl;


    cmp = compare(vi, li2);
    if (cmp == 0)
        joinstr = " == ";
    else if (cmp > 0)
        joinstr = " > ";
    else
        joinstr = " < ";
    printv(vi);
    std::cout << joinstr;
    printl(li2);
    std::cout << std::endl;

    cmp = compare(vi, li3);
    if (cmp == 0)
        joinstr = " == ";
    else if (cmp > 0)
        joinstr = " > ";
    else
        joinstr = " < ";
    printv(vi);
    std::cout << joinstr;
    printl(li3);
    std::cout << std::endl;

    return 0;
}

int compare(std::vector<int> &vi, std::list<int> &li) {
    int ret = 0;
    auto i = vi.cbegin();
    auto j = li.cbegin();
    for (; i != vi.cend() && j != li.cend(); i++, j++) {
        if (*i > *j) {
            ret = 1;
            break;
        }
        else if (*i < *j) {
            ret = -1;
            break;
        }
    }

    if (ret != 0)
        return ret;
    else if (i != vi.cend())
        return 1;
    else if (j != li.cend())
        return -1;
    else
        return 0;
}



void printv(std::vector<int> &vi) {
    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << " ";
}

void printl(std::list<int> &li) {
    for (auto i = li.cbegin(); i != li.cend(); i++)
        std::cout << *i << " ";
}
