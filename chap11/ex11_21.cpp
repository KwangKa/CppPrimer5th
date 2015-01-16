#include <iostream>
#include <map>

using namespace std;

int main() {
    string word;
    map<string, size_t> word_count;
    while (cin >> word) {
        ++word_count.insert({word, 0}).first->second;
    }
    
    for (auto &item : word_count)
        cout << item.first << " " << item.second << endl;
    cout << endl;
    return 0;
}
