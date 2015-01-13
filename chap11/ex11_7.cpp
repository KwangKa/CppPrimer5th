#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {
    map<string, vector<string>> fam;
    vector<string> children{"Alice", "Bob", "Chuck"};
    fam["Jobs"] = children;

    for (auto e : fam) {
        cout << e.first << ":\n";
        for (auto c : e.second)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}
