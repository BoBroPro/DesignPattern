#ifndef _CONCRETESUBJECT
#define _CONCRETESUBJECT

#include"subject.hpp"
#include"observer.hpp"
#include<string>
#include<list>

using namespace std;

class ConcreteSubject:public Subject{
public:
    virtual void attach(Observer* obs)override{
        l.push_back(obs);
    }
    virtual void detach(Observer* obs)override{
        l.remove_if([&](Observer*tmp){return tmp == obs;});
    }
    
    virtual void notify()override{
        for(auto i : l){
            i->update();
        }
    }
    string getSubjectState(){
        return subjectstate; 
    }
    void setSubjectState(string str){
        subjectstate = str;
    }
 
private:
    string subjectstate;
    list<Observer*> l;
};

#endif