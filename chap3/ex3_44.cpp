#include <iostream>

using namespace std;
using int_array4 = int[4];

int main()
{
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    cout << "Method 1: " << endl;
    for (int_array4 &p : ia) {
        for (const int q : p)
            cout << q << " ";
        cout << endl;
    }
    cout << endl;
    
    cout << "Method 2: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Method 3: " << endl;
    for (int_array4 *p = ia; p != ia + 3; p++) {
        for (int *q = *p; q != (*p) + 4; q++) {
            cout << *q << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
