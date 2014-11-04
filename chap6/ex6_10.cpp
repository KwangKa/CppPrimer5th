#include <iostream>

using namespace std;

void swapInt(int *i1, int *i2);

int main() {
    cout << "Enter two integer: ";
    int i1, i2;
    cin >> i1 >> i2;
    swapInt(&i1, &i2);
    cout << i1 << " " << i2 << endl;
    return 0;
}

void swapInt(int *i1, int *i2) {
    int tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}
