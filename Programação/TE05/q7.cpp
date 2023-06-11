#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c = 2;
    int* parrl] { Sc, &b, &a, nullptr, &a };
    for (int* p : parr) {
        if (p != nullptr) ++*p;
    }
    cout << a << b << c;
    return 0;
}