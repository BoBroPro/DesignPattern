#ifndef _INVOKER_HPP
#define _INVOKER_HPP

#include<list>
#include"command.hpp"
using namespace std;
class Command;
class Invoker{
public:
    void addCmd(Command* cmd){
        listCmd.push_back(cmd);
    }
    void delCmd(Command* cmd){
        listCmd.remove_if([=](Command* tmp){return tmp == cmd;});
    }
    void notify(){
        for (auto i : listCmd){
            i->excute();
        }
    }
private:
    list<Command*> listCmd;
};

#endif