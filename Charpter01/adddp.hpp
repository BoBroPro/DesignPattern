#ifndef _MADDDP_HPP
#define _MADDDP_HPP

#include"operatordp.hpp"

class AddDP : public OperatorDP{

    public:
    AddDP() = default;
    virtual double getResult() override{
        return getNum1() + getNum2();
    }
};
#endif