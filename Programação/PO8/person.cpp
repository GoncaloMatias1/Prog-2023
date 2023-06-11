#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
#include "Person.h"

Person::Person(const string& name, const string& address, const string& phone){
    name_ = name;
    address_ = address;
    phone_ = phone;
}

string Person::get_name() const{return name_;}

string Person::get_address() const{return address_;}

string Person::get_phone() const{return phone_;}

void read_persons_data(const string& file_name, vector<Person>& persons){
    ifstream in(file_name);
    string line;
    string name, address, phone;
    while(getline(in, line)){
        name = line;
        getline(in, line);
        address = line;
        getline(in, line);
        phone = line;
        persons.push_back(Person(name, address, phone));
    }
}

bool compareNames(Person p, Person p1){return p.get_name() < p1.get_name();}

void sort_persons_by_name(vector<Person>& persons){sort(persons.begin(), persons.end(), compareNames);}

int main(){
    { vector<Person> persons { 
    Person("Pedro Miguel Faria", "Rua de Santa Catarina, 1234, Porto", "911123456"),
    Person("Maria Roberta Fernandes", "Rua do Santo Silva, 4321, Porto", "987654321") };
  show_persons_data(persons); }
  return 0;
}