# 外观模式

### 使用场景

可能你实现了一些接口（模块），而这些接口（模块）都分布在几个类中（比如 A 和 B、C、D）：A 中实现了一些接口，B 中实现一些接口（或者 A 代表一个独立模块，B、C、D 代表另一些独立模块）。然后你的客户程序员（使用你设计的开发人员）只有很少的要知道你的不同接口到底是在那个类中实现的，绝大多数只是想简单的组合你的 A－D 的类的接口，他并不想知道这些接口在哪里实现的。


## 代码流程

实现一个ktv类 在私有成员中 将要使用的接口的类 实例化 然后再实现对应的方法

主要是要实现其构造和析构
```c++

//构造函数
KTVMode() {
        pTV = new Television;
        pLight = new Light;
        pAudio = new Audio;
        pMicrophone = new Microphone;
        pDvd = new DVDplayer;
    }
//析构函数
~KTVMode() {
        delete pTV;
        delete pLight;
        delete pAudio;
        delete pMicrophone;
        delete pDvd;
    }
```

`class KTVMode`中的成员定义:
```c++
private:
    Television* pTV;
    Light* pLight;
    Audio* pAudio;
    Microphone* pMicrophone;
    DVDplayer* pDvd;
```