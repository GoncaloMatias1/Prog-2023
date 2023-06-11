#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n<=1) return false;
    for (int i=2;i<n;i++)
        if (n%i==0)
            return false;
    return true;
}

bool isPernicious(int n) {
    int num_1s = 0;
    while (n != 0) {
        if (n % 2 != 0) {
            num_1s++;
        }
        n = n / 2;
    }
    if (isPrime(num_1s)) return true;
    return false;
}

int main(){
    int a,b;
    cin>>a; cin>>b;
    for (int i=a;i<=b;i++){
        if (isPrime(i) && isPernicious(i)) cout<<i<<" ";
        else continue;}
    return 0;
}