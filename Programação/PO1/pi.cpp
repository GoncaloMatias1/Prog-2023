using namespace std;
#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    int k,d;
    cin>>k;
    cin>>d;
    double pi=0;
    for (int n=0;n<=k;n++){
        pi+=pow(-1,n)/(2*n+1);
    }
    pi*=4;
    cout<<fixed<<setprecision(d)<<pi;
    return 0;
}