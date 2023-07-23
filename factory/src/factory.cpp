#include "factory.h"

void ClientCode(const Creator& creator){
    cout<<"Client: I'm aware of the creator's class,but it still works.\n"<<creator.SomeOperation()<<endl;
}