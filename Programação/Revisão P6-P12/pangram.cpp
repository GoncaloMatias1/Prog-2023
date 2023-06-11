#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool pangram(const string& s, string& m) {
    bool check_letter[26] = { false };

    for (char c : s) {
        if (isalpha(c)) {
            int idx = tolower(c) - 'a';
            check_letter[idx] = true;
        }
    }

    m = "";

    for (int i = 0; i < 26; i++) {
        if (!check_letter[i]) {
            m += ('a' + i);
        }
    }

    return (m == "");
}


int main(){ 
    string s = "";
    string m = "";
    bool r = pangram(s, m);
    cout << '\"' << s << "\" "<< boolalpha << r << " \"" << m << "\"\n";
    return 0;
}