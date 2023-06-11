#include <iostream>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]){
    unsigned long res = 0;
    for(int i = 0; hstr[i] != '\0'; i++) {
        unsigned long digit = 0;
        if ('0' <= hstr[i] && hstr[i] <= '9') digit = hstr[i] - '0';
        else if ('a' <= hstr[i] && hstr[i] <= 'f') digit = hstr[i] - 'a' + 10;
        else if ('A' <= hstr[i] && hstr[i] <= 'F') digit = hstr[i] - 'A' + 10;
        else return -1; 
        res = res*16 + digit;
    }
    return res;
}

int main(){
    cout << hstr_to_integer("19") << endl;
    return 0;
}


