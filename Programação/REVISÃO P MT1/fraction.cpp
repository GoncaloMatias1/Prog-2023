#include <iostream>
using namespace std;

int gcd(int a,int b){
    if (b==0) return a;
    else if (b!=0){
        return gcd(b,a%b)
    }
}

int irreductible(int a, int b){
    
}

fraction add(fraction a, fraction b){

}

fraction mul(fraction a, fraction b){

}

int main(){
    { fraction a { 0, 1 }, b { 2, 1};
  cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
}
