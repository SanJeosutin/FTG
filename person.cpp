/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include "person.h"

using namespace std;


Person::Person() : firstName("John"), lastName("Smith"), gender('M'), age(28), isMarried(false){}

Person::Person(std::string aFName, std::string aLName, char aGender, int aAge, bool aIsMarried) : 
firstName(aFName), lastName(aLName), gender(aGender), age(aAge), isMarried(aIsMarried){
}

string Person::getGender(){
    switch (gender){
    case 'M':
        return "Male";
        break;

    case 'F':
        return "Female";
        break;

    default:
        return "Undefined";
        break;
    }
}

void Person::getInfo(){
    cout << "\t----[" << firstName << " " << lastName << "]----" << endl;
    cout << "->Age: " << age << " years old" << endl;
    cout << "->Gender: " << getGender() << endl;
    if(isMarried){
        cout << "->Spouse: " << spouse->firstName << " " << spouse->lastName << endl;
        cout << "->Children of: " << children.size() << endl;
        cout << "->Child's name:" << endl;
        for(auto itr = children.begin(); itr != children.end(); ++itr){
            cout << "\t-" << *itr << endl;
        }
    }
    cout << endl;

}

ostream& operator<<(ostream& aOStream, const Person& p){
    return aOStream << "" << p.firstName << " " << p.lastName << ", " << p.age << " years old.";
}