#include <iostream>

int main()
{
    std::cout << "Q1.9" << std::endl;
    int sum = 0;
    for(int i = 50; i <= 100; i++)
        sum += i;
    std::cout << "Sum of 50 to 100 is: " << sum << std::endl;
    std::cout << std::endl;

    std::cout << "Q1.10" << std::endl;
    for(int i = 10; i >= 0 ; i--)
        std::cout << i << " ";
    std::cout << std::endl << std::endl;

    std::cout << "Q1.11" << std::endl;
    std::cout << "Enter two integer:" << std::endl;
    int a, b;
    std::cin >> a >> b;
    for(; a <= b; a++)
        std::cout << a << " ";
    std::cout << std::endl;

    return 0;
}
