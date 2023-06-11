#include "Student.h"
#include <iomanip>
#include <iostream>

using namespace std;

Student::Student(const std::string& id){id_ = id;}

string Student::get_id() const{return id_;}

void Student::add(const course& c){if(c.grade >= 10) courses_.push_back(c);}

double Student::avg() const{
    double den = 0.00, num = 0.00;
    for(course c : courses_){
        num += c.credits * c.grade;
        den += c.credits;
    }
    if(den != 0) return num / den;
    return den;
}

int main(){
    { Student s("up2022001111");
  s.add({"FP", 6, 20});
  cout << "[" << s.get_id() << "]/";
  cout << fixed << setprecision(2) << s.avg() << endl; }
  return 0;
}
