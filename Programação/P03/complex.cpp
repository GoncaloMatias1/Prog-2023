#ifndef __complex_h__
#define __complex_h__
#include <cmath>

// Representation of a complex number z = x + y i
struct complex {
  double x; // Real part
  double y; // Imaginary part
};

double norm(const complex& c);
void add(const complex& a, const complex& b, complex& r);
void mul(const complex& a, const complex& b, complex& r);

#include <iostream>
#include <iomanip>
using namespace std;

ostream& operator<<(ostream& out, const complex& c) {
  return out << fixed << setprecision(3) 
             << c.x 
             << (c.y >= 0.0 ? "+" : "")
             << c.y << "i";
}

#endif // __complex_h__

void add(const complex& a, const complex& b, complex& r){
    r.x=a.x+b.x;
    r.y=a.y+b.y;
}

void mul(const complex& a, const complex& b, complex& r){
    r.x = a.x * b.x - a.y * b.y;
    r.y = a.x * b.y + a.y * b.x;
}

double norm(const complex& c){
    return sqrt(pow(c.x,2)+pow(c.y,2));
}


int main(){
    { complex a { 0, 1 }, b { 2, 1}, s, m;
  add(a, b, s); 
  mul(a, b, m);
  cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
  return 0;
}