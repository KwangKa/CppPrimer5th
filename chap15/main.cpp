/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月31日 星期二 10时50分03秒
 ************************************************************************/

#include<iostream>
#include "Quote.h"
#include "Bulk_quote.h"
#include "Restrict_quote.h"
using namespace std;

double print_total(ostream &os, const Quote &item, size_t n);

int main() {
    Quote basic("978-7-121", 25);
    Bulk_quote bulk("978-7-121", 25, 5, 0.1);
    Restrict_quote restr("978-7-121", 25, 10, 0.1);
    print_total(cout, basic, 20);
    print_total(cout, bulk, 20);
    print_total(cout, restr, 20);

    return 0;
}

double print_total(ostream &os, const Quote &item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn()
       << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}
