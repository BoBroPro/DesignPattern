
#include"concreteaggregate.hpp"

ConcreteIterator::ConcreteIterator(ConcreteAggregate* conA) 
    :concreteAgg(conA),currentN(0){
}

int ConcreteIterator::first(){
    return concreteAgg->getNumN(0);
}
int ConcreteIterator::next(){
    currentN ++;
    return concreteAgg->getNumN(currentN);
}

bool ConcreteIterator::isDone() {
    return currentN >= concreteAgg->getSize();
}
int ConcreteIterator::currentItem() {
    return concreteAgg->getNumN(currentN);
}