//
// Created by 博凯 Chen on 2023/5/10.
//

#ifndef MEDIATOR_CONCRETEMEDIATOR_H
#define MEDIATOR_CONCRETEMEDIATOR_H
#include <vector>
#include "Colleague.h"
#include "Mediator.h"

class ConcreteMediator:public Mediator
{
public:
    void add(Colleague* colleague)
    {
        colleaguesList.push_back(colleague);
    }

    void send(std::string message,Colleague* colleague){
        for(auto value:colleaguesList)
        {
            if(value!=colleague)
            {
                value->Notify(message);
            }
        }
    }

private:
    std::vector<Colleague*> colleaguesList;
};
#endif //MEDIATOR_CONCRETEMEDIATOR_H
