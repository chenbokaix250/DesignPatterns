# 中介模式

Mediator 模式的实现关键就是将对象 Colleague 之间的通信封装到一个类种单独处理

所有模块的发送和接收 都通过mediator处理

mediator实现了send和add

通过colleaguesList管理所有对象
变量发送给所有对象通讯内容(除了自己)
```c++
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
```

Notify的内容 是各自ConcreteColleague实现的 这样就完成了信息的发送

相当于本模块调用Notiify时,在其他模块打印收到.





