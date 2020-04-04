#ifndef _MYCONCRETESTATEB_HPP
#define _MYCONCRETESTATEB_HPP
#include"mystate.hpp"
#include<iostream>
#include"myconcretestatec.hpp"
using namespace std;

class MyConcreteStateB:public MyState{
public:
    virtual MyState* handle()override{
        return new MyConcreteStateC(); 
    }
    virtual void getInfo() override {
        cout << "MyConcreteStateB->getInfo is called" << endl;
    }

};

#endif