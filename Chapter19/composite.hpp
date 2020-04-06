#ifndef _COMPOSITE_HPP
#define _COMPOSITE_HPP

#include<iostream>
#include<string>
#include<list>
#include"component.hpp"

using namespace std;

class Composite:public Component{
public:
    Composite(string name):Component(name){

    }

    virtual void add(Component*c) override {
        l.push_back(c);
    }

    virtual void remove(Component*c) override {
        l.pop_back();
    }

    virtual void display(int n) override {
        for(int i = 0; i < n; ++i){
            cout << '-';
        }
        cout << name <<endl;       
        for(auto i : l) {
            i->display( n+4 ); 
        }  
    }

private:
    list<Component*> l;
};

#endif