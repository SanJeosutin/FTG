/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include "tree.h"

using namespace std;

Tree::Tree(){}
Tree::~Tree(){}

void Tree::addParent(Person person){
    parent.push_back(person);
}

void Tree::addChildren(Person person){
    parent.push_back(person);
}

void Tree::create(){
    generation.insert(pair<vector<Person>, vector<Person>>(parent, children));
}

void Tree::print(){
    cout << "PARENT: ";
    for(Person iter : parent) {
        cout << &iter;
    }
    cout << " - CHILDREN: ";
    for(Person iter : children) {
        cout << &iter;
    }
    cout << endl;
}

ostream& operator<<(ostream& aOStream, const Person& p){
    return aOStream << "[" << p.firstName << " " << p.lastName << "]";
}