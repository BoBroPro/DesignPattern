#include"builder.hpp"
#include"concretebuilder.hpp"
#include"director.hpp"
int main(){
    Product* p = new Product();
    ConcreteBuilder* conbuilder = new ConcreteBuilder(p);
    Director* d = new Director(conbuilder);
    p->show();
    
    getchar();
    return 0;
}