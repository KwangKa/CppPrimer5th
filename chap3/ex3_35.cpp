#include <iostream>
using namespace std;

int main()
{
    int a[] = {7, 0, 9, 3, 9, 5, 2, 7};
    for (int i : a)
        cout << i << " ";
    cout << endl;

    for (int i = 0; i < 8; ++i)
        *(a + i) = 0;
    for (int i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}
