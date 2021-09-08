/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <vector>

class Person{
    public:
        Person();
        Person(std::string aFName, std::string aLName, char aGender, int aAge, bool aIsMarried);

        std::string firstName;
        std::string lastName;
        char gender;
        int age;
        bool isMarried;
        Person *spouse;
        std::vector<Person> children;

        std::string getGender();
        void getInfo();

        friend std::ostream& operator<<(std::ostream& aOStream, const Person& aPerson);
};

#endif