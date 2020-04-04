#ifndef _CARETAKER_HPP
#define _CARETAKER_HPP

#include"memento.hpp"

class Caretaker{
public:
    // get and set
    Memento* getMemento(){ return memento; } 
    void setMemento( Memento* m){ memento = m;}

private:
    Memento* memento;
};

#endif