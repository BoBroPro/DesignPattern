#ifndef _PLAYCONTEXT_HPP
#define _PLAYCONTEXT_HPP

#include<string>

using namespace std;

class PlayContext{
public:
    PlayContext(const string& str):context(str){}
    string getContext(){
        return context;
    }
    void setContext(string str){
        context = str;
    }
private:
    string context;
};

#endif