#ifndef _CONCRETEAGGREGATE_HPP
#define _CONCRETEAGGREGATE_HPP
#include<iostream>
#include<vector>
#include"iterator.hpp"
#include"aggregate.hpp"
#include"concreteiterator.hpp"

using namespace std;

class ConcreteAggregate : public Aggregate{
public:

    ConcreteAggregate();
    virtual Iterator* createIterator() override;
    void add(int a);
    int getSize();
    int getNumN(int n);
private:
    vector<int> vec;
};

#endif