#include <iostream>
using namespace std;
#include "print.h"

void string_convert_to_uppercase(string& str) {
    for (char& c : str) {c = toupper(c);}
}

void normalise(const string& input_fname, const string& output_fname) {
    ifstream file_input (input_fname);
    ofstream file_output (output_fname);
    for (string line; getline(file_input, line);) {
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.length()) { 
            string_convert_to_uppercase(line);
            file_output << line << endl;
        }
    }    
}

int main(){
    { normalise("p3_test3.txt", "p3_test3_out.txt"); 
  print("p3_test3_out.txt"); }
  return 0;
}