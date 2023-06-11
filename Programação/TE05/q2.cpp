#include <iostream>
using namespace std;

int main(){
    int a[]={1,3,5,7};
    int* p=&a[0];
    int* q=p;
    q++;
    cout<<*q<<' '<<(*q-*p)<<' '<<(q-p);
    return 0;
}