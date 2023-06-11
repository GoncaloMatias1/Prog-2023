#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int solve_eq(int a, int b, int c, double& x1, double& x2){
    int ns;
    double delta=pow(b,2)-4*a*c;
    if (delta<0){
        ns=0;
        x1=NAN;
        x2=NAN;}
    else if (delta==0){
        ns=1;
        x1=-b/(2.0*a);
        x2=NAN;
    }
    else{
        ns=2;
        x1=((-b-sqrt(delta))/(2.0*a));
        x2=((-b+sqrt(delta))/(2.0*a));
    }
    return ns;
}


int main(){
double x1, x2; 
int r = solve_eq(3, 4, -2, x1, x2); 
cout << fixed << setprecision(7) 
     << r << ' ' << x1 << ' ' << x2 << '\n';
    return 0;
}