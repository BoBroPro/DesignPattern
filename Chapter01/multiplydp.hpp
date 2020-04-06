#ifndef _MULTIPLYDP_HPP
#define _MULTIPLYDP_HPP

#include"operatordp.hpp"

class MultiplyDP:public OperatorDP{
    public:
    MultiplyDP() = default;
    virtual double getResult() override{
        return getNum1() * getNum2();
    }
};

#endif