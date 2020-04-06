#ifndef _REALSUBJECT_HPP
#define _REALSUBJECT_HPP

#include<iostream>
#include"subject.hpp"
class RealSubject : public Subject{
    public:
    void method1() override {
        std::cout<< "realsubject.method1() is called"<<std::endl;
    }
    void method2()override {
        std::cout << "realsubject.method2() is called"<<std::endl;
    }
};
#endif