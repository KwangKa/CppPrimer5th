#include <iostream>
using namespace std;

int main()
{
/*    int i=0, &ri=i;
    double d=0, &rd=d;
    rd = 3.14;
    rd = ri;
    i = rd;
    ri = d;
    return 0;
*/
    double dval = 3.14;
    int i = 2;
    int &ri = i;
    cout << dval << " " << ri << endl;
    ri = dval;
    cout << dval << " " << ri << endl;
    return 0;
}
