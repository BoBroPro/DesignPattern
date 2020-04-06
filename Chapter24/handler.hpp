#ifndef _HANDLER_HPP
#define _HANDLER_HPP
class Handler{
public:
    virtual void setSuccessor(Handler* h) = 0;
    virtual void handleRequest(int req) = 0;

};

#endif