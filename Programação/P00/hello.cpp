#include <iostream>
using namespace std;

bool leap_year(int y){
    bool r;
    if (y%4==0 && y%100!=0)
        r=true;
    else if (y%400==0)
        r=true;
    else
        r=false;
    return r;
}

int main(){
    int y;
    cin>>y;
    cout<<leap_year(y);
}

