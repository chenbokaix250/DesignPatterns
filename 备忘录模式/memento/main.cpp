#include <iostream>
#include "Originator.h"
#include "Caretaker.h"
using namespace std;
int main(int argc, char* argv[])
{
	Originator originator;
	Caretaker caretaker;
	originator.setState("状态1,攻击力为100");

	//保存当前状态
	caretaker.add(originator.SaveStateMemento());

	//受到debuff,攻击力下降
	originator.setState("状态2,攻击力为80");
	//保存状态
	caretaker.add(originator.SaveStateMemento());

	cout << "当前的状态：" << originator.getState()<<endl;
	cout << "debuff时间结束,回到状态1" << endl;
	originator.getStateFromMemento(caretaker.get(0));
		cout << "恢复到状态1后的状态:" << originator.getState();
	return 0;
}