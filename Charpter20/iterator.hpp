#ifndef _ITERATOR_HPP
#define _ITERATOR_HPP

class Iterator{
public:
    virtual int first() = 0;
    virtual int next() = 0;
    virtual bool isDone() = 0;
    virtual int currentItem() = 0;
};

#endif