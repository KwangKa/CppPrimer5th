#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *p1;
    p1 = &a;
    cout << *p1 << a << endl;
    *p1 = 20;
    cout << *p1 << a << endl;
    return 0;
}
