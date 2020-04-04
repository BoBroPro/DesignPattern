#include<iostream>
#include"composite.hpp"
#include"leaf.hpp"

using namespace std;

int main(){
    Composite* root = new Composite("root");
    root->add(new Leaf("LeafA"));
    root->add(new Leaf("LeafB"));
    
    Composite* comp = new Composite("CompositeX");
    comp->add(new Leaf("XA"));
    comp->add(new Leaf("XB"));

    root->add(comp);

    Composite* comp2 = new Composite("CompositeXX");
    comp2->add(new Leaf("XXA"));
    comp2->add(new Leaf("XXB"));

    comp->add(comp2);

    root -> add(new Leaf("LeafC"));
    root -> add(new Leaf("LeafC"));

    root->display(1);
    getchar();
    return 0;
}