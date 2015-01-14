#include <vector>
#include <utility>
#include <iostream>

using namespace std;

int main() {
    string course;
    int w;
    vector<pair<string, int>> college;

    while (cin >> course >> w) {
        college.push_back({course, w});
    }

    for (auto item : college)
        cout << item.first << " " << item.second << endl;

    return 0;
}
