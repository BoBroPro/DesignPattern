#ifndef _SUBJECT_HPP
#define _SUBJECT_HPP

#include"observer.hpp"

using namespace std;

class Subject{
public:
    virtual void attach(Observer* obs)=0;
    virtual void detach(Observer* obs) = 0;
    virtual void notify() = 0;
};

#endif