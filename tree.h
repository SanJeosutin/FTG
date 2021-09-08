/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#ifndef TREE_H
#define TREE_H

#include "person.h"
#include <iostream>
#include <ostream>
#include <iterator>
#include <map>
#include <vector>

class Tree{
    public:
        Tree();
        ~Tree();
        void addParent(Person aPerson);
        void addChildren(Person aPerson);
        void create();
        void print();

        std::map<std::vector<Person>, std::vector<Person>> generation;
        std::vector<Person> parent;
        std::vector<Person> children;

        friend std::ostream& operator<<(std::ostream& aOStream, const Person& aPerson);
};

#endif