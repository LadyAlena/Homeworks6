#include "Counter.h"
#include <iostream>

Counter::Counter(int i)
{
	this->i = i;
}

Counter::Counter()
{
	i = 1;
}

int Counter::increase()
{
	return ++i;
}

int Counter::reduce()
{
	return --i;
}

void Counter::show_counter()
{
	std::cout << i << std::endl;
}
