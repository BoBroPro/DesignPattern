#ifndef _LEAF_HPP
#define _LEAF_HPP

#include<iostream>
#include<string>
#include"component.hpp"
using namespace std;

class Leaf : public Component{
public:
    Leaf(string name) : Component(name) {

    }
    virtual void add(Component* c){
        cout << "cant't add() in Leaf" << endl;
    }
    virtual void remove(Component* c) {
        cout << "can't remove() in Leaf" << endl;
    }   
    virtual void display(int n){
        for(int i = 0; i < n; ++i){
            cout << '-';
        }
        cout << name << endl;
    }
    
};

#endif