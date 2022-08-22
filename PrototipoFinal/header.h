#ifndef CSTOC_H
#define CSTOC_H

#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    // attributes
    char *fullName;
    int age;
    int identification;

    // methods
    void (*construct)(struct person *this);                                              // constructor
    void (*newPerson)(struct person *this, char *fullName, int age, int identification); // add new person
    void (*getDetails)(struct person *this);                                             // get details
} Person;

// struct Student "class"
typedef struct student
{
    Person person;
    int grade;

    void (*constructStudent)(struct student *this);
    void (*newStudent)(struct student *this, int grade, char *fullName, int age, int identification); // add new student
    void (*getDetail)(struct student *this);
} Student;

// prototypes
void publicConstruct(Person *this);
void publicConstructStudent(Student *this);

#endif
