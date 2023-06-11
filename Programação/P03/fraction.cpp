#ifndef __fraction_h__
#define __fraction_h__

struct fraction {
  int num;
  int den;
};

fraction add(fraction a, fraction b);
fraction mul(fraction a, fraction b);

#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, fraction f) {
  if (f.den == 1) 
    out << f.num;
  else
    out << f.num << '/' << f.den;
  return out;
}

#endif // __fraction_h__

int gcd(int a, int b){
    if (b==0) return a;
    else return gcd(b,a%b);
}

fraction irredutivel(fraction resultado){
    int i = gcd(resultado.num, resultado.den);
    resultado.num /=i;
    resultado.den/=i;
    if (resultado.den < 0) {
        resultado.num *= -1;
        resultado.den *= -1;
    }
    return resultado;
}

fraction add(fraction a, fraction b){
    fraction resultado;
    a.num *= b.den;
    int tmp = a.den;
    a.den *= b.den;
    b.num *= tmp;
    resultado.num=a.num+b.num;
    resultado.den=a.den;
    resultado=irredutivel(resultado);
    return resultado;
}

fraction mul(fraction a, fraction b){
    fraction resultado;
    resultado.num=a.num*b.num;
    resultado.den=a.den*b.den;
    resultado=irredutivel(resultado);
    return resultado;
}

int main(){
{ fraction a { 0, 1 }, b { 2, 1};
  cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
  return 0;
}