#include <iostream>
#include <memory>
#include <string>

using namespace std;

class component{
public:
    virtual ~component(){}
    virtual string operation() const = 0;
};

class comcreteComponent : public component{
public:
    string operation() const override{return "concreteComponent";}
};

class decorator:public component{
    protected:
    component *mComponent;
    public:
    decorator(component* component):mComponent(component){}
    virtual ~decorator(){}
    string operation() const override{return mComponent->operation();}
};

class comcreteDecoratorA:public decorator{
    public:
    comcreteDecoratorA(component* component):decorator(component){}
    string operation() const override{
        return decorator::operation() + "concreteDecoratorA";
    }
};

class comcreteDecoratorB:public decorator{
    public:
    comcreteDecoratorB(component* component):decorator(component){}
    string operation() const override{
        return decorator::operation() + "concreteDecoratorB";
    }
};


void clientCode(shared_ptr<component> component);

