#include <iostream>
#include <queue>
#include <unistd.h>
using namespace std;

class HandleClientProtocal
{
public:
    void AddMoney()
    {
        cout<<"给玩家增加金币"<<endl;
    }

    void AddDiamond()
    {
        cout<<"给玩家增加钻石"<<endl;
    }
    void AddEquipment()
    {
        cout << "给玩家穿装备" << endl;
    }
    //玩家升级
    void AddLevel()
    {
        cout << "给玩家升级" << endl;
    }

};

class AbstractCommand
{
public:
    virtual void handle() = 0;
};

class AddMoneyCommand:public AbstractCommand
{
public:
    AddMoneyCommand(HandleClientProtocal* protocal){
        this->pProtocol = protocal;
    }
    virtual void handle()
    {
        this->pProtocol->AddMoney();
    }
    HandleClientProtocal* pProtocol;
};

class AddDiamondCommand :public AbstractCommand
{
public:
    AddDiamondCommand(HandleClientProtocal* protocal)
    {
        this->pProtocol = protocal;
    }
    virtual void handle()
    {
        this->pProtocol->AddDiamond();
    }
public:
    HandleClientProtocal* pProtocol;
};

//处理玩家装备请求
class AddEquipmentCommand :public AbstractCommand
{
public:
    AddEquipmentCommand(HandleClientProtocal* protocal)
    {
        this->pProtocol = protocal;
    }
    virtual void handle()
    {
        this->pProtocol->AddEquipment();
    }
public:
    HandleClientProtocal* pProtocol;
};

//处理玩家升级请求
class AddLevelCommand :public AbstractCommand
{
public:
    AddLevelCommand(HandleClientProtocal* protocal)
    {
        this->pProtocol = protocal;
    }
    virtual void handle()
    {
        this->pProtocol->AddLevel();
    }
public:
    HandleClientProtocal* pProtocol;
};

class Server
{
public:
    void addRequest(AbstractCommand* command)
    {
        mCommands.push(command);
    }
    void startHandle(){
        while(!mCommands.empty())
        {
            sleep(2);
            AbstractCommand* command = mCommands.front();
            command->handle();
            mCommands.pop();
        }
    }
    queue<AbstractCommand*> mCommands;
};

void test()
{
    HandleClientProtocal* protocal = new HandleClientProtocal;
    AbstractCommand* addmoney = new AddMoneyCommand(protocal);
    AbstractCommand* adddiamond = new AddDiamondCommand(protocal);
    AbstractCommand* addequipment = new AddEquipmentCommand(protocal);
    AbstractCommand* addlevel = new AddLevelCommand(protocal);

    Server* server = new Server;
    server->addRequest(addmoney);
    server->addRequest(adddiamond);
    server->addRequest(addequipment);
    server->addRequest(addlevel);

    //服务器开始处理请求
    server->startHandle();
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
