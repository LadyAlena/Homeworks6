#pragma once

class Figure
{
public:
	Figure();

	int GetCountSides();
	std::string GetName();
	virtual void GetSides();
	virtual void GetAngles();

protected:
	std::string name;
	int side;
};

