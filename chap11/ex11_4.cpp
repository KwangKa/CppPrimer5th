#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, size_t> word_count;
    string s;
    while (cin >> s) {
        s.erase(remove_if(s.begin(), s.end(), (int (*)(int))ispunct), s.end());
        // convert ispunct/tolower to function pointer
        transform(s.begin(), s.end(), s.begin(), (int (*)(int))tolower);
        ++word_count[s];
    }

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << " time(s)" << endl;

    return 0;
}
