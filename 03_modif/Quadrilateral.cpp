#include <iostream>
#include <string>
#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
	name = "Четырехугольник";
	side = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

void Quadrilateral::GetSides() {
	std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
}

void Quadrilateral::GetAngles() {
	std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
}