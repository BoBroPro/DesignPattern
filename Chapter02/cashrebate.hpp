#ifndef _CASHREBATE_HPP
#define _CASHREBATE_HPP

#include"cashsuper.hpp"

class CashRebate:public CashSuper{

    public:
    virtual double acceptCash(double monkey) override {
        return monkey * discount / 10;
    }

    private:
    double discount = 8; 
};
#endif