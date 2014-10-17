#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter two string:" << endl;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size()) {
        cout << "Two strings are of same length" << endl;
    }
    else {
        cout << "The longer one is: ";
        if (s1.size() > s2.size()) {
            cout << s1 << endl;
        }
        else if (s2.size() > s1.size()) {
            cout << s2 << endl;
        }
    }
    return 0;
}
