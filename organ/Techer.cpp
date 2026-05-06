#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(string n) : Person(n){}

void Teacher:: role(){
    cout << name << " is a teacher." << endl;   

}
void Teacher::activity(){
    cout<<name<<" is teaching."<<endl;
}

