#ifndef _BUILDER_HPP
#define _BUILDER_HPP
#include"product.hpp"
class Builder{
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
};


#endif 
