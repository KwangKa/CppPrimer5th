#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <utility>

using namespace std;
int main() {
    map<string, vector<pair<string, string>>> fams;
    string line, fname, lname, birthday;
    while (getline(cin, line)) {
        istringstream person(line);
        person >> fname >> lname >> birthday;
        fams[lname].push_back({fname, birthday});
    }

    for (auto fam : fams) {
        cout << fam.first << ":\n";
        for (auto c : fam.second)
            cout << c.first << " " << c.second << endl;
        cout << endl;
    }
    return 0;
}
