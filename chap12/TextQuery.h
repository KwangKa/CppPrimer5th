#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <memory>

using namespace std;
using line_no = vector<string>::size_type;

class QueryResult {
friend ostream& print(ostream&, const QueryResult&);
public:
    QueryResult(string s,
                shared_ptr<vector<string>> f,
                shared_ptr<set<line_no>> l):
                word(s), file(f), lines(l) {}
private:
    string word;
    shared_ptr<vector<string>>  file;
    shared_ptr<set<line_no>> lines;
};

ostream& print(ostream &os, const QueryResult &qr) {
    os << qr.word << " occurs " << qr.lines->size() << " time(s)." << endl;
    for (auto num : *qr.lines)
        cout << "\t(line " << num + 1 << ") "
             << *(qr.file->begin() + num) << endl;
    return os;
}
class TextQuery {
public:
    TextQuery(ifstream&);
    QueryResult query(const string&) const;

private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
    string text;
    while (getline(is, text)) {
        file -> push_back(text);
        int n = file -> size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(n);
        }
    }
}

QueryResult TextQuery::query(const string &w) const {
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(w);
    if (loc == wm.end())
        return QueryResult(w, file, nodata);
    else
        return QueryResult(w, file, loc->second);
}


