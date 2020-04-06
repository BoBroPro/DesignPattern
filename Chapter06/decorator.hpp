#ifndef _DECORATOR_HPP
#define _DECORATOR_HPP
#include"person.hpp"

class Decorator : public Person{
public:
    Decorator(Person* prs):p(prs){

    }

protected:
    Person* p;
};

#endif