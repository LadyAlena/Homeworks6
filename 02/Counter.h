#pragma once

class Counter
{
private:
	int i;

public:

	Counter(int i);
	Counter();

	int increase();
	int reduce();
	void show_counter();
};

