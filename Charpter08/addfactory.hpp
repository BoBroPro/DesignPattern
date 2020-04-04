#ifndef _ADDFACTORY_HPP
#define _ADDFACTORY_HPP
#include"myfactory.hpp"
#include"myoperator.hpp"
#include"addoperator.hpp"
class AddFactory:public MyFactory{
    public:
    virtual MyOperator* createOperator(double a, double b)override{
        return new AddOperator(a,b); 
    }
    
};
#endif