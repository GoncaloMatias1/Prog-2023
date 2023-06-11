#ifndef __time_of_day_h__
#define __time_of_day_h__

struct time_of_day {
  unsigned char h; // Hours [0,23]
  unsigned char m; // Minutes [0,59]
};

time_of_day tick(time_of_day t);

#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, time_of_day t) {
  if (t.h < 10) out << '0';
  out << (int) t.h << ':';
  if (t.m < 10) out << '0';
  out << (int) t.m;
  return out;
}

#endif

time_of_day tick(time_of_day t){
    t.m++;
    if (t.m>59){
        t.m-=60;
        t.h++;
    }
    if (t.h>23) t.h-=24;
    return t;
}

int main(){
cout << tick({ 23, 59 }) << '\n';
cout << tick(tick(tick({ 23, 59 }))) << '\n';
return 0;
}

