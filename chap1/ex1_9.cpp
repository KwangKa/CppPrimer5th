#include <iostream>

int main()
{
    int v = 50, sum = 0;
    while(v <= 100){
        sum += v;
        v++;
    }
    std::cout << "Sum of 50 to 100 is: " << sum << std::endl;
    return 0;
}
