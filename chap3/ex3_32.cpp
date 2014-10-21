#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "======= Part 1 ======" << endl;
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10];
    for (int i = 0; i < 10; ++i)
        arr2[i] = arr1[i];
    for (auto i : arr2)
        cout << i << " ";
    cout << endl;

    cout << "====== Part 2 ======" << endl;
    vector<int> a1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, a2;
    for (auto i : a1)
        a2.push_back(i);
    for (auto it = a2.cbegin(); it != a2.cend(); ++ it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
