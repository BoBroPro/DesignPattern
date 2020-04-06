#ifndef _MY_FACTORY_HPP
#define _MY_FACTORY_HPP
#include"myoperator.hpp"
class MyFactory{
    public:
    virtual MyOperator* createOperator(double a, double b) = 0;
};
#endif