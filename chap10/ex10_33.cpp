#include <fstream>
#include <iterator>

int main(int argc, char **argv) {
    std::ifstream inFile(argv[1]);
    std::ofstream outOdd(argv[2]), outEven(argv[3]);

    std::istream_iterator<int> in_iter(inFile), in_eof;
    std::ostream_iterator<int> outOdd_iter(outOdd, " "), outEven_iter(outEven, "\n");
    while (in_iter != in_eof) {
        if ((*in_iter) % 2 == 1)
            outOdd_iter = *in_iter;
        else
            outEven_iter = *in_iter;
        ++in_iter;
    }

    return 0;
}
