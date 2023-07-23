#include <iostream>
#include "status.h"

void clientCode(){
    shared_ptr<state> State = make_shared<concreteStateB>();
    shared_ptr<context> Context = make_shared<context>(State);
    State->setContext(Context);
    Context.get()->request1();
    Context.get()->request2();
    Context.get()->request1();
    Context.get()->request2();

}