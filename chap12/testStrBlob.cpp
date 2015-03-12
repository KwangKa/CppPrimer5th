#include "StrBlob.h"
#include <iostream>

using namespace std;

int main() {
    StrBlob b1 = {"a", "an", "the"};
    cout << b1.size() << endl;
    {
        StrBlob b2 = b1;
        b2.push_back("about");
        cout << b2.size() << endl;
    }
    cout << b1.size() << endl;

    const StrBlob b3 = {"a", "b"};
    cout << b3.back() << endl;
    cout << b3.front() << endl;

    StrBlob b4 = {"1", "2"};
    cout << b4.back() << " " << b4.front() << endl;
    return 0;
}
