#include "header.h"

/**
 * newPerson - create a new person
 * @this: pointer to the person
 * @fullName: full name of the person
 * @age: age of the person
 * @identification: identification of the person
 * return - void
 */
void newPerson(Person *this, char *fullName, int age, int identification)
{
    this->age = age;
    this->fullName = fullName;
    this->identification = identification;
}

/**
 * getDetails - get details of the person
 * @this: pointer to the person
 * return - void
 */
void getDetails(Person *this)
{
    printf("Nombre: %s, Edad: %d\n", this->fullName, this->age);
}

/**
 * construct - constructor of the person
 * @this: pointer to the person
 * return - void
 */
void construct(Person *this)
{
    this->newPerson = &newPerson;
    this->getDetails = &getDetails;
}

/**
 * publicConstruct - constructor of the person
 * @this: pointer to the person
 * return - void
 */
void publicConstruct(Person *this)
{
    this->construct = &construct;
    this->construct(this);
}
