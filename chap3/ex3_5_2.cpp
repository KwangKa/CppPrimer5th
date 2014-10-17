#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="", tmpS;
    if (cin >> s) {
        while (cin >> tmpS) {
            s = s + " " + tmpS;
        }
        cout << endl << s << endl;
    }
    return 0;
}
