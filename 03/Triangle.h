#pragma once
#include "Figure.h"

class Triangle : public Figure
{
public:
	Triangle(int a, int b, int c, int A, int B, int C);
	
	void GetSides() override;
	void GetAngles() override;
	
protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

