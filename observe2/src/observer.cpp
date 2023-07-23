#include "observer.h"
#include <memory>


int Observer::static_number_ = 0;

void ClientCode(){

    std::shared_ptr<Subject> subject = std::make_shared<Subject>();
    std::shared_ptr<Observer> observer1 = std::make_shared<Observer>(*subject);
    std::shared_ptr<Observer> observer2 = std::make_shared<Observer>(*subject);
    std::shared_ptr<Observer> observer3 = std::make_shared<Observer>(*subject);

    
 

    subject->CreateMessage("Hello World! :D");
    observer3->RemoveMeFromTheList();

    subject->CreateMessage("The weather is hot today! :p");
    
    std::shared_ptr<Observer> observer4 = std::make_shared<Observer>(*subject);
    std::shared_ptr<Observer> observer5 = std::make_shared<Observer>(*subject);

    subject->CreateMessage("My new car is great! ;)");
    observer5->RemoveMeFromTheList();

    observer4->RemoveMeFromTheList();
    observer1->RemoveMeFromTheList();

}