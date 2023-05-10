#include <iostream>
using namespace std;

class AbstractHero
{
    public:
    virtual void showStatus() = 0;

    int mHp;
    int mMp;
    int mAt;
    int mDf;
};

class HeroA:public AbstractHero
{
    public:
    HeroA(){
        mHp = 0;
        mMp = 0;
        mAt = 0;
        mDf = 0;
    }

    virtual void showStatus()
	{
		cout << "血量：" << mHp << endl;
		cout << "魔法：" << mMp << endl;
		cout << "攻击：" << mAt << endl;
		cout << "防御：" << mDf << endl;
	}
};

class AbstractEquipment: public AbstractHero
{
public:
	AbstractEquipment(AbstractHero* hero)
	{
		this->pHero = hero;
	}

	virtual void showStatus()
	{
	}

	AbstractHero* pHero;
};

class KuangtuEquipment:public AbstractEquipment
{
public:
	KuangtuEquipment(AbstractHero* hero):AbstractEquipment(hero){}

	//增加额外的功能
	void AddKuangtu()
	{
		cout << "英雄穿了狂徒之后" << endl;
		this->mHp = this->pHero->mHp;
		this->mMp = this->pHero->mMp;
		this->mAt = this->pHero->mAt;
		this->mDf = this->pHero->mDf+30;
		
	}

	virtual void showStatus()
	{
		AddKuangtu();
		cout << "血量：" << mHp << endl;
		cout << "魔法：" << mMp << endl;
		cout << "攻击：" << mAt << endl;
		cout << "防御：" << mDf << endl;
	}
};

class Wujinzhireng:public AbstractEquipment
{
public:
	Wujinzhireng(AbstractHero* hero) :AbstractEquipment(hero) {}

	//增加额外的功能
	void AddKuangtu()
	{
		cout << "英雄穿了无尽之刃后" << endl;
		this->mHp = this->pHero->mHp;
		this->mMp = this->pHero->mMp;
		this->mAt = this->pHero->mAt+80;
		this->mDf = this->pHero->mDf;

	}

	virtual void showStatus()
	{
		AddKuangtu();
		cout << "血量：" << mHp << endl;
		cout << "魔法：" << mMp << endl;
		cout << "攻击：" << mAt << endl;
		cout << "防御：" << mDf << endl;
	}
};


void test01(){
    AbstractHero* hero = new HeroA;
    hero->showStatus();

    cout<<"------------"<<endl;

    hero = new KuangtuEquipment(hero);
    hero->showStatus();

    hero->mAt = 33;
    hero = new Wujinzhireng(hero);

    hero->showStatus();
}

int main(){
    test01();
    return 0;
}

