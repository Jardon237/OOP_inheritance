#include "Student.h" 
#include <iostream>
using namespace std;

Student::Student(string n): Person(n){}
void Student::role() {
    cout << name << " is a student." << endl;
}
void Student::activity(){
    cout<<name<<"is studying."<<endl;
}

//sudtend.cpp
