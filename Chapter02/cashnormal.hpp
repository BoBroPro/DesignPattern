#ifndef _CASHNORMAL_HPP
#define _CASHNORMAL_HPP

#include"cashsuper.hpp"

class CashNormal:public CashSuper{

    public:
    virtual double acceptCash(double monkey) override {
        return monkey;
    }

};
#endif