#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
    virtual ~Product(){}
    virtual string Operation() const = 0;
};

class ConcreteProductA:public Product{
public:
    string Operation() const override{
        return "ConcreteProducrA";
    }
};

class ConcreteProductB:public Product{
public:
    string Operation() const override{
        return "ConcreteProducrB";
    }
};

class Creator{
public:
    virtual ~Creator(){}
    virtual Product* FactoryMethod() const = 0;
    string SomeOperation() const {
        Product *product = this->FactoryMethod();
        string result = product->Operation();
        delete product;
        return result;
    }
};


class ConcreteCreatorA:public Creator{
    public:
    Product* FactoryMethod() const override{
        return new ConcreteProductA();
    }
};

class ConcreteCreatorB:public Creator{
    public:
    Product* FactoryMethod() const override{
        return new ConcreteProductB();
    }
};

void ClientCode(const Creator& creator);



