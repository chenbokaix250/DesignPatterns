#include "factory.h"



int main(){
    Creator* creator = new ConcreteCreatorA();
    ClientCode(*creator);
    cout<<endl;

    creator = new ConcreteCreatorB();
    ClientCode(*creator);
    delete creator;
}