/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include "person.h"

using namespace std;

Person::Person() :  firstName("John"), lastName("Smith"), numOfChildren(2){}

Person::Person(std::string fName, std::string lName, int numOfChild) : firstName(fName), lastName(lName), numOfChildren(numOfChild){}