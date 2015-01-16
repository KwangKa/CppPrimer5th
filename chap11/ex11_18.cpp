#include <iostream>
#include <iomanip>
#include <map>
//#include <iterator>

using namespace std;

int main(int argc, char **argv) {
    size_t thres = atoi(argv[1]);
    map<string, size_t> word_count;
    string w;
    while (cin >> w)
        ++word_count[w];
    map<string, size_t>::const_iterator map_it = word_count.cbegin();
    while (map_it != word_count.cend()) {
        if (map_it->second > thres)
            cout << setw(20) <<  map_it->first << "\toccurs " << map_it->second << " time(s). " << endl;
        ++map_it;
    }
    return 0;
}
