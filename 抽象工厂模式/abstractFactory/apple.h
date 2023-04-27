//
// Created by 博凯 Chen on 2023/4/27.
//

#ifndef ABSTRACTFACTORY_APPLE_H
#define ABSTRACTFACTORY_APPLE_H

#include <iostream>

using namespace std;
class AbstractApple {
public:
    virtual void showName() = 0;
};

class  ChinaApple:public AbstractApple{
public:
    virtual void showName(){
        cout<<"chinese apple"<<endl;
    }
};

class USAApple:public AbstractApple{
public:
    virtual void showName(){
        cout<<"USA Apple"<<endl;
    }
};

class JPNApple:public AbstractApple{
public:
    virtual void showName(){
        cout<<"JPN apple"<<endl;
    }
};

#endif //ABSTRACTFACTORY_APPLE_H
