#include <iostream>
using namespace std;

bool is_prime(int n){
    if (n<=1) return false;
        int i=2;
        while (i<n){
            if (n%i==0)
                return false;
            i++;
        }return true;
    return 0;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        if (is_prime(i)==true) cout<<i<<" ";
    }
    return 0;
}