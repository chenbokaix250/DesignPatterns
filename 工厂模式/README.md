# 工厂模式

工厂模式的主要特点

1. 定义了创建对象的接口,封装了对象的创建
2. 使得具体化类的工作延迟到子类中

## 代码流程:

1. 创建一个product类
2. 创建一个ConcreteProduct类继承product类
3. 创建一个Factory类 包含CreateProduct虚方法,其返回值是Product的指针
4. 在ConcreteProduct中实现CreateProduct,返回ConcreteProduct.

```c++
Product* ConcreteFactory::CreateProduct() 
{ 
return new ConcreteProduct(); 
} 
```
5. 调用时,先完成工厂创建,然后产品使用工厂方法创建
```c++
Factory* fac = new ConcreteFactory(); 
Product* p = fac->CreateProduct(); 
```

