/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include "tree.h"

using namespace std;

Tree::Tree(){}
Tree::Tree(Person aParent, Person aChild) : parent(aParent), children(aChild){

}

Tree::~Tree(){}

void Tree::link(list<Person> aParent, vector<Person> aChild){

}

void Tree::print(){

}

ostream& operator<<(ostream& aOStream, const Person& p){
    return aOStream << "[" << p.firstName << " " << p.lastName << "]";
}