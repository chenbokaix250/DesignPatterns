#include "componet.h"

void clientCode(shared_ptr<component> component){
    cout<<component->operation()<<endl;
}