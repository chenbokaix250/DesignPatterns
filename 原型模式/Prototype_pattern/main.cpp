#include <iostream>
#include "Prototype.h"
int main() {
//    std::cout << "Hello, World!" << std::endl;

    Prototype* p = new ConcretePrototype();
    Prototype* p1 = p->Clone();

    return 0;

}

//Prototype 模式通过复制原型（Prototype）而获得新对象创建的功能，
// 这里 Prototype本身就是“对象工厂”（因为能够生产对象），实际上
// Prototype 模式和 Builder 模式、AbstractFactory模式都是通过
// 一个类（对象实例）来专门负责对象的创建工作（工厂对象），它们之间的
// 区别是：Builder模式重在复杂对象的一步步创建（并不直接返回对象），
// AbstractFactory 模式重在产生多个相互依赖类的对象，而 Prototype
// 模式重在从自身复制自己创建新类。
//原型模式的本质就是clone，可以解决构建复杂对象的资源消耗问题，能再某
// 些场景中提升构建对象的效率；还有一个重要的用途就是保护性拷贝，可以
// 通过返回一个拷贝对象的形式，实现只读的限制
