#include "TextQuery.h"

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "Enter word to look for, or q to quit: ";
        string s;
        if (!(cin>>s) || s == "q") break;
        print(cout, tq.query(s));
    }
}

int main(int argc, char *argv[]) {
    ifstream infile(argv[1]);
    runQueries(infile);
    return 0;
}
