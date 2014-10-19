#include <iostream>
#include <vector>
#include<string>
using namespace std;

int main()
{
    vector<string> iv;
    string s;
    while (cin >> s) {
        iv.push_back(s);
    }
    cout << "Vector size is: " << iv.size() << endl;
    return 0;
}
