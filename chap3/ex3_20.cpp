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
    for (decltype(ivec.size()) idx = 1; idx < ivec.size() ; ++idx) {
        cout << ivec[idx-1] << " + " << ivec[idx] << " = " << ivec[idx-1] + ivec[idx] <<endl;
    }
    return 0;
}
