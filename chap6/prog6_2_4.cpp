#include <iostream>
#include <vector>
using namespace std;

void print1(const char *cp);
void print2(const int *beg, const int *end);
void print3(const int *arr, size_t N);
//void print2D(const int** arr, int rowSize, int colSize);

int main() {
    const char str[] = "Unix/linux";
    print1(str);
    
    int s2[5] = {1, 2, 3, 4, 5};
    print2(begin(s2), end(s2));

    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print3(arr1, 10);
    //int arr2[2][3] = {1, 2, 3, 4, 5, 6};
    //print2D(arr2, 2, 3);
    return 0;
}

void print1(const char *cp) {
    if (cp)
        while (*cp)
            cout << *cp++;
    cout << endl;
}

void print2(const int *beg, const int *end) {
    for (auto i = beg; i != end; i++)
        cout << *i << " ";
    cout << endl;
}

void print3(const int *arr, size_t N) {
    for (size_t i = 0; i != N; i++)
        cout << *(arr+i) << " ";
    cout << endl;
}
/*
void print2D(const int** arr, int rowSize, int colSize) {
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            //cout << *(*(arr+i)+j) << endl;
            cout << arr[i][j] << endl;
}
*/
