#ifndef PERSON_H 
#define PERSON_H    
#include <iostream> //io stream

using namespace std; //include naspace std

class Person{
    protected:
    string name; 

    public:
    Person(string n);
    virtual void role();
    virtual void activity();
};


#endif