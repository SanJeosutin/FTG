/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include "tree.h"

using namespace std;

Tree::Tree(){}
Tree::Tree(Person aParent, Person aChild) : parent(aParent), child(aChild){
    //?create parent and child 
    //?put both parent as list
    //?put childrend as a vector    
}

Tree::~Tree(){}

void Tree::addParent(Person aParent){
    parents.push_back(aParent);
}

void Tree::addChild(Person aChild){
    children.push_back(aChild);
}

void Tree::link(list<Person> aParent, vector<Person> aChild){
    generation.insert(pair<list<Person>, vector<Person>>(parents, children));
}

//!BUGS BUGS AND MORE BUGS! ALWAYS ASKED FOR ALOCATOR<PERSON> FOR BOTH LIST AND VECTOR
void Tree::print(){
    for (auto itr = generation.cbegin(); itr != generation.cend(); itr++) {
        cout << itr->first << itr-> second;
    }
}