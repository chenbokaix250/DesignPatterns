#include <iostream>
#include "AbstractFactory.h"


void test(){
    AbstractFactory* factory = NULL;
    AbstractApple* apple = NULL;
    AbstractBanana* banana = NULL;
    AbstractPear* pear = NULL;

    factory = new CHNFactory;
    apple = factory->CreateApple();
    banana = factory->CreateBanana();
    pear = factory->CreatePear();

    apple->showName();
    banana->showName();
    pear->showName();

    delete pear;
    delete apple;
    delete banana;
    delete factory;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
