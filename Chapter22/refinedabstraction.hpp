#ifndef _REFINEDABSTRACTION_HPP
#define _REFINEDABSTRACTION_HPP

#include"abstraction.hpp"
#include"implementor.hpp"

using namespace std;

class RefinedAbstraction: public Abstraction{
public:
    RefinedAbstraction(Implementor* impl){
        imp = impl;
    }

    virtual void myOperation()override{
        imp->operationImp();
    }

};

#endif