#include <iostream>

int main(int argc, char **argv) {
    auto sumInt = [] (int i1, int i2) { return i1 + i2; };
    std::cout << atoi(argv[1]) << " + " << atoi(argv[2]) << " = "
              << sumInt(atoi(argv[1]), atoi(argv[2])) << std::endl;
    return 0;
}
