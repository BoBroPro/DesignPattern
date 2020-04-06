#ifndef _PROTOTYPE_HPP
#define _PROTOTYPE_HPP

class Prototype{
    public:
    virtual Prototype* clone()= 0;
    virtual void printVal() = 0;
};

#endif