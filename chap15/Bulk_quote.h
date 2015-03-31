/*************************************************************************
	> File Name: Bulk_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2015年03月31日 星期二 11时18分50秒
 ************************************************************************/

#ifndef _BULK_QUOTE_H
#define _BULK_QUOTE_H
#include "Quote.h"

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &bookNo, double p, std::size_t qty, double disc):
         Quote(bookNo, p), min_qty(qty), discount(disc) {}
    double net_price(std::size_t) const override;

private:
    std::size_t min_qty;
    double discount;
};

#endif
