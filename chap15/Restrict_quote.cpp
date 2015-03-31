/*************************************************************************
	> File Name: Restrict_quote.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年03月31日 星期二 11时42分47秒
 ************************************************************************/

#include "Restrict_quote.h"

double Restrict_quote::net_price(std::size_t n) const {
    if (n <= max_qty)
        return (1 - discount) * n * price;
    else
        return (1 - discount) * max_qty * price + (n - max_qty) * price;
}
