#ifndef _CONCRETEMEDIATOR_HPP
#define _CONCRETEMEDIATOR_HPP

#include"mediator.hpp"
#include"ConcreteColleague1.hpp"
#include"ConcreteColleague2.hpp"

class ConcreteMediator: public Mediator{
public:
    ConcreteMediator():colleague1(nullptr),colleague2(nullptr){}

    virtual void send(std::string meg, Colleague* from)override{
        if(from == colleague1){
            if(colleague2){
                colleague2->receiveMeg(meg);
            }
            else{
                cout << "no receiver" <<endl;
            }
        }
        else if(from == colleague2){
            if(colleague1){
                colleague1->receiveMeg(meg);
            }
            else{
                cout << "no receiver" <<endl;
            }
        }
        else{
            //none
        }
    }

    void setColleague1(ConcreteColleague1 *col){
        colleague1 = col;
    }

    void setColleague2(ConcreteColleague2* col){
        colleague2 = col;
    }

private:
    ConcreteColleague1* colleague1;
    ConcreteColleague2* colleague2;
};

#endif