#ifndef _CONCRECTFACTORY2_HPP
#define _CONCRECTFACTORY2_HPP

#include"abstractfactory.hpp"
#include"producta2.hpp"
#include"productb2.hpp"

class ConcreteFactory2:public AbstractFactory{
public:
    virtual AbstractProductA* createProductA() override{
        return new ProductA2(); 
    }
    virtual AbstractProductB* createProductB()override{
        return new ProductB2();
    }
private:

};

#endif