#include <iostream>
using namespace std;

unsigned long pell(unsigned long n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        unsigned long ant_ant = 0, ant = 1, atual;
        for (unsigned long i = 2; i <= n; i++) {
            atual = 2 * ant + ant_ant;
            ant_ant = ant;
            ant = atual;
        }
        return atual;
    }
}

int main(){
    cout << pell(5) << '\n';
return 0;
}
