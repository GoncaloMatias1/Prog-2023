#include <iostream>
int main() {
    int* a = new int [3] { 3, 2, 1 };
    int* p = a;
    while (*p != 0) {
        p++;
    }
    std::cout << *p;
    delete [] a;
    return 0;
}

