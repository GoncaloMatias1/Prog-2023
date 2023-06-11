#include <iostream>
#include "print_array.h"
using namespace std;

void ordenado(int a[], int n){
    for (int i=0; i<n; i++){ //qualtidade de vezes que vamos até ao fim do array
        for (int j=0; j<n-i-1; j++){ //a[] representa C, é um apontador 
            if (a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    for (int i=0; i<na; i++) {
        c[i] = a[i]; // para copiar os elementos de a para c
    }
    for (int i=0; i<nb; i++) {
        c[na+i] = b[i];
    }
    ordenado(c, na+nb);
}

int main(){
{ const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int c[NA+NB];
  merge_arrays(a, NA, b, NB, c);
  print_array(c, NA+NB); }
    return 0;
}
