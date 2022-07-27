#include <iostream>
#include "Figure.h"
#include "GetInfoAboutFigure.h"

void GetInfoAboutFigure(Figure* figure)
{
	std::cout << figure->GetName() << ": " << std::endl;
	figure->GetSides();
	figure->GetAngles();
	std::cout << std::endl;
}
