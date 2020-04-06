#ifndef _VISITOR_HPP
#define _VISITOR_HPP

class ConcreteElementA;
class ConcreteElementB;

class Visitor{
public:
    virtual void visitConcreteElementA(ConcreteElementA* concereteElementA) = 0;
    virtual void visitConcreteElementB(ConcreteElementB* concereteElementB) = 0;

};

#endif