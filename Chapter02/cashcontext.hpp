#ifndef _CASHCONTEXT_HPP
#define _CASHCONTEXT_HPP

#include<string>
#include"cashsuper.hpp"
#include"cashreturn.hpp"
#include"cashnormal.hpp"
#include"cashrebate.hpp"
using namespace std;

class CashContext{

    public:
    CashContext(string type){
        if(type == "无优惠"){
            cs = new CashNormal();
        }
        else if(type == "打八折"){
            cs = new CashRebate();
        }
        else if(type == "满200减100") {
            cs = new CashReturn();
        }
        else{
            cs = nullptr;
        }
    }

    ~CashContext(){
        if(cs){
            delete cs;
            cs = nullptr;
        }
    } 

    double getResult(double monkey){
        if(!cs){
           return monkey; 
        }
        return cs->acceptCash(monkey);
    }
    
    private:
    CashSuper* cs;
    string type;

};
#endif