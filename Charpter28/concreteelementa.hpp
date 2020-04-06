#ifndef _CONCRETEELEMENTA_HPP
#define _CONCRETEELEMENTA_HPP

#include"element.hpp"
#include<string>

class ConcreteElementA : public Element{
public:
    virtual void accept(Visitor* vistor) override;  
    std::string getName();
    std::string getAge();
};

#endif