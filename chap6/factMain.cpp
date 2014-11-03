#include <iostream>
#include "Chapter6.h"

using namespace std;

int main() {
    int  n;
    cout << "Enter an integer:";
    cin >> n;
    cout << n << "! = " << fact(n) << endl;
    return 0;
}
