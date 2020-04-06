#ifndef _CONCRETEIMPLEMENTORA_HPP
#define _CONCRETEIMPLEMENTORA_HPP

#include<iostream>
#include"implementor.hpp"
using namespace std;

class ConcreteImplementorA : public Implementor{
public:
    virtual void operationImp() override {
        cout << "this is operationImp from A" <<endl;
    }
};

#endif