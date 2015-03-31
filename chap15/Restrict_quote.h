/*************************************************************************
	> File Name: Restrict_quote.h
	> Author: 
	> Mail: 
	> Created Time: 2015年03月31日 星期二 11时37分52秒
 ************************************************************************/

#ifndef _RESTRICT_QUOTE_H
#define _RESTRICT_QUOTE_H
#include "Quote.h"

class Restrict_quote : public Quote {
public:
    Restrict_quote() = default;
    Restrict_quote(const std::string &book, double p, std::size_t qty, double disc) :
        Quote(book, p), max_qty(qty), discount(disc) {}
    double net_price(std::size_t) const override;

private:
    std::size_t max_qty;
    double discount;

};
#endif
