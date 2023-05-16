# 适配器模式

适配器的作用是将不适配接口转化为适配的接口

## 设计流程

将不适配的类 装进适配器类中 成为私有成员
```c++
class Adapter:public Target 
{ 
public: 
 Adapter(Adaptee* ade); 
 ~Adapter(); 
 void Request(); 
private: 
 Adaptee* _ade;
}; 
```

将其方法 装进适配器方法中
```c++
void Adapter::Request() 
{ 
 _ade->SpecificRequest(); 
}
```

然后调用时 先创建不适配的类 装入适配器 调用适配器方法
```c++
Adaptee* ade = new Adaptee;
Target* adt = new Adapter(ade);
adt->Request();
```

