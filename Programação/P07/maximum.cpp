#include "show_file.h"
#include <string>
using namespace std;

void maximum(const string& input_fname, const string& output_fname) {
    ifstream file_input (input_fname);
    ofstream file_output (output_fname);
    double maximo;
    unsigned long int c = 0;
    for (string line; getline(file_input, line);) {
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.empty()) {continue;}
        double current_number = stod(line);
        if (c == 0) {maximo = current_number;}
        if (maximo < current_number) {maximo = current_number;}
        file_output << fixed << setprecision(3) << current_number << endl;
        c++;
    }
    file_output << "count=" << c << "/max=" << fixed << setprecision(3) << maximo;
}

int main(){
    { maximum("p4_test2.txt", "p4_test2_out.txt");
  show_file("p4_test2_out.txt"); }
  { maximum("p4_test3.txt", "p4_test3_out.txt");
  show_file("p4_test3_out.txt"); }
  return 0;
}