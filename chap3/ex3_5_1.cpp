#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="", tmpS;
    while (cin >> tmpS) {
        s += tmpS;
    }
    cout << endl << s << endl;
    return 0;
}
