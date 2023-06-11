#include <iostream>
using namespace std;

unsigned long next_mersenne(unsigned long n) {
    unsigned long m = 1;
    if (n==0) return 0;
    while (m < n) {
        m = (m << 1) + 1;
    }
    return m;
}

int main() {
    cout << next_mersenne(0) << '\n';
    return 0;
}
