//
// Created by 博凯 Chen on 2023/4/27.
//

#ifndef FACTORY_PATTERN_FACTORY_H
#define FACTORY_PATTERN_FACTORY_H

class Product;
class Factory {
public:
    virtual ~Factory() = 0;

    virtual Product *CreateProduct() = 0;

protected:
    Factory();

private:
};
class ConcreteFactory:public Factory{
public:
    ~ConcreteFactory();
    ConcreteFactory();
    Product* CreateProduct();

protected:
private:
};




#endif //FACTORY_PATTERN_FACTORY_H
