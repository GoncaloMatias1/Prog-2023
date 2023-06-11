#include <iostream>
using namespace std;

int adigits(int a, int b, int c){
    if (a>b && a>c && b>c) return a*100+b*10+c;
    else if(a>=b && c>=b && a>=c) return a*100+c*10+b;
    else if(c>=a && c>=b && b>=a) return c*100+b*10+a;
    else if(b>=a && b>=c && c>=a) return b*100+c*10+a;
    else if(c>=a && c>=b &&b<=a)  return c*100+a*10+b;
    else return b*100+a*10+c;
    return 0;
}

int main(){
cout << adigits(1, 0, 0) << '\n';
return 0;
}
