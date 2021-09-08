/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
    public:
        Person();
        Person(std::string aFName, std::string aLName, int aNumOfChild);
        std::string firstName;
        std::string lastName;
        int numOfChildren;
};

#endif