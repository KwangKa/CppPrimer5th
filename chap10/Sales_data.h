#ifndef SALES_DATA_H
#define SALES_DATA_H

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);

    public:
        Sales_data() = default;
        Sales_data(const std::string &s) : bookNo(s) {}
        Sales_data(const std::string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) {}
        Sales_data(std::istream &is) {
            double price;
            is >> bookNo >> units_sold >> price;
            revenue = price * units_sold;
        }

        std::string isbn() const { return bookNo; }
        Sales_data& combine(const Sales_data&);

    private:
        inline double avg_price() const {
            return units_sold ? revenue / units_sold : 0.0;
        }
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
inline
bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}
#endif
