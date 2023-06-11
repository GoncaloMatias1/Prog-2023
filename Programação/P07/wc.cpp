#include <iostream>
using namespace std;
#include "wc.h"

wcresult wc(const string& filename) {
    ifstream in (filename);
    wcresult resultado;
    resultado.lines = 0;
    resultado.words = 0;
    resultado.bytes = 0;
    for (string line; getline(in, line);) {
        resultado.lines++;
        resultado.bytes += line.length() + 1;
        istringstream iss (line); 
        for (string word; iss >> word;) {resultado.words++;}
    }
    return resultado;
}

int main() {
    wcresult r = wc("p2_test5.txt"); 
    cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';
    return 0;
}