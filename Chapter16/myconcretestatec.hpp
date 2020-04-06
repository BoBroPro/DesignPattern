#ifndef _MYCONCRETESTATEC_HPP
#define _MYCONCRETESTATEC_HPP
#include"mystate.hpp"
#include<iostream>
using namespace std;

class MyConcreteStateC:public MyState{
public:
    virtual MyState* handle()override{
        return nullptr;
    }
    virtual void getInfo() override {
        cout << "MyConcreteStateC->getInfo is called" << endl;
    }

};

#endif