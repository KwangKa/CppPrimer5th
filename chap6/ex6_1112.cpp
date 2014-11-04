#include <iostream>

using namespace std;

void resetInt(int &i);
void swapInt(int &i1, int &i2);

int main() {
    cout << "Enter two Integers: ";
    int i1, i2;
    cin >> i1 >> i2;
    swapInt(i1, i2);
    cout << "Swap: " << i1 << " " << i2 << endl;
    resetInt(i1);
    resetInt(i2);
    cout << "Reset: " << i1 << " " << i2 << endl;

    return 0;
}

void resetInt(int &i) {
    i = 0;
}

void swapInt(int &i1, int &i2) {
    int tmp = i1;
    i1 = i2;
    i2 = tmp;
}
