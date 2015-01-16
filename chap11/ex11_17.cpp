#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
void dispMset(multiset<string>&);
void dispVec(vector<string>&);

int main() {
    multiset<string> c{"A", "BB", "CCC", "DDDD"};
    vector<string> v{"1", "22", "333", "4444"};
    cout << "c : ";
    dispMset(c);
    cout<< endl;
    cout << "v : ";
    dispVec(v);
    cout << endl;
    cout << endl;

    cout << "copy(v.begin(), v.end(), inserter(c, c.end())) ===> ";
    try {
        copy(v.begin(), v.end(), inserter(c, c.end()));
        dispMset(c);
        cout << endl;
    } catch(...) {
        cout << "Failed" <<endl;
    }
    /*
    cout << "copy(v.begin(), v.end(), back_inserter(c)) ===> ";
    try {
        copy(v.begin(), v.end(), back_inserter(c));
        dispMset(c);
        cout << endl;
    } catch(...) {
        cout << "Failed" <<endl;
    }
    */
    cout << "copy(c.begin(), c.end(), inserter(v, v.end())) ===> ";
    try {
        copy(c.begin(), c.end(), inserter(v, v.end()));
        dispVec(v);
        cout << endl;
    } catch(...) {
        cout << "Failed" <<endl;
    }

    cout << "copy(c.begin(), c.end(), back_inserter(v)) ===> ";
    try {
        copy(c.begin(), c.end(), back_inserter(v));
        dispVec(v);
        cout << endl;
    } catch(...) {
        cout << "Failed" <<endl;
    }

    return 0;
}

void dispMset(multiset<string> &ms) {
    for (auto &i : ms)
        cout << i << " ";
}

void dispVec(vector<string> &vec) {
    for (auto &i : vec)
        cout << i << " ";
}
