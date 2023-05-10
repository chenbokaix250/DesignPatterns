#include <iostream>

using namespace std;

class WeaponStrategy {
    public:
    virtual void UseWeapon() = 0;
};

class Knife:public WeaponStrategy{
    public:
    virtual void UseWeapon(){
        cout<<"使用匕首"<<endl;
    }
};

class AK47:public WeaponStrategy{
    public:
    virtual void UseWeapon(){
        cout<<"使用AK47"<<endl;
    }
};

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

void test(){
    Character* character = new Character;
    WeaponStrategy* knife = new Knife;
    WeaponStrategy* ak47 = new AK47;

    character->setWeapon(knife);
    character->ThrowWeapon();

    character->setWeapon(ak47);
    character->ThrowWeapon();

    delete ak47;
    delete knife;
    delete character;

}

int main(){
    test();
    return 0;
}