#include <iostream>

using namespace std;

int main()
{
    int ia[3][4];
    int cnt = 0;
    for (auto p = begin(ia); p != end(ia); p++) {
        for (auto q = begin(*p); q != end(*p); q++) {
            *q = cnt;
            cnt++;
        }
    }

    for (auto &row : ia) {
        for (auto &col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
