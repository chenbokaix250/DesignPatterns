//
// Created by 博凯 Chen on 2023/4/27.
//

#include "Factory.h"
#include "Product.h"
#include <iostream>

using namespace std;

Factory::Factory() {

}
Factory::~Factory() noexcept {

}

ConcreteFactory::ConcreteFactory() {
    cout<<"ConcreteFactory..."<<endl;
}

ConcreteFactory::~ConcreteFactory() noexcept {}


Product* ConcreteFactory::CreateProduct() {
    return new ConcreteProduct();
}

