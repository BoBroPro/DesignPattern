#include<iostream>
#include"concreteaggregate.hpp"
#include"concreteiterator.hpp"
#include"concreteaggregate.cpp"
#include"concreteiterator.cpp"

using namespace std;
;
int main(){
    ConcreteAggregate* li = new ConcreteAggregate();
    li->add(1);
    li->add(2);
    li->add(3);
    li->add(4);
    li->add(5);
    Iterator* it = li->createIterator();
    cout << it->first() << endl;;
    cout << it->next() << endl;;
    cout << it->next() << endl;;
    cout << it->isDone() << endl;;
    cout << it->currentItem() << endl;;
     
    getchar();
    return 0;
}