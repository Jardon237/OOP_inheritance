#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"

//# include " person.h
//class Teacher: public person
/*publc:
Teacher(string n)

v
*/
class Teacher: public Person{
    public:
    Teacher(string n);
    void role()override;
    void activity()override;
};
#endif
