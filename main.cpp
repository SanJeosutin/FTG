/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
//*un-comment bellow to initialised the test ;)
//#define PERSON_TEST

#include <iostream>
#include <iterator>
#include <map>
#include <vector>

#include "person.h"

using namespace std;

#ifndef PERSON_TEST
int main(){
    Person person;

    return 0;
}
#endif

#ifdef PERSON_TEST
int main(){
    Person child1;
    child1.firstName = "Euginenormous";
    child1.lastName = "Black";
    child1.gender = 'M';
    child1.age = 12;

    Person child2;
    child2.firstName = "Bryan";
    child2.lastName = "Black";
    child2.gender = 'U';
    child2.age = 16;

    Person child3;
    child3.firstName = "Rose";
    child3.lastName = "Black";
    child3.gender = 'F';
    child3.age = 21;


    Person parent1;
    parent1.firstName = "Jack";
    parent1.lastName = "Black";
    parent1.age = 28;
    parent1.isMarried = true;

    Person parent2;
    parent2.firstName = "Rose";
    parent2.lastName = "EverGreen";
    parent2.age = 29;
    parent2.isMarried = true;
    parent1.children.push_back(child1);
    parent1.children.push_back(child2);
    parent1.children.push_back(child3);
    parent1.spouse = &parent2;

    parent2.children.push_back(child1);
    parent2.children.push_back(child2);
    parent2.children.push_back(child3);
    parent2.spouse = &parent1;

    /*GET PARENT INFO*/
    cout << "PARENTS INFO:" << endl;
    parent1.getInfo();
    parent2.getInfo();

    cout << "CHILDREND INFO:" << endl;
    /*GET CHILDREN INFO*/
    child1.getInfo();
    child2.getInfo();
    child3.getInfo();

    return 0;
}
#endif