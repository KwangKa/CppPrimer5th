#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> wordVec;
    while (cin >> word) {
        wordVec.push_back(word);
    }
    for (auto &w : wordVec) {
        for (auto &c : w) {
            c = toupper(c);
        }
        cout << w << endl;
    }

    /*
    for (auto w : wordVec) {
        cout << w << endl;
    }
    */
    return 0;
}
