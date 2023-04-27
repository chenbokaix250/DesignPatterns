//
// Created by 博凯 Chen on 2023/4/27.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H
#include "apple.h"
#include "banana.h"
#include "pear.h"

class AbstractFactory {
public:
    virtual AbstractApple* CreateApple() = 0;
    virtual AbstractBanana* CreateBanana() = 0;
    virtual AbstractPear* CreatePear() = 0;
};

class CHNFactory:public AbstractFactory{
    virtual  AbstractApple* CreateApple(){
        return new ChinaApple;
    }
    virtual AbstractBanana* CreateBanana(){
        return new CHNBanana;
    }
    virtual AbstractPear* CreatePear(){
        return new CHNPear;
    }
};

class USAFactory:public AbstractFactory{
    virtual  AbstractApple* CreateApple(){
        return new USAApple;
    }
    virtual AbstractBanana* CreateBanana(){
        return new USABanana;
    }
    virtual AbstractPear* CreatePear(){
        return new USAPear;
    }
};

class JPNFactory:public AbstractFactory{
    virtual  AbstractApple* CreateApple(){
        return new JPNApple;
    }
    virtual AbstractBanana* CreateBanana(){
        return new JPNBanana;
    }
    virtual AbstractPear* CreatePear(){
        return new JPNPear;
    }
};


#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
