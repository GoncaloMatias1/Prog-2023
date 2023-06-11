#include <iostream>
using namespace std;
#include "print_vector.h"

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
    for(T& c : v){
        if(c < min) {c = min;}
        else if(c > max) {c = max;}
    }
}

int main(){
    { vector<int> v { 1, 2, 3, 4, 5 }; normalise(v, 1, 5); print(v); }
    return 0;
}
