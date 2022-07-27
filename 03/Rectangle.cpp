#include <string>
#include "Rectangle.h"

Rectangle::Rectangle(int LengthAandC, int LengthBandD) : Parallelogram(LengthAandC, LengthBandD, 90, 90) {
	name = "Прямоугольник";
}