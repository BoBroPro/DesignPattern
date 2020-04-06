#ifndef _CONCRETECLASS_HPP
#define _CONCRETECLASS_HPP
#include"abstractclass.hpp"
#include<iostream>
#include<string>
using namespace std;

class ConcreteClass : public AbstractClass{
    virtual string getName()override{
        return "book1";
    }  
};

#endif