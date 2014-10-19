#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> iVec;
    while (cin >> i) {
        iVec.push_back(i);
    }

    auto it_end = iVec.begin() + iVec.size() - 1;
    for (auto it = iVec.begin(); it != it_end; ++it) {
        cout << (*it) << " + " << *(it+1) << " = " << *it + *(it+1) << endl;
    }

    cout << "==================" << endl;
    cout << endl;
    auto it_a = iVec.begin();
    auto it_b = it_a + iVec.size() - 1;
    for (; it_a < it_b ; ++it_a, --it_b) {
        cout << *it_a << " + " << *it_b << " = " << *it_a + *it_b << endl;
    }

    return 0;
}
