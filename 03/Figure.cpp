#include <iostream>
#include <string>
#include "Figure.h"

Figure::Figure()
{
	name = "Фигура";
	side = 0;
}

int Figure::GetCountSides()
{
	return this->side;
}

std::string Figure::GetName()
{
	return this->name;
}

void Figure::GetSides()
{
}

void Figure::GetAngles()
{
}
