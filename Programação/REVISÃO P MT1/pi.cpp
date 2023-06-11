#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int k; cin>>k;
    int d; cin>>d;
    double x=0;
    for (int i=0;i<=k;i++){
        x+=pow(-1,i)/(2*i+1);
    }
    x*=4;
    cout << fixed << setprecision(d) << x;
    return 0;
}
