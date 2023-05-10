#ifndef _MEMENTO_H_
#define _MEMENTO_H_
#include <string>
class Memento
{
public:
	explicit Memento(const std::string& state)
		: state(state)
	{
	}

	std::string getState() const
	{
		return state;
	}

private:
	std::string state;
};

#endif