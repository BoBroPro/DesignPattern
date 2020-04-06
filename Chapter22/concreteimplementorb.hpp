#ifndef _CONCRETEIMPLEMENTORB_HPP
#define _CONCRETEIMPLEMENTORB_HPP

#include<iostream>
#include"implementor.hpp"
using namespace std;

class ConcreteImplementorB : public Implementor{
public:
    virtual void operationImp() override {
        cout << "this is operationImp from B" <<endl;
    }
};

#endif