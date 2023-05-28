# 命令模式

Command 模式的最终目的就是将一个请求封装成一个对象，从而使您可以用不同的请求对客户进行参数化


通过增加超类 用于实现handle

```c++
class AbstractCommand
{
public:
    virtual void handle() = 0;
};
```

并通过构造函数,完成不同命令对不同方法的实现
```c++
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
```

调用时
```c++
AbstractCommand* addmoney = new AddMoneyCommand(protocal);
```


当服务器调用时,只需要传入不同的命令(AbstractCommand* addmoney),就能完成改方法的构造,然后执行handle后,就能对应到该命令的方法

