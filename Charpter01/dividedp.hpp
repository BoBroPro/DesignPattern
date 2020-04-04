#ifndef _DIVIDEDP_HPP
#define _DIVIDEDP_HPP

#include<iostream>
#include<cmath>
#include"operatordp.hpp"

using namespace std;
class DivideDP : public OperatorDP{
    public:
    DivideDP() = default;
    virtual double getResult() override{
    
        if(abs(getNum2()) < e){
            cout << "divisor can't be zero"<<endl;
            getchar();
            abort();
        }
        else{
            return getNum1() / getNum2();
        }
        
    }
    private:
    static const double e;
};
const double DivideDP::e = 0.000000000001;

#endif