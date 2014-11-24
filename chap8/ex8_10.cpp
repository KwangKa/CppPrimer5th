#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    // Read strings from file
    ifstream inFile(argv[1]);
    vector<string> vStr;
    if (inFile) {
        string s;
        while (getline(inFile, s))
            vStr.push_back(s);
    }
    else
        cerr << "Failed to open file: " + string(argv[1]) << endl;

    // Read words from vector<string>
    for (string s : vStr) {
        istringstream iss(s);
        string word;
        while (iss >> word)
            cout << word << endl;
    }

    return 0;
}
