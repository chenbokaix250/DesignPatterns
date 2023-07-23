#include "componet.h"
#include <iostream>
#include <memory>

using namespace std;

int main(){
    auto simple = shared_ptr<component>(new comcreteComponent());

    cout<<"==============="<<endl;

    clientCode(simple);
    cout<<"\n\n";

    auto dec1 = shared_ptr<component>(new comcreteDecoratorA(simple.get()));
    auto dec2 = shared_ptr<component>(new comcreteDecoratorB(dec1.get()));
    clientCode(dec2);
    return 0;
}