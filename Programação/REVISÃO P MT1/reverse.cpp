#include <iostream>
using namespace std;

int main(){
    int a; int res=0; int resto;
    cin>>a;
    while (a!=0){
        resto=a%10;
        res=res*10+resto;
        a/=10;
    }
    cout<<res;
    return 0;
}
