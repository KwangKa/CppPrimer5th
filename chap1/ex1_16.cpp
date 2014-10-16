#include <iostream>

int main()
{
    std::cout << "Enter a sequence of integer, Ctrl-d to end input: " << std::endl;
    int tmp, sum=0;
    while(std::cin >> tmp){
        sum += tmp;
    }
    std::cout << "Sum of all inputs is: " << sum <<std::endl;
    return 0;
}
