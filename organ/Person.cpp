#include <iostream>
using namespace std;
#include "Person.h"

Person::Person(string n) { //peron
    name = n;
}
void Person::role() { 
    cout << name << " is a person." << endl;
}
void Person::activity() {
    cout << name << " is doing something." << endl;
}