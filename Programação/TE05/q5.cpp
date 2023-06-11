#include <iostream>
int main(){
    int a = new int [3] { 2, 1, 0 };
    int* p = a;
    while (*p != 0) {
p++;
}
        if (*p != 0) delete [] a;
    return 0;
}

