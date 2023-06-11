#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v) {
    string a = v[0];
    for (string e : v) {
        bool b = true;
        long unsigned int c;
        for (c = 0; c < e.length() && c < a.length(); c++) {
            if (e[c] != a[c]) {
                b = false;
                break;
            }
        }
        if (b == false) a = e.substr(0, c);
    }
    return a;
}

int main() {
cout << "\"" << longest_prefix({ "ap", "apple", "apply", "ape", "april", "aq", "x" }) << "\"\n";
    return 0;
}