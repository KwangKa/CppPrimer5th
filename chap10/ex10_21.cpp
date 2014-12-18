#include <iostream>

int main(int argc, char **argv) {
    int a = atoi(argv[1]);
    auto func = [&a] () -> bool {
                if (a == 0)
                    return true;
                else if (a > 0)
                    a = 0;
                return false;};
    if (func())
        std::cout << "Captured var is 0" << std::endl;
    else
        std::cout << "Captured var is not 0" << std::endl
                  << "Now it's: " << a << std::endl;
    return 0;
}
