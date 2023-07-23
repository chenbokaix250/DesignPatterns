#include <iostream>
#include <memory>
#include <typeinfo>

using namespace std;


class context;

class state{
protected:
    shared_ptr<context> mContext;
public:
    virtual ~state(){}
    virtual void setContext(shared_ptr<context> context){
        this->mContext = context;
    }

    virtual void handle1() = 0;
    virtual void handle2() = 0;
};

class context{
private:
    shared_ptr<state> mState;

public:
    context(shared_ptr<state> state):mState(state){
    }
    virtual ~context(){
        cout<<"~context()"<<endl;
    }
    void setState(shared_ptr<state> state){
        mState.reset();
        this->mState = state;
    }

    void transitionTosState(shared_ptr<state> state){
        mState.reset();
        this->mState = state;
    }
    void request1(){
        this->mState.get()->handle1();
    }

    void request2(){
        this->mState.get()->handle2();
    }
};


class concreteStateA:public state{
public:
    void setContext(shared_ptr<context> context) override{
        this->mContext = context;
    }
    void handle1()override{
        cout<<"concreteStateA::handle1()"<<endl;
    }
    void handle2()override{
        cout<<"concreteStateA::handle2()"<<endl;
    }
};

class concreteStateB:public state{
public:
    void setContext(shared_ptr<context> context) override{
        this->mContext = context;
    }
    void handle1()override{
        cout<<"concreteStateB::handle1()"<<endl;
    }
    void handle2()override{
        cout<<"concreteStateB::handle2()"<<endl;
        this->mContext.get()->transitionTosState(make_shared<concreteStateA>());
    }
};

void clientCode();



