#ifndef _SUBTRACTDP_HPP
#define _SUBTRACTDP_HPP
#include"operatordp.hpp"

class SubtractDP:public OperatorDP{
    public:
    SubtractDP() = default;
    virtual double getResult(){
        return getNum1() - getNum2();
    }
};

#endif