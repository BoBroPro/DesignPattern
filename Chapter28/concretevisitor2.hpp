#ifndef _CONCRETEVISITOR2_HPP
#define _CONCRETEVISITOR2_HPP

#include<iostream>
#include"visitor.hpp"
#include"concreteelementa.hpp"
#include"concreteelementb.hpp"

using namespace std;

class ConcreteVisitor2: public Visitor{
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