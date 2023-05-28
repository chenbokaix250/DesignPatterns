# 策略模式

主要是对算法进行封装.处理一个问题的时候可能有多种算法.这些算法的接口是一只的 

抽象一个class(weaponStrategy)

不同的算法(AK47,knife)完成继承并实现virtual

使用算法的类(Character) 实例化抽象类 并完成抽象类的参数传递和方法使用
```c++
class Character {
public:
    WeaponStrategy* pWeapon;
    void setWeapon(WeaponStrategy* pWeapon) {
        this->pWeapon = pWeapon;
    }

    void ThrowWeapon() {
        this->pWeapon->UseWeapon();
    }
};
```

然后通过setWeapon可以选择不同的ThrowWeapon,就完成了不同的策略

调用时
```c++
Character* character = new Character;
    WeaponStrategy* knife = new Knife;
    WeaponStrategy* ak47 = new AK47;

    //用匕首当作武器
    character->setWeapon(knife);
    character->ThrowWeapon();

    character->setWeapon(ak47);
    character->ThrowWeapon();

    delete ak47;
    delete knife;
    delete character;
```


