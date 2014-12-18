#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

bool check_size(const string&);

int main() {
    vector<string> words;
    string w;
    while (cin >> w)
        words.push_back(w);
    for (auto &i : words)
        cout << i << " ";
    cout << endl;

    auto it = stable_partition(words.begin(), words.end(), check_size);
    auto count = it - words.begin();

    cout << count << " word(s) of length 6 or shorter" << endl;
    for (auto i = words.cbegin(); i != it; ++i)
        cout << *i << " ";
    cout << endl;

    return 0;
}

bool check_size(const string &s) {
    return s.size() <= 6;
}
