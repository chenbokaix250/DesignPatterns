//Caretaker.h
#ifndef _CARETAKER_H_
#define _CARETAKER_H_

#include <vector>
#include "Memento.h"
class Caretaker
{
public:
	void add(Memento memento)
	{
		mementoList.push_back(memento);
	}

	//获取到第index个Originator的备忘录对象（即备忘录状态）
	Memento get(int index)
	{
		return mementoList[index];
	}
private:
	//在mementoList中会有很多备忘录对象
	std::vector<Memento> mementoList;
};
#endif