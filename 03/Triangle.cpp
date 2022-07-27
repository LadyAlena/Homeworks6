#include "Figure.h"
#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	name = "Треугольник";
	side = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::GetSides()
{
	std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
}

void Triangle::GetAngles()
{
	std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
}
