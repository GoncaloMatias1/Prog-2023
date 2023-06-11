#include <iostream>
using namespace std;

bool is_leap_year(int y){
    if ((y%4==0) || (y%100==0 && y%400!=0)) return true;
    else return false;
}



void advance(int delta, int& d, int& m, int& y){
    while (delta > 0) { 
        switch(m){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                if (d>=31){
                    m+=1;
                    d=1;
                    if (m>12){
                        m=1;
                        y+=1;
                    }
                } else d+=1;
                // ou delta-=1;
                break;
            case 2:
                if (is_leap_year(y)){
                    if (d>=29){
                        m+=1;
                        d=1;
                    }else d+=1;
                }else{
                    if (d>=28){
                        m+=1;
                        d=1;
                    }else d+=1;
                }
                //ou delta-=1;
                break;
            default:
                if (d>=30){
                    m+=1;
                    d=1;
                } else d+=1;
                if (m>12){
                    m=1;
                    y+=1;
                }
                // ou delta-=1;
                break;
        }
        delta-=1;  //quero avançar 5, já avancei 1, vou ficar com 4 dias restantes para avançar
    }
}