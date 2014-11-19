#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data total;
    cin >> total.bookNo >> total.units_sold >> total.revenue;
    while(cin) {
        Sales_data sd;
        cin >> sd.bookNo >> sd.units_sold >> sd.revenue;
        if (sd.bookNo == total.bookNo) {
            total.units_sold += sd.units_sold;
            total.revenue += sd.revenue;
        }
    }
    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    return 0;
}
