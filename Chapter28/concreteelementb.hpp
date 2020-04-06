#ifndef _CONCRETEELEMENTB_HPP
#define _CONCRETEELEMENTB_HPP

#include"element.hpp"
#include<string>

class ConcreteElementB : public Element{
public:
    virtual void accept(Visitor* vistor) override;
    std::string getName();
    std::string getAge();
};

#endif