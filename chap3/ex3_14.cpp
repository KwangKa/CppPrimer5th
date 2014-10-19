#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> iv;
    int i;
    while (cin >> i) {
        iv.push_back(i);
    }
    cout << "Vector size is: " << iv.size() << endl;
    return 0;
}
