#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r=0;
    int i=0;
    while (n!=0){
        i=n%10;
        r=r*10+i;
        n/=10;
    }
    cout<<r;
    return 0;
}