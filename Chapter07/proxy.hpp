#ifndef _PROXY_HPP
#define _PROXY_HPP

#include"realsubject.hpp"
#include"subject.hpp"

class Proxy : public Subject{
public:
    void method1() override{
        realsubject.method1();
    }
    void method2() override{
        realsubject.method2();
    }

private:
    RealSubject realsubject;
};

#endif