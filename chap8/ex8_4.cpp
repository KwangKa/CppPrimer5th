#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void readFile(string, vector<string>&);

int main(int argc, char **argv)
{
    vector<string> vStr;
    readFile(argv[1], vStr);
    for (string s : vStr)
        cout << s << endl;

    return 0;
}

void readFile(string fname, vector<string> &vStr)
{
    ifstream input(fname);
    if (input) {
        string s;
        while (getline(input, s))
            vStr.push_back(s);
    }
    else
        cerr << "Failed to open file " + fname << endl;
}
