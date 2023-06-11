/*
write a c++ function void maximum (const string& input_fname, const string& output_fname) that reads double values with variable number of decimal places,
 stored one per line in input file name input_fname, and outputs to file name output_fname the corresponding values, one per line, rounded to 3 decimals places. 
 in the end, the function outputs the number of values read and the maximum value. you may assume that the values are all in range [-1000,1000]

int main(){
maximum("ex1-1-txt","ex1-1_out.txt");show_file("ex1-1_out.txt");
return 0;}

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void show_file(const string& file){
    ifstream in(file);
    cout << "==> " << file << " <==\n";
    for(string line; getline(in, line); ) cout << line << '\n';
}

void maximum (const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    double values;
    double max=-1001.0;
    int counter=0;
    while (in>>values){
        out << fixed << setprecision(3) << values << endl;
        if (values>max) max=values;
        counter++;
    }
    out << "counter=" << counter << "/max=" << fixed << setprecision(3) << max;
}

int main(){
maximum("ex1-1-txt","ex1-1_out.txt");show_file("ex1-1_out.txt");
return 0;
}
