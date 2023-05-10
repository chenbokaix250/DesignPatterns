
#ifndef COLLEAGUE_H_
#define COLLEAGUE_H_
#include <string>

class Mediator;

class Colleague{
    public:
    Mediator* getMediator();
    void setMediator(Mediator* const mediator);
    Colleague(Mediator* mediator);
    virtual void Notify(std::string message)=0;

    private:
    Mediator* mediator;
};
#endif
