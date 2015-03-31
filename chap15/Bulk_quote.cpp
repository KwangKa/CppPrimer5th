/*************************************************************************
	> File Name: Bulk_quote.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月31日 星期二 11时23分56秒
 ************************************************************************/

#include "Bulk_quote.h"
double Bulk_quote::net_price(std::size_t n) const {
    if (n >= min_qty)
        return n * (1 -  discount) * price;
    else
        return n * price;
}
