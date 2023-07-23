#include <algorithm>
#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include "strategy.h"
using namespace std;




void clientCode(){
    shared_ptr<strategy> strategyA = make_shared<concreteStrategyA>();
    shared_ptr<strategy> strategyB = make_shared<concreteStrategyB>();

    shared_ptr<context> contextA = make_shared<context>(strategyB);
    contextA.get()->doSomeBusinessLogic();

}

