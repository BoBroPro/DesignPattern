#ifndef _CONCRETEVISITOR1_HPP
#define _CONCRETEVISITOR1_HPP

#include<iostream>
#include"visitor.hpp"
#include"concreteelementa.hpp"
#include"concreteelementb.hpp"
using namespace std;

class ConcreteVisitor1: public Visitor{
public:
    virtual void visitConcreteElementA(ConcreteElementA* concreteElementA){
        cout << concreteElementA->getName() << endl;
    }
    virtual void visitConcreteElementB(ConcreteElementB* concreteElementB){
        cout << concreteElementB->getAge() << endl;
    }
    
private:

};

#endif