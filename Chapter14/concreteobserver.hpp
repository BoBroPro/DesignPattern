#ifndef _CONCRETEOBSERVER_HPP
#define _CONCRETEOBSERVER_HPP
#include<string>
#include"observer.hpp"
#include"concretesubject.hpp"
#include<iostream>
using namespace std;
class ConcreteObserver:public Observer{

public:
    ConcreteObserver(const string& name,ConcreteSubject* conSub)
    :name(name),subject(conSub){

     }
    virtual void update()override{
        observerState = subject->getSubjectState();
        cout <<"name:"<< name <<endl;
        cout << "state:" << observerState<<endl;  
    } 

   bool operator==(const ConcreteObserver& obs){
        return this->name == obs.name; 
    }
private:
    string name; 
    string observerState;        
    ConcreteSubject* subject;

};

#endif