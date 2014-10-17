#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter two string:" << endl;
    string s1, s2;
    cin >> s1 >> s2;
    cout << "The bigger one is: ";
    if (s1 > s2) {
        cout << s1 << endl;
    }
    else if (s2 > s1) {
        cout << s2 << endl;
    }
    return 0;
}
