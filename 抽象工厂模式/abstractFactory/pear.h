//
// Created by 博凯 Chen on 2023/4/27.
//

#ifndef ABSTRACTFACTORY_PEAR_H
#define ABSTRACTFACTORY_PEAR_H

#include <iostream>

using namespace std;
class AbstractPear {
public:
    virtual void showName() = 0;
};

class CHNPear :public AbstractPear {
public:
    virtual void showName() {
        cout << "CHN Pear" << endl;
    }
};

class USAPear :public AbstractPear {
public:
    virtual void showName() {
        cout << "USA Pear" << endl;
    }
};

class JPNPear :public AbstractPear {
public:
    virtual void showName() {
        cout << "JPN Pear" << endl;
    }
};

#endif //ABSTRACTFACTORY_PEAR_H
