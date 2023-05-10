//Originator.h
#ifndef _ORIGINATOR_H_
#define _ORIGINATOR_H_
#include <string>

#include "Memento.h"
class Originator
{
public:
	std::string getState() const
	{
		return state;
	}

	void setState(const std::string& state)
	{
		this->state = state;
	}

	//保存一个状态对象Memento   即用当前状态的值去创建一个Memento然后将其返回
	Memento SaveStateMemento()
	{
		return Memento(state);
	}

	//通过备忘录对象，恢复状态
	void getStateFromMemento(Memento memento)
	{
		state = memento.getState();
	}
private:
	std::string state;
};
#endif