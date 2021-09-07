/***************************************
Author  : SanJeosutin
Creation: 8/09/2021
Project : Random Tree Generator
***************************************/
#include <iostream>
#include <iterator>
#include <map>
#include <vector>

using namespace std;

int main(){
    vector<string> p, c;
    map<vector<string>, vector<string>> g;

    p.push_back("A");
    p.push_back("B");
    c.push_back("C");
    c.push_back("D");
    c.push_back("E");
    g.insert(pair<vector<string>, vector<string>>(p, c));


    cout << "PARENT: ";
    for(auto iter = p.begin(); iter != p.end(); ++iter) {
        cout << "[" << *iter << "]";
    }
    cout << " - CHILDREN: ";
    for(auto iter = c.begin(); iter != c.end(); ++iter) {
        cout << "[" << *iter << "]";
    }

    cout << endl;

    return 0;
}