#ifndef _UNSHAREDCONCRETEFLYWEIGHT_HPP
#define _UNSHAREDCONCRETEFLYWEIGHT_HPP

#include<iostream>
#include"flyweight.hpp"

using namespace std;

class UnsharedConcreteFlyweight : public Flyweight{
public:
    virtual void myOperation(int extrinsicState)override{
    cout << "UnsharedConcreteFlyweight: " << extrinsicState << endl;
    }
};

#endif
