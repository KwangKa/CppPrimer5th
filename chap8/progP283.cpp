#include <iostream>

using namespace std;
int main()
{
    cin.tie(&cout);   //将cin和cout关联在一起
    ostream *old_tie = cin.tie(nullptr);  //cin不再与其他流关联
    cin.tie(&cerr);   //cin关联到cerr，读取cin会刷新cerr
    cin.tie(old_tie); //重建cin和cout的正常关联

    return 0;
}
