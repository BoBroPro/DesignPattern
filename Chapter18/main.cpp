#include<iostream>
#include"originator.hpp"
#include"memento.hpp"
#include"caretaker.hpp"

using namespace std;

int main(){
    Originator* originator = new Originator("Wang Er",18, 170, 60);
    Caretaker* caretaker = new Caretaker();
    caretaker->setMemento(originator->createMemento());
    originator->changeContent(25, 175, 80);
    originator->show();//Wang Er 25 175 80

    originator->SetFromMemento(caretaker->getMemento());
    originator->show(); // Wang Er 18 170 60 

    getchar();
    return 0;
}