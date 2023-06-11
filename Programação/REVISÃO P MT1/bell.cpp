#include <iostream>
using namespace std;

unsigned long fac(unsigned long n){
    unsigned long resultado = 1;
    for (unsigned long i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

unsigned long bell(unsigned long n){
    if (n == 0) return 1;
    else if (n == 1) return 1;
    unsigned long resultado = 1;
    for (unsigned long k = 1; k <= n - 1; k++){
        resultado += (fac(n - 1) / (fac(k)*fac(n - 1 - k))) * bell(k); 
    }
    return resultado;
}

int main(){
    cout << bell(6) << '\n';
    return 0;
}