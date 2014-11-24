#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char** argv)
{
    vector<PersonInfo> persons;
    string line, word;
    ifstream inFile(argv[1]);
    if (inFile) {
        while (getline(inFile, line)) {
            PersonInfo p;
            istringstream record(line);
            record >> p.name;
            while (record >> word) {
                p.phones.push_back(word);
            }
            persons.push_back(p);
        }
    }
    else
        cerr << "Failed to open file: " + string(argv[1]) << endl;

    for (PersonInfo p : persons) {
        cout << "Name:" << p.name << endl;
        cout << "\tContacts: ";
        for (string s : p.phones)
            cout << s + " ";
        cout << endl;
    }
}
