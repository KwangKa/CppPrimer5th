#ifndef PERSON_H
#define PERSON_H

struct Person {
    std::string getName() const {
        return name;
    }
    std::string getAddress() const {
        return address;
    }

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &p);
std::ostream &print(std::ostream &os, const Person &p);

#endif
