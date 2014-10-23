#include <iostream>

using namespace std;

int main()
{
    int a[3][4];
    int cnt = 0;
    for (auto &row : a) {
        for (auto &col : row) {
            col = cnt;
            ++cnt;
        }
    }

    for (auto &row : a) {
        for (auto &col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
