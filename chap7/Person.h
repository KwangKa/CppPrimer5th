#ifndef PERSON_H
#define PERSON_H

struct Person {
    friend std::istream &read(std::istream &is, Person &p);
    friend std::ostream &print(std::ostream &os, const Person &p);
    public:
        Person() = default;
        Person(const std::string &sname, const std::string &sadd) : name(sname), address(sadd) {}
        Person(std::istream &is) {
            is >> name >> address;
        }
        std::string getName() const {
            return name;
        }
        std::string getAddress() const {
            return address;
        }
    private:
        std::string name;
        std::string address;
};

std::istream &read(std::istream &is, Person &p);
std::ostream &print(std::ostream &os, const Person &p);

#endif
