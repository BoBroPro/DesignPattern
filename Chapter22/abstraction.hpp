#ifndef _ABSTRACTION_HPP
#define _ABSTRACTION_HPP

#include"implementor.hpp"

class Abstraction{
public:
    virtual void myOperation() = 0;
protected:
    Implementor* imp;    
};

#endif