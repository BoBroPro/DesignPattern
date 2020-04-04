#ifndef _ADD_OPERATOR_HPP
#define _ADD_OPERATOR_HPP
#include"myoperator.hpp"
class AddOperator:public MyOperator{
public:
    AddOperator(double a, double b):MyOperator(a,b){

    }
    virtual double getResult() override{
        return a+b;
    }

};

#endif