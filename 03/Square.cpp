#include "Rectangle.h"
#include "Square.h"

Square::Square(int LengthSides) : Rectangle(LengthSides, LengthSides) {
	name = "Квадрат";
}