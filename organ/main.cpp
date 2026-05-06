#include "Person.h"
#include "Student.h"
#include "Teacher.h"   

int main(){
    
    Student* s = new Student("Jude");
    Teacher* t = new Teacher("Mr. John");
    s->role();
    s->activity();
    t->role();
    t->activity();
return 0;
}