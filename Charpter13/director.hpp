#ifndef _DIRECTOR_HPP
#define _DIRECTOR_HPP
#include"builder.hpp"

class Director{
public:
    Director(Builder* b){
        b->buildPartA();
        b->buildPartB();
    }
};

#endif