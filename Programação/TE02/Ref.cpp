#include <iostream>
using namespace std;

/*

int main(){
    int x=10;
    int& xRef=X;
    cout<<++x<<" - ";
    cout<<xRef++<<" - ";
    cout<<x<<" - "<<(x==xRef)<<endl;
    return 0; 
}

void f(int& x,int& y){
    if (x>y){
        int t=x;
        x=y;
        y=t;
    }
}

void f(int& x, int& y, int& z){
    f(x,y);
    f(y,z);
    f(x,y);
}

int main(){
    int x=3,y=1,z=2;
    f(x,y,z);
    cout<<x<<" - "<<y<<" - "<<z<<endl;
    return 0;
}

*/


namespace a{
    namespace b{
        int f(int x,int y=1){return x+y;}
    }
    int f(int x){return x>1? x+1 : a::b::f(x-1);}
}
int g(int x){
    return x%3==0? a::b::f(x,3) : a::f(x);
}