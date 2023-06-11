#include <iostream>
#include "print_string.h"
using namespace std;

void split(const string& s, vector<string>& v){
    long unsigned int p = 0; long unsigned int l = 0;
    while(p < s.length()){
        if(s.find(' ', p) == p){
            if(l > 0){
                v.push_back(s.substr(p - l, l)); l = 0;
            }
        }
        else l++; 
        p++;
    }
    if(l > 0){
        v.push_back(s.substr(p - l, l)); l = 0;
    }
}

int main() {
    string s = "a ";
    vector<string> v;
    split(s, v);
    print(v);
    return 0;
}