#ifndef _CONCRECTFACTORY1_HPP
#define _CONCRECTFACTORY1_HPP

#include"abstractfactory.hpp"
#include"producta1.hpp"
#include"productb1.hpp"

class ConcreteFactory1:public AbstractFactory{
public:
    virtual AbstractProductA* createProductA() override{
        return new ProductA1(); 
    }
    virtual AbstractProductB* createProductB()override{
        return new ProductB1();
    }
private:

};

#endif