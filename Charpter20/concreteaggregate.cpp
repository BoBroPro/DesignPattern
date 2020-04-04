
#include"concreteaggregate.hpp"
#include<iostream>
#include<vector>
#include"concreteiterator.hpp"

using namespace std;

ConcreteAggregate::ConcreteAggregate(){

}

Iterator* ConcreteAggregate::createIterator(){
    return new ConcreteIterator(this);
};
void ConcreteAggregate::add(int a){
    vec.push_back(a);
}
int ConcreteAggregate::getSize(){
    return vec.size();
}
int ConcreteAggregate::getNumN(int n){
   if(n >= vec.size()){
        cout << "error! the dimension is beyond the Aggregate size." << endl;
        return 0;
    }
    return vec[n];
}
