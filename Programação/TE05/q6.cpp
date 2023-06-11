#include <iostream>
int main() {
    int* a = new int[3] { 2, 1, 0 };
    int* p = a;
    int* q = a;
    while (*p != 0) {
        p++;
    }
    std:: cout << *p;
    if (*p == 0) delete [] a;
        *q = 1;
    return 0;
}

