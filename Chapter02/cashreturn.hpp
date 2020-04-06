#ifndef _CASHRETURN_HPP 
#define _CASHRETURN_HPP

#include"cashsuper.hpp"

class CashReturn:public CashSuper{

    public:
    virtual double acceptCash(double monkey) override {
        if( monkey > monkeyCondition){
            return monkey - monkeyReduction;
        }
        else{
            return monkey;
        }
    }

    private:
    double monkeyCondition = 200;
    double monkeyReduction = 100;

};

#endif