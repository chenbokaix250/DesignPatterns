# 装饰器

通过创造一个抽象修饰 传入目标类 让其具备某种特性
```c++
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
```
然后通过对抽象类进行改造 修改目标类的成员 

调用时,同样需要传入目标类


