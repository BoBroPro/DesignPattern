#ifndef _ELEMENT_HPP
#define _ELEMENT_HPP

class Visitor;

class Element{
public:
    virtual void accept(Visitor* visitor) = 0;

};


#endif