#include <iostream>
#include <string>

using namespace std;

void divideLine(int len=20);

int main()
{
    //=====
    divideLine();
    string s1;
    cin >> s1;
    for (auto c : s1)
        cout << c << endl;

    //=====
    divideLine();
    do {
        getline(cin, s1);
    } while (s1.empty());
    decltype(s1.size()) punc_cnt = 0;
    for (auto c : s1)
        if (ispunct(c)) { punc_cnt++;}
    cout << punc_cnt << " punctuation(s) in \"" << s1 << "\"" << endl;

    //=====
    divideLine();
    do {
        getline(cin, s1);
    } while (s1.empty());
    cout << "[Origin]: " << endl << s1 << endl;
    for (auto &c : s1)
        c = toupper(c);
    cout << "[Capitalize]:" << endl << s1 << endl;

    //=====
    divideLine();
    do {
        getline(cin, s1);
    } while (s1.empty());
    cout << "[Origin]:" << endl << s1 << endl;
    decltype(s1.size()) idx = 0;
    for (; idx != s1.size() && !isspace(s1[idx]) ; idx++)
        s1[idx] = toupper(s1[idx]);
    cout << "[Capitalize first word]:" << endl << s1 << endl;

    //=====
    divideLine();
    string cnvrt_table = "0123456789ABCDEF";
    int tmpI;
    string outStr="";
    while (cin >> tmpI) {
        cout << tmpI << " " ;
        if (tmpI >=0 && tmpI <= 15) {
            outStr += cnvrt_table[tmpI];
        }
    }
    cout << endl;
    cout << "Decimal to Hex:" << endl << outStr << endl;
    return 0;
}

void divideLine(int len)
{
    cout << endl;
    for (int tmp = 0; tmp < len; tmp ++)
        cout << "==";
    cout << endl;
}
