#ifndef _CONCRETEBUILDER_HPP
#define _CONCRETEBUILDRE_HPP
#include"builder.hpp"
#include"product.hpp"
class ConcreteBuilder:public Builder{
public:
    ConcreteBuilder(Product* p):product(p){

    }

    virtual void buildPartA()override{
        product->add("Part A");        
    }
    virtual void buildPartB()override{
        product->add("Part B");
    }

private:
    Product *product;
};
#endif