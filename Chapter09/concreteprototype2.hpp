#ifndef _CONCRETEPROTOTYPE2_HPP
#define _CONCRETEPROTOTYPE2_HPP
#include<iostream>
#include<string>
#include"prototype.hpp"
using namespace std;

class ConcretePrototype2:public Prototype{
public:
    ConcretePrototype2()=default;
    ConcretePrototype2(string str,double a):str(str),a(a){}
    virtual Prototype* clone()override{
        ConcretePrototype2* clonedOne = new ConcretePrototype2();
        clonedOne->str = this->str;
        clonedOne->a = this->a;
        return (Prototype*)clonedOne;
    } 
    virtual void printVal()override{
        cout << "str:"<<str<< endl;
        cout << "a:"<< a << endl;
    } 
    void setStr(string str){
        this->str = str;
    }
    void setA(double a){
        this->a = a;
    }
private:
    string str;
    double a; 
};
#endif