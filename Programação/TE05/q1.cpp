#include <iostream>
using namespace std;

int main(){
    int a[]={1,3,5,7};
    int* p=&a[2];
    *p=p[-1]+p[1];
    cout<<*p<<'\n';
    return 0;
}