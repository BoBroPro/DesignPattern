#ifndef _CONCRETEITERATOR_HPP
#define _CONCRETEITERATOR_HPP

#include"iterator.hpp"
class ConcreteAggregate;
class ConcreteIterator : public Iterator{
public:

    ConcreteIterator(ConcreteAggregate* conA);
    
    virtual int first() override;
    virtual int next() override;
    virtual bool isDone() override;
    virtual int currentItem() override;
private:
    ConcreteAggregate* concreteAgg;
    int currentN;
};

#endif