#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> iVec;
    cout << "Enter 10 integer(Ctrl+d to end):";
    int i;
    while (cin >> i) {
        iVec.push_back(i);
    }

    for (auto it = iVec.begin(); it != iVec.end(); ++it) {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
