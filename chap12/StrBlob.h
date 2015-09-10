// Exercise 12.2, Page 407

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <iostream>

using std::vector; using std::string;
using std::make_shared; using std::out_of_range;

class StrBlob {
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<string> il);
    size_type size() const { return data -> size(); }
    bool empty() const { return data -> empty(); }

    void push_back(const string &t) { data -> push_back(t); }
    void pop_back();

    string& front();
    string& back();
    const string& front() const;
    const string& back() const;

private:
    std::shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}

StrBlob::StrBlob(std::initializer_list<string> il): data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const string &msg) const {
    if (i >= data -> size())
        throw out_of_range(msg);
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data -> pop_back();
}

string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data -> front();
}

const string& StrBlob::front() const {
    check(0, "front on empty StrBlob");
    std::cout << "const front" << std::endl;    
    return data -> front();
}

string& StrBlob::back() {
    check(0, "back on empty StrBlob");
    return data -> back();
}

const string& StrBlob::back() const {
    check(0, "back on empty StrBlob");
    std::cout << "const back" << std::endl;
    return data -> back();
}
