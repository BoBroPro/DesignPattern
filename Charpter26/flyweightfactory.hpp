#ifndef _FLYWEIGHTFACTORY_HPP
#define _FLYWEIGHTFACTORY_HPP

#include<map>
#include<string>
#include"concreteflyweight.hpp"

using namespace std;

class FlyweightFactory{
public:
    Flyweight* getFlyweight(string str){
        map<string,Flyweight*>::iterator it;
        it = flyweightMap.find(str);
        if(it != flyweightMap.end()){
            return it->second;    
        }
        else {
            auto tmp = new ConcreteFlyweight();
            flyweightMap.emplace(str,tmp);
            return tmp;
        }
    }
    int getCnt(){
        return flyweightMap.size();
    }
private:
    map<string, Flyweight*> flyweightMap;
};

#endif