#ifndef _MYCONCRETESTATEA_HPP
#define _MYCONCRETESTATEA_HPP
#include"mystate.hpp"
#include<iostream>
#include"myconcretestateb.hpp"

using namespace std;

class MyConcreteStateA:public MyState{
public:
    virtual MyState* handle()override{
        return new MyConcreteStateB(); 
    }
    virtual void getInfo() override {
        cout << "MyConcreteStateA->getInfo is called" << endl;
    }

};

#endif