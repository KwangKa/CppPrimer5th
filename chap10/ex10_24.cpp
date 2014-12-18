#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using namespace std::placeholders;

bool check_size(const int i, const string &s) {
    return i > s.size();
}

int main(int argc, char **argv) {
    string s(argv[1]);
    vector<int> vi;
    int i;
    while (cin >> i)
        vi.push_back(i);
    for (auto i : vi)
        cout << i << " ";
    cout << endl;

    auto it = find_if(vi.begin(), vi.end(), bind(check_size, _1, ref(s)));
    cout << "The first int greater than length of \"" << s << "\" is " << *it << endl;

    return 0;
}
