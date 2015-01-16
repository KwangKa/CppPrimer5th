#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, size_t> word_count;
    string w;
    while (cin >> w) {
        auto ret = word_count.insert({w, 1});
        if (!ret.second) {
            ++(ret.first->second);
        }
    }

    for (const auto &word : word_count)
        cout << word.first << " occurs " << word.second << " time(s)" << endl;

    return 0;
}
