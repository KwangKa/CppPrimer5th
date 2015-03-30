 /*
 * Write a function that returns a dynamically allocated vector of ints.
 * Pass that vector to another function that reads the standard input
 * to give values to the elements. Pass the vector to another function
 * to print the values that were read. Remember to delete the vector at
 * the appropriate time.
 */

 #include <iostream>
 #include <vector>

using namespace std;

vector<int>* allocMem(int);
void readInts(vector<int>*);
void printInts(vector<int>*);

int main() {
    int n;
    cin >> n;
    vector<int> *vi_ptr = allocMem(n);
    readInts(vi_ptr);
    printInts(vi_ptr);
    
    delete vi_ptr;
    vi_ptr = nullptr;

    return 0;
}

vector<int>* allocMem(int n) {
    vector<int> *vi_ptr = new vector<int>(n);
    return vi_ptr;
}

void readInts(vector<int> *vi_ptr) {
    for (auto i = vi_ptr->begin(); i != vi_ptr->end(); ++i)
        cin >> (*i);
}

void printInts(vector<int> *vi_ptr) {
    for (auto i = vi_ptr->cbegin(); i != vi_ptr->cend(); ++i)
        cout << *i << " ";
    cout << endl;
}
