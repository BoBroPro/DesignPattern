#ifndef _COLLEAGUE_HPP
#define _COLLEAGUE_HPP

#include"mediator.hpp"

class Colleague{
public:
    Colleague(Mediator* med):mediator(med) {}
protected:
    Mediator* mediator;
};

#endif