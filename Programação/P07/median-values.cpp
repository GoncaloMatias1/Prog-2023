#include "show_file.h"
#include <iostream>
using namespace std;

double get_median_from_vec(vector<double> vec) {
    long unsigned int t = vec.size();
    sort(vec.begin(), vec.end());
    if (t % 2) {return vec[t/2];}
    return (vec[t/2 - 1] + vec[t/2]) * 0.5;
}

void calc_medians(const string& input_fname, const string& output_fname) {
    ifstream file_input (input_fname);
    ofstream file_output (output_fname);
    for (string line; getline(file_input, line);) {
        istringstream line_string_stream(line);
        string p;
        line_string_stream >> p;
        if (p.size() > 0 && p[0] == '#') {continue;}
        file_output << p;
        vector<double> line_numbers = {};
        while (line_string_stream >> p) {
            if (p[0] == '#') {break;}
            line_numbers.push_back(stod(p));
        }
        if (line_numbers.empty()) {continue;}
        double current_line_median = get_median_from_vec(line_numbers);
        file_output << ' ' << fixed << setprecision(1) << current_line_median << endl;
    }
}

int main(){
  { calc_medians("p5_test2.txt", "p5_test2_out.txt"); 
  show_file("p5_test2_out.txt"); }
  { calc_medians("p5_test1.txt", "p5_test1_out.txt"); 
  show_file("p5_test1_out.txt"); }
  { calc_medians("p5_test4.txt", "p5_test4_out.txt"); 
  show_file("p5_test4_out.txt"); }
  return 0;  
}