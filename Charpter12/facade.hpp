#ifndef _FACADE_HPP
#define _FACADE_HPP
#include"subsystem1.hpp"
#include"subsystem2.hpp"
#include"subsystem3.hpp"

class Facade{
public:
    void methodOne(){
        sub1.method1();
        sub2.method1();
        sub3.method1();
    }
    void methodTwo(){
        sub1.method2();
        sub2.method2();
        sub3.method2();
    }
private:
    Subsystem1 sub1;
    Subsystem2 sub2;
    Subsystem3 sub3;
};

#endif