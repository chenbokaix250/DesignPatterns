#include <iostream>
#include <list>

using namespace std;

class AbstractHero{
    public:
    virtual void Update() = 0;
};

class HeroA:public AbstractHero{
    public:
    HeroA(){
        cout<<"英雄A正在撸BOSS"<<endl;
    }
    virtual void Update(){
        cout<<"英雄A停止撸,待机状态"<<endl;
    }
};

class HeroB:public AbstractHero{
    public:
    HeroB(){
        cout<<"英雄B正在撸BOSS"<<endl;
    }
    virtual void Update(){
        cout<<"英雄B停止撸,待机状态"<<endl;
    }
};

class HeroC :public AbstractHero {
public:
    HeroC() {
        cout << "英雄C正在鲁BOSS" << endl;
    }
    virtual void Update() {
        cout << "英雄C停止撸,待机状态" << endl;
    }
};

class HeroD :public AbstractHero {
public:
    HeroD() {
        cout << "英雄D正在鲁BOSS" << endl;
    }
    virtual void Update() {
        cout << "英雄D停止撸,待机状态" << endl;
    }
};

class HeroE :public AbstractHero {
public:
    HeroE() {
        cout << "英雄E正在鲁BOSS" << endl;
    }
    virtual void Update() {
        cout << "英雄E停止撸,待机状态" << endl;
    }
};


class AbstractBoss{
    public:
    virtual void addHero(AbstractHero* hero) = 0;
    virtual void deleteHero(AbstractHero* hero) = 0;

    virtual void notifv() = 0;
};

class BOSSA:public AbstractBoss{
    public:
    virtual void addHero(AbstractHero* hero){
        pHeroList.push_back(hero);
    }
    virtual void deleteHero(AbstractHero* hero){
        pHeroList.remove(hero);
    }

    virtual void notifv(){
        for (list<AbstractHero*>::iterator it = pHeroList.begin(); it != pHeroList.end(); it++) {
            (*it)->Update();
        }
    }
    list<AbstractHero*> pHeroList;
};

void test01() {
    //    创建观察者
    AbstractHero* heroA = new HeroA;
    AbstractHero* heroB = new HeroB;
    AbstractHero* heroC = new HeroC;
    AbstractHero* heroD = new HeroD;
    AbstractHero* heroE = new HeroE;

    //    创建观察目标
    AbstractBoss* bossA = new BOSSA;
    bossA->addHero(heroA);
    bossA->addHero(heroB);
    bossA->addHero(heroC);
    bossA->addHero(heroD);
    bossA->addHero(heroE);

    cout << "heroC阵亡" << endl;
    bossA->deleteHero(heroC);

    cout << "Boss死了，通知其他英雄停止攻击。。。" << endl;
    bossA->notifv();

}


int main(){
    test01();
    return 0;
}




