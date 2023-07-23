#ifndef OBSERVE_H
#define OBSERVE_H

#pragma once
#include <iostream>
#include <memory>
#include <list>
#include <string>

using namespace std;

class IObserver{
public:
    virtual ~IObserver(){}
    virtual void update(const string& message_from_subject) = 0;
};

class ISubject{
public:
    virtual ~ISubject(){}

    virtual void attach(shared_ptr<IObserver> observer) = 0;

    virtual void detach(shared_ptr<IObserver> observer) = 0;

    virtual void notify() = 0;

};


class  subject:public ISubject{
    private:
    list<shared_ptr<IObserver>> mListobservers;
    string mMessage;

    public:
        virtual ~subject(){}
        void attach(shared_ptr<IObserver> observer) override{
            mListobservers.push_back(observer);
        }
        void detach(shared_ptr<IObserver> observer) override{
            mListobservers.remove(observer);
        }
        void notify()override{
            for (auto& observer:mListobservers){
                observer->update(mMessage);
            }
        }

        void createMessage(const string& message){
            mMessage = message;
            notify();
        }
};

void clientCode(){

    
    shared_ptr<subject> rSubject = shared_ptr<subject>(new subject());
    
    shared_ptr<observer> rObserver1 = shared_ptr<observer>(new observer(rSubject));
    
    shared_ptr<observer> rObserver2 = shared_ptr<observer>(new observer(rSubject));
   
    rSubject.get()->createMessage("hello");

}



class observer: public IObserver{

  
    private:
    string mMessageFromSubject;
    shared_ptr<ISubject> mSubject;
    static int mStaticNumber;
    int mNumber;
    public:
    observer(shared_ptr<ISubject> subject):mSubject(subject){
        mSubject->attach(make_shared<observer>(*this));
        
        this->mNumber = mStaticNumber;
    }

    virtual ~observer(){}

    void update(const string & messageFromSubject)override{
        mMessageFromSubject=messageFromSubject;
        cout<<"observer "<<mNumber<<"get message : "<<mMessageFromSubject<<endl;
    }

    void removeFromeTheList(){
        mSubject.get()->detach(make_shared<observer>(*this));
    }
};

int observer::mStaticNumber = 2;

void clientCode();

int main(){

    
    clientCode();
    return 0;
}

#endif
