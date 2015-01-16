/* Input File
Josh    Howard      1987-02-12
Chris   Paul        1991-01-20
David   Williams    1998-12-12
Gerald  Wallace     1988-11-20
Tony    Allen       1991-12-12
Derrick Rose        1990-08-12
Rasheed Wallace     1983-12-03
Krik    Howard      1988-02-18
*/

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    multimap<string, string> contacts;
    string line;
    string fname, lname, birthday;
    while (getline(cin, line)) {
        istringstream person(line);
        person >> fname >> lname >> birthday;
        contacts.insert({lname, line});
    }
    
    lname = "";
    for (pair<string, string> item : contacts) {
        if (lname != item.first) {
            cout << endl << item.first << ":" << endl;
            lname = item.first;
        }
        cout << item.second << endl;
    }

    return 0;
}
