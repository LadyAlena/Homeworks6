#include <string>
#include "Figure.h"

Figure::Figure()
{
	name = "Фигура";
	side = 0;
}

int Figure::GetCountSides()
{
	return side;
}

std::string Figure::GetName()
{
	return name;
}

void Figure::GetSides()
{
}

void Figure::GetAngles()
{
}
