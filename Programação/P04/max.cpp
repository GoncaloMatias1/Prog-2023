#include <iostream>
using namespace std;


int max(const int a[], int n){
    int valmax=a[0];
    for (int i=0;i<n;i++){
        if (a[i]>valmax) valmax=a[i];
    }
    return valmax;
}

int main(){
{ const int n = 4; 
  const int a[n] = { 4, -2, 3, 1 };
  cout << max(a, n) << '\n'; }
}

