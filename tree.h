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
#include <list>

class Tree{
    private:
        Person person;
    
    public:
        Tree();
        Tree(Person aParent, Person aChild);
        ~Tree();
        
        void addParent(Person aParent);
        void addChild(Person aChild);
        void link(std::list<Person> aParent, std::vector<Person> aChild);
        void print();

        std::map<std::list<Person>, std::vector<Person>> generation;
        Person parent;
        std::list<Person> parents;
        Person child;
        std::vector<Person> children;
};

#endif