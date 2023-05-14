# 抽象工厂模式

工厂模式对对象的创建给了很好的实现策略,但是Factory模式仅局限于一个类(Product)
如果要为不同类提供一个对象创建接口,就需要抽象工厂了.

抽象工厂的做法是:
1. 产品按照品类,有自己的抽象
2. 工厂按照品类,也有自己的抽象
3. 然后不同的品类,完成继承和实现
4. 不同的工厂,完成继承和实现
5. 工厂创建时,返回的指针与品类需要完成对应

```c++
class ChinaFactory :public AbstractFactory {
    virtual AbstractApple* CreateApple() {
        return new ChinaApple;
    }
    virtual AbstractBanana* CreateBanana() {
        return new ChinaBanana;
    }
    virtual AbstractPear* CreatePear() {
        return new ChinaPear;
    }
};
```

**AbstractFactory模式是为创建一组（有多类）相关或依赖的对象提供创建接口**