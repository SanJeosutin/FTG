/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

#include "person.h"
#include "tree.h"

using namespace std;

int main(){
    Tree tree;

    Person parent1;
    
    parent1.firstName = "Jeff";
    parent1.lastName = "Nguyen";
    parent1.numOfChildren = 3;
    
    Person parent2;
    
    parent2.firstName = "Jack";
    parent2.lastName = "Bezol";
    parent2.numOfChildren = 2;
    
    Person child1;
    child1.firstName = "Tim";
    child1.lastName = "Yeol";

    Person child2;
    child1.firstName = "Jacc";
    child1.lastName = "Yang";

    Person child3;
    child1.firstName = "Oscar";
    child1.lastName = "Bezol";
    

    tree.addParent(parent1);
    tree.addParent(parent2);

    tree.addChildren(child1);
    tree.addChildren(child2);
    tree.addChildren(child3);

    tree.create();
    //tree.print();
    //cout << "Person with name of " << person.firstName << " " << person.lastName << " has " << person.numOfChildren << " children. How lovely!";
    

    /*
    vector<string> p, c;
    map<vector<string>, vector<string>> g;

    p.push_back("A");
    p.push_back("B");
    c.push_back("C");
    c.push_back("D");
    c.push_back("E");
    g.insert(pair<vector<string>, vector<string>>(p, c));

    cout << "PARENT: ";
    for(auto iter = tree.parent.begin(); iter != tree.parent.end(); ++iter) {
        cout << *iter;
    }
    cout << " - CHILDREN: ";
    for(auto iter = tree.children.begin(); iter != tree.children.end(); ++iter) {
        cout << *iter;
    }
    */
    

    return 0;
}