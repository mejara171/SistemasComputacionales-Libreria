#include "header.h"

void main()
{
    Person person;
    publicConstruct(&person);

    Student student;
    publicConstructStudent(&student);

    person.newPerson(&person, "Julio", 20, 12345);
    student.newStudent(&student, 10, "Cabra", 20, 1000534901);
    person.getDetails(&person);
    student.getDetail(&student);
}
