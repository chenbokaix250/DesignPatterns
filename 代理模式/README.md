# 代理模式

代理模式（Proxy Pattern）是指为其他对象提供一种代理，以控制对这个对象的访问。 代理对象在客服端和目标对象之间起到中介作用。

在生活中，我们经常见到这样的场景，如：租房中介、售票黄牛、婚介、经纪人、快递、 事务代理、非侵入式日志监听等，这些都是代理模式的实际体现

注意事项：
1、和适配器模式的区别：适配器模式主要改变所考虑对象的接口，而代理模式不能改变所代理类的接口。
2、和装饰器模式的区别：装饰器模式为了增强功能，而代理模式是为了加以控制。


## 代码流程
制造一个与目标类型同级的类 需要具备与目标类型一样的方法
就需要有个超类 先有虚方法 再用目标类和代理类共同继承

代理类的成员需要包括目标类与运行条件

他的构造与析构如下:
```c++
MySystemProxy(string userName, string password) {
        this->mUserName = userName;
        this->mPassword = password;
        pMySystem = new MySystem;
    }

~MySystemProxy() {
        if (pMySystem != NULL) {
            delete pMySystem;
        }
    }
```
调用时,也是调用代理类来完成目标类的方法
```c++
 MySystemProxy* proxy = new MySystemProxy("admin", "admin");
 proxy->run();
```
