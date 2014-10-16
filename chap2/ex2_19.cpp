#include <iostream>
using namespace std;

int main()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    cout << "*p=" << *p << ", " << "i=" << i << endl;
    return 0;
}
