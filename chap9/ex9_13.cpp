#include <iostream>
#include <list>
#include <vector>

using std::vector; using std::list;

int main() {
    list<int> li = {0, 1, 2, 3};
    vector<double> vd(li.cbegin(), li.cend());
    std::cout << "list<int> is : ";
    for (auto i = li.cbegin(); i != li.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;
    std::cout << "initial vector<double> with iterator of list<int>" << std::endl;
    std::cout << "vector<double> is :";
    for (auto i = vd.cbegin(); i != vd.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;

    std::cout << std::endl;
    
    vector<int> vi = {0, 1, 2, 3};
    vector<double> vd2(vi.cbegin(), vi.cend());
    std::cout << "vector<int> is : ";
    for (auto i = vi.cbegin(); i != vi.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;
    std::cout << "initial vector<double> with iterator of vector<int>" << std::endl;
    std::cout << "vector<double> is :";
    for (auto i = vd2.cbegin(); i != vd2.cend(); i++)
        std::cout << *i << ' ';
    std::cout << std::endl;


    return 0;
}
