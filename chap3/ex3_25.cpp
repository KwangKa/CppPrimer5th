#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i;
    vector<int> score(11, 0);
    auto ibeg = score.begin();
    while (cin >> i) {
        if (i <= 100 && i >=0) {
            int offset = i / 10;
            *(ibeg + offset) += 1;
        }
    }
    for (auto it = score.cbegin(); it != score.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
