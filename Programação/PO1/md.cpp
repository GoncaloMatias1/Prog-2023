using namespace std;
#include <iostream>
#include <cmath>

int main(){
    int n;
    cin >> n;
    int d = 0;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    for(int i = 1; i < n; i++){
        cin >> x2 >> y2;
        d += (abs(x1-x2)) + (abs(y1-y2));
        x1 = x2;
        y1 = y2;
    }
    cout << d;
    return 0;
}