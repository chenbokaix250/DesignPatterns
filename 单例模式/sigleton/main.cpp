#include <iostream>
using namespace std;

class A{
public:
    static A* getInstance(){
        return a;
    }
private:
    A(){
        a = new A;
    }

    static A* a;
};

A* A::a = NULL;

class SingletonLazy{
public:
    static SingletonLazy* getInstance(){
        if(pSingleton == NULL){
            pSingleton = new SingletonLazy;
        }
        return pSingleton;
    }
private:
    SingletonLazy(){};
    static SingletonLazy* pSingleton;
};

SingletonLazy* SingletonLazy::pSingleton=NULL;


class SingletonHungry {
public:
    static SingletonHungry* getInstance() {
        return pSingleton;
    }

    static void freeSpace() {
        if (pSingleton != NULL) {
            delete pSingleton;
        }
    }
private:
    SingletonHungry() {}
    static SingletonHungry* pSingleton;
};
//以下语句将会在main函数运行前执行
SingletonHungry* SingletonHungry::pSingleton=new SingletonHungry;



void test() {
    SingletonLazy *p1 = SingletonLazy::getInstance();
    SingletonLazy *p2 = SingletonLazy::getInstance();
    if (p1 == p2) {
        cout << "单例模式" << endl;
    } else {
        cout << "不是单例模式" << endl;
    }
    SingletonHungry *p3 = SingletonHungry::getInstance();
    SingletonHungry *p4 = SingletonHungry::getInstance();
    if (p3 == p4) {
        cout << "单例模式" << endl;
    } else {
        cout << "不是单例模式" << endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    test();
    return 0;
}
