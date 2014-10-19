#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> ivec;
    while (cin >> i) {
        ivec.push_back(i);
    }
    int a,b;
    for (decltype(ivec.size()) idx = 0; idx < ivec.size() / 2; ++idx) {
        a = ivec[idx];
        b = ivec[ivec.size() - idx - 1];
        cout << a << " + " << b << " = " << a + b <<endl;
    }
    return 0;
}
