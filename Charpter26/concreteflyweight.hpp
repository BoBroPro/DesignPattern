#ifndef _CONCRETEFLYWEIGHT_HPP
#define _CONCRETEFLYWEIGHT_HPP
#include"flyweight.hpp"
#include<iostream>
using namespace std;

class ConcreteFlyweight:public Flyweight{
public:
    virtual void myOperation(int extrinsicState)override{
        cout << "ConcreteFlyweight: " << extrinsicState << endl;
    }
};

#endif