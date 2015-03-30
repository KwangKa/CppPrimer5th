#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> allocMem(int);
void readInts(shared_ptr<vector<int>>);
void printInts(shared_ptr<vector<int>>);

int main() {
    int n;
    cin >> n;

    shared_ptr<vector<int>> vi_ptr = allocMem(n);
    readInts(vi_ptr);
    printInts(vi_ptr);

    return 0;
}

shared_ptr<vector<int>> allocMem(int n) {
    return make_shared<vector<int>>(n);
}

void readInts(shared_ptr<vector<int>> vi_ptr) {
    for (auto i = vi_ptr->begin(); i != vi_ptr->end(); ++i)
        cin >> *i;
}

void printInts(shared_ptr<vector<int>> vi_ptr) {
    for (auto i = vi_ptr->cbegin(); i != vi_ptr->end(); ++i)
        cout << *i << " ";
    cout << endl;
}
