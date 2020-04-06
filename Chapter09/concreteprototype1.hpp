#ifndef _CONCRETEPROTOTYPE1_HPP
#define _CONCRETEPROTOTYPE1_HPP
#include<iostream>
#include<string>
#include"prototype.hpp"
using namespace std;

class ConcretePrototype1:public Prototype{
public:
    ConcretePrototype1()=default;
    ConcretePrototype1(double a, int b):a(a),b(b){}

    virtual Prototype* clone()override{
        ConcretePrototype1* clonedOne = new ConcretePrototype1();
        clonedOne->a = this->a;
        clonedOne->b = this->b;
        return (Prototype*)clonedOne;
    } 
    virtual void printVal()override{
        cout << "a:"<<a << endl;
        cout << "b:"<< b << endl;
    }
    void setA(double a){
        this->a = a;
    }
    void setB(int b){
        this->b = b;
    }
private:
    double a;
    int b; 
};
#endif