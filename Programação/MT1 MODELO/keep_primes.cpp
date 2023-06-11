#include <iostream>
using namespace std;
#include "print_array.h"

int filter_duplicates(const int a[], int n, int b[]) {
    int index = 0;
    b[index] = a[0];
    int copied = 1;
    
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            index++;
            b[index] = a[i];
            copied++;
        }
    }
    
    return copied;
}

int main(){
{ const int n = 12;
  const int a[n] = { 1, 2, 2, 3, 3, 3, 1, 1, 1, 2, 2, 3 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }
  return 0;
}
