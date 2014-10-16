#include <iostream>

int main()
{
    std::cout << "Enter two integer: " << std::endl;
    int a, b;
    std::cin >> a >> b;
    a -= 1;
    while(a++ < b){
        std::cout << a << std::endl;
    }
    return 0;
}
