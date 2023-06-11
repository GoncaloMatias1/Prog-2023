#include <iostream>
#include "time_of_day.h"
using namespace std;

time_of_day tick(time_of_day t){
    t.m++;
    if (t.m>59){
      t.m=0;
      t.h+=1;
    }
    if (t.h>23){
      t.h=0;
    }
    return t;
}

int main(){
    cout << tick({ 12, 30 }) << '\n';
    return 0;
}