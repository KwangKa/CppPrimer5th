#include <iostream>

int main()
{
    int last, cur, cnt;
    if (std::cin >> last) {
        cnt = 1;
        while (std::cin >> cur) {
            if (cur == last)
                cnt ++;
            else {
                std::cout << last << " occurs " << cnt << " times" << std::endl;
                cnt = 1;
                last = cur;
            }
        }
        std::cout << last << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
