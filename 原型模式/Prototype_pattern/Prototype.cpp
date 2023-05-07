//
// Created by 博凯 Chen on 2023/5/7.
//

#include "Prototype.h"
#include <iostream>

using namespace std;

Prototype::Prototype() {}

Prototype::~Prototype() noexcept {}

Prototype* Prototype::Clone() const {
    return 0;
}

ConcretePrototype::ConcretePrototype() {}

ConcretePrototype::~ConcretePrototype() noexcept {}

ConcretePrototype::ConcretePrototype(const ConcretePrototype& cp) {
    cout<<"ConcretePrototype copy..."<<endl;
}

Prototype* ConcretePrototype::Clone() const{
    return new ConcretePrototype(*this);
}