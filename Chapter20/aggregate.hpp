#ifndef _AGGREGATE_HPP
#define _AGGREGATE_HPP

#include"iterator.hpp"

class Aggregate{
public:
    virtual Iterator* createIterator() = 0;
};

#endif