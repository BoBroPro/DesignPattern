#ifndef _SUB_FACTORY_HPP
#define _SUB_FACTORY_HPP
#include"myfactory.hpp"
#include"myoperator.hpp"
#include"suboperator.hpp"
class SubFactory:public MyFactory{
    public:
    virtual MyOperator* createOperator(double a, double b)override{
        return new SubOperator(a, b); 
    }

};
#endif