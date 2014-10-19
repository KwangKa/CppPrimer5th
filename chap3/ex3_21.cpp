#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    cout << "vector<int> v1" << endl;
    cout << "size = " << v1.size() << endl;
    cout << "elements:";
    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v2(10);
    cout << "vector<int> v2(10)" << endl;
    cout << "size = " << v2.size() << endl;
    cout << "elements:";
    for (auto it = v2.cbegin(); it != v2.cend(); ++it)
        cout << *it << " ";
    cout << endl;
    
    vector<int> v3(10, 42);
    cout << "vector<int> v3(10, 42)" << endl;
    cout << "size = " << v3.size() << endl;
    cout << "elements:";
    for (auto it = v3.cbegin(); it != v3.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v4{10};
    cout << "vector<int> v4{10}" << endl;
    cout << "size = " << v4.size() << endl;
    cout << "elements:";
    for (auto it = v4.cbegin(); it != v4.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> v5{10, 42};
    cout << "vector<int> v5{10, 42}" << endl;
    cout << "size = " << v5.size() << endl;
    cout << "elements:";
    for (auto it = v5.cbegin(); it != v5.cend(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<string> v6{10};
    cout << "vector<string> v6{10}" << endl;
    cout << "size = " << v6.size() << endl;
    cout << "elements:";
    for (auto it = v6.cbegin(); it != v6.cend(); ++it)
        cout << *it << " ";
    cout << endl;


    /* G++ 4.8 compile error
    vector<int> v7{10, "hi"};
    cout << "vector<int> v7{10, \"hi\"}" << endl;
    cout << "size = " << v7.size() << endl;
    cout << "elements:";
    for (auto it : v7)
        cout << it << " ";
    cout << endl;
    */

    return 0;
}
