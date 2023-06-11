#include <iostream>
using namespace std;

void print(int a[],int size){
    cout<<"[ ";
    for (int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<"]";
    cout<<endl;
}

bool is_prime(int n){
    if (n<=1) return false;
    for (int i=2;i<n;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

void keep_prime_numbers(int a[], int& size){
    int j = 0; //j serve para saber onde é q o número primo deve ser colocado
    for (int i=0; i<size; i++){  // j vai guardar o numero de primos no array
        if (is_prime(a[i])){
            a[j++] = a[i]; //parece q o j está um elemento antes do q o a[i], e vai comparar com o a[i]. se for primo vai puxar o a[i] para trás, e dps vamos ficar com numeros repetdos, mas só vamos imprimir do size do j
        }
    }
    size = j;
}


int main(){
    int a[]={1,2,3};
    int size = sizeof(a)/sizeof(int);
    keep_prime_numbers(a,size);
    print(a,size);
}
