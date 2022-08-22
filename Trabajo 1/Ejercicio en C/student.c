#include "header.h"

/**
 * newStudent - create a new student
 * @this: pointer to the student
 * @grade: grade of the student
 * @fullName: full name of the student
 * @age: age of the student
 * return - void
 */
void newStudent(Student *this, int grade, char *fullName, int age, int identification)
{
    this->grade = grade;
    this->person.newPerson(&this->person, fullName, age, identification);
}

/**
 * getDetail - get details of the student
 * @this: pointer to the student
 * return - void
 */
void getDetail(Student *this)
{

    printf("Nombre: %s, Edad: %d Grado: %d\n", this->person.fullName, this->person.age, this->grade);
}

/**
 * constructStudent - constructor of the student
 * @this: pointer to the student
 * return - void
 */
void constructStudent(Student *this)
{
    this->newStudent = &newStudent;
    this->getDetail = &getDetail;
}

/**
 * publicConstructStudent - constructor of the student
 * @this: pointer to the student
 * return - void
 */
void publicConstructStudent(Student *this)
{
    publicConstruct(&this->person);
    this->constructStudent = &constructStudent;
    this->constructStudent(this);
}
