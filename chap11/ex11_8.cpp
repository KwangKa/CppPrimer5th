#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words;
    string w;
    while (cin >> w) {
        if (find(words.begin(), words.end(), w) == words.end())
            words.push_back(w);
    }
    for (auto e : words)
        cout << e << " ";
    cout << endl;

    return 0;
}
