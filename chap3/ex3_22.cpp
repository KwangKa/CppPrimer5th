#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Read text into string vector
    vector<string> strVec;
    string line = "", l;
    while (getline(cin, l)) {
        if (l.empty()) {
            strVec.push_back(line);
            line = "";
            strVec.push_back("");
        }
        else {
            line += l;
        }
    }
    strVec.push_back(line);

    // Capitalize first paragraph
    for (auto it = strVec.begin(); (it != strVec.cend()) && (!(*it).empty()); ++it) {
        for ( auto c_it = (*it).begin(); c_it != (*it).end(); ++c_it)
            *c_it = toupper((*c_it));
    }

    for (auto i : strVec) {
        cout << i << endl;
    }
    return 0;
}

