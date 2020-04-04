#ifndef _Sub_OPERATOR_HPP
#define _Sub_OPERATOR_HPP
#include"myoperator.hpp"
class SubOperator:public MyOperator{
public:
    SubOperator(double a, double b):MyOperator(a,b){

    } 
    virtual double getResult() override{
        return a-b;
    }
};
#endif