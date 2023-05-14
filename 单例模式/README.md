# 单例模式

Singleton 模式就是一个类只创建一个唯一的对象，即一次创建多次使用。

## 关于懒汉模式和饿汉模式

单例模式是一种常见的软件设计模式，它保证一个类只有一个实例，并提供一个全局访问点。在单例模式的实现中，懒汉模式和饿汉模式是常见的两种方式。

饿汉模式是在类加载时就创建单例实例，因此它是线程安全的。这种方式适用于单例对象比较小，且在程序运行期间一定会被使用的情况。饿汉模式的代码通常如下所示：

```
public class Singleton {
    private static Singleton instance = new Singleton();

    private Singleton() {}

    public static Singleton getInstance() {
        return instance;
    }
}
```

懒汉模式是在第一次使用时才创建单例实例，因此它可能存在线程安全问题。为了解决这个问题，可以使用 synchronized 关键字或者双重检查锁实现线程安全。懒汉模式的代码通常如下所示：

```
public class Singleton {
    private static Singleton instance;

    private Singleton() {}

    public static synchronized Singleton getInstance() {
        if (instance == null) {
            instance = new Singleton();
        }
        return instance;
    }
}
```

需要注意的是，双重检查锁实现线程安全的代码比较复杂，需要考虑多线程环境下的可见性和有序性问题，不正确的实现可能会导致线程安全问题。因此，建议在使用双重检查锁实现懒汉模式时，使用 volatile 关键字修饰 instance 变量来保证可见性和有序性。

---


* Singleton 不可以被实例化，因此将其构造函数声明private
* Singleton 模式经常和 Factory（AbstractFactory）模式在一起使用，因为系统中工厂对象一般来说只要一个