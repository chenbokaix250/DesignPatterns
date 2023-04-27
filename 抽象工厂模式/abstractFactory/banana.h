//
// Created by 博凯 Chen on 2023/4/27.
//

#ifndef ABSTRACTFACTORY_BANANA_H
#define ABSTRACTFACTORY_BANANA_H
#include <iostream>

using namespace std;

class AbstractBanana {
public:
    virtual  void showName() = 0;
};

class CHNBanana:public AbstractBanana{
public:
    virtual void showName(){
        cout<<"CHN Banana"<<endl;
    }
};

class USABanana:public AbstractBanana{
public:
    virtual void showName(){
        cout<<"USA Banana"<<endl;
    }
};

class JPNBanana:public AbstractBanana{
public:
    virtual void showName(){
        cout<<"JPN Banana"<<endl;
    }
};



#endif //ABSTRACTFACTORY_BANANA_H
