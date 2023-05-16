# 原型模式

浅拷贝：将一个对象复制后，基本数据类型的变量都会重新创建，而引用类型，指向的还是原对象所指向的。

深拷贝：将一个对象复制后，不论是基本数据类型还有引用类型，都是重新创建的。简单来说，就是深复制进行了完全彻底的复制，而浅复制不彻底。clone明显是深复制，clone出来的对象是是不能去影响原型对象的

通过自身肤质自己来创建新类

```c++
Prototype* ConcretePrototype::Clone() const 
{ 
return new ConcretePrototype(*this); 
}
```

通过clone方法 返回对象本身

