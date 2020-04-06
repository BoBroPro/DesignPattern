#ifndef _COMPONENT_HPP
#define _COMPONENT_HPP
#include<string>
using namespace std;

class Component{
public:
    Component(string name):name(name){

    }
    virtual void add(Component* c) { };
    virtual void remove(Component* c) { };
    virtual void display(int n) {};
protected:
    string name;
};

#endif
