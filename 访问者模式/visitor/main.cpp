#include <iostream>
#include <list>

class Man;
class Woman;
using namespace std;

class Action
{
    public:
    virtual void getManResult(Man* man) = 0;
    virtual void getWomanResult(Woman* woman) = 0;
    private:
};

class Success:public Action
{
    public:
    void getManResult(Man* main) override
    {
        cout<<"男人给的评价-该歌手很成功"<<endl;
    }

    void getWomanResult(Woman* woman) override
    {
        cout<<"女人给的评价-该歌手很成功"<<endl;
    }
};

class Fail :public Action
{
public:
	void getManResult(Man* man) override
	{
		cout << "男人的给的评价该歌手是失败" << endl;
	}

	void getWomanResult(Woman* woman) override
	{
		cout << "女人的给的评价该歌手是失败" << endl;
	}
};

class Person
{
    public:
    virtual void accept(Action* action) = 0;
};

class Man:public Person
{
public:
	void accept(Action* action) override
	{
		action->getManResult(this);
	}
};

class Woman: public Person
{
public:
	void accept(Action* action) override
	{
		action->getWomanResult(this);
	}
};

class ObjectStructure{
    public:
    void attach(Person* p){
        persons.push_back(p);
    }

    void detach(Person* p){
        persons.remove(p);
        delete p;
    }

    void display(Action* action){
        for(auto value:persons){
            value->accept(action);
        }
    }

    private:
    list<Person*> persons;
};


int main(int argc,char* argv[]){
    ObjectStructure* objectStructure = new ObjectStructure;
    objectStructure->attach(new Man);
    objectStructure->attach(new Woman);

    Success* success = new Success;
    objectStructure->display(success);
    cout<<"----------------------"<<endl;
    Fail* fail = new Fail;
    objectStructure->display(fail);
    return 0;
}
