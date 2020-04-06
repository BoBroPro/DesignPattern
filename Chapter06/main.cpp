#include"person.hpp"
#include"hat.hpp"
#include"clothes.hpp"
#include"girl.hpp"
#include"boy.hpp"

int main(){

    Person* xiaoming = new Boy();
    Hat* bhat = new Hat(xiaoming);
    Clothes* bclothes = new Clothes(bhat);

    
    xiaoming->action();
    bclothes->show();

    Person* xiaohong = new Girl();
    Hat*ghat = new Hat(xiaohong);
    Clothes *gclothes = new Clothes(ghat);
    xiaohong->action();
    gclothes->show();
    getchar();
    return 0;
}