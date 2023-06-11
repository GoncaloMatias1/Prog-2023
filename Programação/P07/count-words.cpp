#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void stringtolower(string& cmp) {
    for (char& c : cmp) {c = tolower(c);}}

int count(const string& fname, const string& word) {
    int c = 0;
    ifstream in (fname);
    string cmp = word;
    stringtolower(cmp);
    for (string s; in >> s;) {
        stringtolower(s);
        if (s == cmp) {c++;}
    }
    return c;
}

int main(){
    cout << count("p1_test_a.txt", "THE") << '\n';
    cout << count("p1_test_a.txt", "0") << '\n';
    cout << count("p1_test_a.txt", "code") << '\n';
    cout << count("p1_test_b.txt", "Collider") << '\n';
    cout << count("p1_test_b.txt", "you") << '\n';
    return 0;
}