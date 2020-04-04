#ifndef _MEDIATOR_HPP
#define _MEDIATOR_HPP
#include<string>
class Colleague;
class Mediator{
public:
    virtual void send(std::string message, Colleague*pColleague) = 0;
};

#endif