#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <iterator>

using namespace std;

void word_transform(ifstream&, ifstream&);
map<string, string> buildMap(ifstream&);
const string& transform(const string&, const map<string, string>&);

int main(int argc, char **argv) {
    ifstream inputFile(argv[1]);
    ifstream mapFile(argv[2]);

    word_transform(inputFile, mapFile);

    return 0;
}

void word_transform(ifstream &inputFile, ifstream &mapFile) {
    map<string, string> table = buildMap(mapFile);
    string text;
    while (getline(inputFile, text)) {
        istringstream iss(text);
        string word;
        bool firstword = true;
        while (iss >> word) {
            if (firstword)
                firstword = false;
            else
                cout << " ";
            cout << transform(word, table);
        }
        cout << endl;
    }
}

map<string, string> buildMap(ifstream &mapFile) {
    map<string, string> mapTable;
    string key, value;
    while (mapFile >> key && getline(mapFile, value)) {
        if (value.size() > 1)
            mapTable[key] = value.substr(1);
        else
            throw runtime_error("no rule for " + key);
    }
    return mapTable;
}

const string& transform(const string &word, const map<string, string> &mapTable) {
    map<string, string>::const_iterator map_it = mapTable.find(word);
    if (map_it != mapTable.cend())
        return map_it->second;
    else
        return word;
}
