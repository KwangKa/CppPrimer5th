#include <string>
#include <iostream>
#include <sstream>

class Date {
    public:
        Date() = default;
        Date(std::string date);
        void display();
    private:
        unsigned int day=1;
        unsigned int month=1;
        unsigned int year=2000;
};

Date::Date(std::string date) {
    unsigned int format=0;
    if (date.find(',') != std::string::npos)
        format = 1;
    else if (date.find('/') != std::string::npos)
        format = 2;
    else
        format = 0;

    std::string mstr;
    std::istringstream iss;
    switch (format) {
        case 0:
            mstr = date.substr(0, 3);
            if (mstr == "Jan") month = 1;
            else if (mstr == "Feb") month = 2;
            else if (mstr == "Mar") month = 3;
            else if (mstr == "Apr") month = 4;
            else if (mstr == "May") month = 5;
            else if (mstr == "Jun") month = 6;
            else if (mstr == "Jul") month = 7;
            else if (mstr == "Aug") month = 8;
            else if (mstr == "Sep") month = 9;
            else if (mstr == "Oct") month = 10;
            else if (mstr == "Nov") month = 11;
            else if (mstr == "Dec") month = 12;
            else month = 0;
            day = stoi(date.substr(4, 1));
            year = stoi(date.substr(6));
            break;
        case 1:
            iss.str(date);
            iss >> mstr;
            if (mstr == "January") month = 1;
            else if (mstr == "February") month = 2;
            else if (mstr == "March") month = 3;
            else if (mstr == "April") month = 4;
            else if (mstr == "May") month = 5;
            else if (mstr == "June") month = 6;
            else if (mstr == "July") month = 7;
            else if (mstr == "August") month = 8;
            else if (mstr == "September") month = 9;
            else if (mstr == "October") month = 10;
            else if (mstr == "November") month = 11;
            else if (mstr == "Decemebr") month = 12;
            else month = 0;
            iss >> mstr;
            day = stoi(mstr.substr(0, mstr.size() - 1));
            iss >> mstr;
            year = stoi(mstr);
            break;
        case 2:
            std::string::size_type pos1, pos2;
            pos1 = date.find('/');
            pos2 = date.rfind('/');
            day = stoi(date.substr(0, pos1));
            month = stoi(date.substr(pos1 + 1, pos2 - pos1 - 1));
            year = stoi(date.substr(pos2 + 1));
            break;
        default:
            day = 0;
            month = 0;
            year = 0;
    }
}


void Date::display() {
    std::cout << year << "-" << month << "-" << day << std::endl;
}

int main() {
    std::string s = "July 4, 1998";
    std::cout << s << std::endl;
    Date d1(s);
    d1.display();
    std::cout << std::endl; 
    
    s = "25/12/2009";
    std::cout << s << std::endl;
    Date d2(s);
    d2.display();
    std::cout << std::endl;

    s = "Sep 1 2009";
    std::cout << s << std::endl;
    Date d3(s);
    d3.display();
    std::cout << std::endl;
    
    std::cout << "Default" << std::endl;
    Date d4;
    d4.display();
    return 0;
}
