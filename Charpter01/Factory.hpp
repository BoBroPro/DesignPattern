#ifndef _FACTORY_HPP
#define _FACTORY_HPP

#include<string>
#include"adddp.hpp"
#include"multiplydp.hpp"
#include"subtractdp.hpp"
#include"dividedp.hpp"
#include"operatordp.hpp"
using namespace std;

class Factory{
    public:
    static OperatorDP* creatObj(char op){
        switch(op){
            case '+':
            return new AddDP();
            case '-':
            return new SubtractDP();
            case '*':
            return new MultiplyDP();
            case '/':
            return new DivideDP();
            default:
            return nullptr;
        }
    }

};

#endif