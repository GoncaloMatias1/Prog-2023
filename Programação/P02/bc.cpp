#include <iostream>
using namespace std;

unsigned long bc(unsigned long n, unsigned long k) {
    unsigned long res = 1;
    for (unsigned long i = 1; i <= k; i++) {
        res *= n - (k - i);
        res /= i;
    }
    return res;
}


int main(){
    return 0;
}