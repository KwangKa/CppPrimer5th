#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[5] = {1,2,3,4,5}, b[5] = {1,2,2,2,2};
    vector<int> v1{1, 2, 2, 4}, v2{1, 2, 3, 4};

    bool same = true;
    for (int i = 0; i < 5; ++i)
        if (a[i] != b[i]) {
            same = false;
            break;
        }
    if (same) {
        cout << "same" << endl;
    }
    else {
        cout << "different" << endl;
    }

    same = true;
    if (v1.size() != v2.size())
        cout << "different" << endl;
    else {
        for (auto i1 = v1.cbegin(), i2 = v2.cbegin(); i1 != v1.cend() && i2 != v2.cend(); ++i1, ++i2)
            if (*i1 != *i2) {
                same = false;
                break;
            }
    }
    if (same) {
        cout << "same" << endl;
    }
    else {
        cout << "different" << endl;
    }
    return 0;
}
