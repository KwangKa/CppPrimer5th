#include <iostream>

int main(int argc, char **argv) {
    const int k = 39;
    auto sumInt = [k] (int i1) { return k + i1; };
    std::cout << k << " + " << atoi(argv[1]) << " = "
              << sumInt(atoi(argv[1])) << std::endl;
    return 0;
}
