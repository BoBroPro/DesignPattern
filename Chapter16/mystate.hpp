#ifndef _MYSTATE_HPP
#define _MYSTATE_HPP

class MyState{
public:
    virtual MyState* handle()= 0;
    virtual void getInfo() = 0;
private:
};

#endif