#ifndef _ABSTRACTFACTORY_HPP
#define _ABSTRACTFACTORY_HPP

#include"abstractproducta.hpp"
#include"abstractproductb.hpp"


class AbstractFactory{
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
private:

};

#endif