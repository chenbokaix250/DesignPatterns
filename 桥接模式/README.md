# 桥接模式

* 桥接模式实现了抽象化与实现化的脱耦。他们两个互相独立，不会影响到对方。
* 对于两个独立变化的维度，使用桥接模式再适合不过了
* 分离抽象接口及其实现部分。提高了比继承更好的解决方案
---

## 设计流程

将类的实现和抽象部分分离 

在类实现时,分别用不同的继承实现不同的方法 



然后将类的实例 传给抽象类 传递的是抽象类的成员 该成员具备实现的方法

桥接 实现的是就是上述传递 也就是代码中imp的传递

```c++
RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp)
{ 
_imp = imp; 
} 
RefinedAbstraction::~RefinedAbstraction() 
{ 
} 
void RefinedAbstraction::Operation() 
{ 
 _imp->Operation(); 
} 
```

调用时:
```c++
AbstractionImp* imp = new ConcreteAbstractionImpA(); 
Abstraction* abs = new RefinedAbstraction(imp); 
abs->Operation(); 
```