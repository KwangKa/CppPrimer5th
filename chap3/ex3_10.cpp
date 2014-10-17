#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s)) {
        if (!s.empty()) {
            for (auto &c : s) {
                if (ispunct(c))
                    c = ' ';
            }
            cout << s << endl;
        }
    }
    return 0;
}
